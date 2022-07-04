#include "Turret.h"

void TurretBarrel::Init(int x, int y, Turret& T)
{
	center.x = x;
	center.y = y - T.GetRadius();
	TurretBarrel_height = T.GetRadius() * 2;

	TurretBarrel_point[0] = { center.x - (long)TurretBarrel_width / 2, center.y - (long)TurretBarrel_height / 2 };
	TurretBarrel_point[1] = { center.x - (long)TurretBarrel_width / 2, center.y - (long)TurretBarrel_height / 2 };
	TurretBarrel_point[2] = { center.x - (long)TurretBarrel_width / 2, center.y };
	TurretBarrel_point[3] = { center.x - (long)TurretBarrel_width / 2, center.y };
}

void TurretBarrel::Set_Rect_Point(Turret& T)
{
	TurretBarrel_width = T.GetRadius() / 2.5;
	TurretBarrel_height = TurretBarrel_width * 5;

	TurretBarrel_point[0] = { center.x - (long)TurretBarrel_width / 2, center.y - (long)TurretBarrel_height / 2 };
	TurretBarrel_point[1] = { center.x - (long)TurretBarrel_width / 2, center.y - (long)TurretBarrel_height / 2 };
	TurretBarrel_point[2] = { center.x - (long)TurretBarrel_width / 2, center.y - (long)TurretBarrel_height / 2 };
	TurretBarrel_point[3] = { center.x - (long)TurretBarrel_width / 2, center.y - (long)TurretBarrel_height / 2 };
}

void TurretBarrel::Rotate(int direction, Turret& T)
{
	double temp_Angle = Barrel_Angle + ((6.0 * direction) / 100.0 * M_PI);
	if (abs(temp_Angle) >= Angle_Limit)
	{
		return;
	}

	Set_Rect_Point(T);
	Barrel_Angle = temp_Angle;

	for (int i = 0; i < 4; i++)
	{
		double new_x = cos(Barrel_Angle) * ((TurretBarrel_point[i].x - T.GetCenterX())) - sin(Barrel_Angle) * ((TurretBarrel_point[i].y - T.GetCenterY()));
		double new_y = sin(Barrel_Angle) * ((TurretBarrel_point[i].x - T.GetCenterX())) + cos(Barrel_Angle) * ((TurretBarrel_point[i].y - T.GetCenterY()));
		TurretBarrel_point[i].x = new_x + T.GetCenterX();
		TurretBarrel_point[i].y = new_y + T.GetCenterY();
	}
}

void Turret::Draw(HDC hdc)
{
	HBRUSH hBrush, oldBrush;
	hBrush = CreateSolidBrush(RGB(0, 0, 0));
	oldBrush = (HBRUSH)SelectObject(hdc, hBrush);
	Ellipse(hdc, center.x - Turret_radius, center.y - Turret_radius, center.x + Turret_radius, center.y + Turret_radius);
	DeleteObject(SelectObject(hdc, oldBrush));
}

void TurretBarrel::Draw(HDC hdc)
{
	HBRUSH hBrush, oldBrush;
	hBrush = CreateSolidBrush(RGB(128, 128, 128));
	oldBrush = (HBRUSH)SelectObject(hdc, hBrush);
	Polygon(hdc, TurretBarrel_point, 4);
	DeleteObject(SelectObject(hdc, oldBrush));
}

CannonBall::CannonBall(TurretBarrel& T)
{
	POINT* BP = T.GetBarrelPOINT();
	direction_angle = T.GetAngle();
	radius = 10;
	center.x = (BP[0].x + BP[1].x) / 2 + cos(direction_angle - 0.5 * M_PI) * radius;
	center.y = (BP[0].y + BP[1].y) / 2 + sin(direction_angle - 0.5 * M_PI) * radius;\
}

void CannonBall::Move()
{
	center.x += cos(direction_angle - 0.5 * M_PI) * speed;
	center.y += sin(direction_angle - 0.5 * M_PI) * speed;
}

void CannonBall::Draw(HDC hdc)
{
	HBRUSH hBrush, oldBrush;
	hBrush = CreateSolidBrush(RGB(255, 255, 0));
	oldBrush = (HBRUSH)SelectObject(hdc, hBrush);
	Ellipse(hdc, center.x - radius, center.y - radius, center.x + radius, center.y + radius);
	DeleteObject(SelectObject(hdc, oldBrush));
}

DefenseWall::DefenseWall(int x, int y)
{
	center.x = x;
	center.y = y - height / 2;
	width = x;
}

void DefenseWall::Draw(HDC hdc)
{
	HBRUSH hBrush, oldBrush;
	hBrush = NULL;
	switch (life)
	{
	case 1:
		hBrush = CreateSolidBrush(RGB(255, 0, 0));
		break;
	case 2:
		hBrush = CreateSolidBrush(RGB(255, 165, 0));
		break;
	case 3:
		hBrush = CreateSolidBrush(RGB(0, 255, 0));
		break;
	}

	oldBrush = (HBRUSH)SelectObject(hdc, hBrush);

	Rectangle(hdc, center.x - width / 2, center.y - height / 2, center.x + width / 2, center.y + height / 2);

	DeleteObject(SelectObject(hdc, oldBrush));
}

void Enemy::Draw(HDC hdc)
{
	HBRUSH hBrush, oldBrush;
	hBrush = CreateSolidBrush(RGB(200, 0, 0));
	oldBrush = (HBRUSH)SelectObject(hdc, hBrush);
	Ellipse(hdc, center.x - radius, center.y - radius, center.x + radius, center.y + radius);
	DeleteObject(SelectObject(hdc, oldBrush));
}

bool EnemyContactWithWall(DefenseWall* wall, Enemy* shell)
{
	double distance_x = abs(wall->GetCenterX() - shell->GetCenterX());
	double distance_y = abs(wall->GetCenterY() - shell->GetCenterY() + shell->GetRadius()));
	if (distance_x <= wall->GetWidth() / 2 && distance_y <= wall->GetHeight() / 2)
	{
		return true;
	}
	return false;
}

bool EnemyContactWithCannonBall(CannonBall* ball, Enemy* shell)
{
	double distance = sqrt(pow(shell->GetCenterX() - ball->GetCenterX(), 2) + pow(shell->GetCenterY() - ball->GetCenterY(), 2));
	if (distance <= ball->GetRadius() + shell->GetRadius())
	{
		return true;
	}
	return false;
}