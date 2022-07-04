#pragma once
#define _USE_MATH_DEFINES
#include "WindowDraw.h"
#include <vector>
#include <cmath>

using namespace std;

class CommonObject
{
protected:
	POINT center;
	double radius;
public:
	virtual ~CommonObject() {};
	long GetCenterX() { return center.x; }
	void SetCenterX(int X) { center.x = X; }

	long GetCenterY() { return center.y; }
	void SetCenterY(int Y) { center.y = Y; }

	double GetRadius() { return radius; }
	void SetRadius(double d) { radius = d; }

	virtual void Draw(HDC hdc) = 0;
};

class Turret : public CommonObject
{
private:
	double Turret_radius = 50;
public:
	Turret() {};
	void Init(int X, int Y) { center.x = X; center.y = Y; radius = 50; }
	virtual ~Turret() {};

	virtual void Draw(HDC hdc);
};

class TurretBarrel : public Turret
{
private:
	POINT TurretBarrel_point[4] = {};

	double TurretBarrel_width = 20;
	double TurretBarrel_height = 100;
	double Barrel_Angle = 0;

	double Angle_Limit = 0.48 * M_PI;
public:
	TurretBarrel() {};
	void Init(int x, int y, Turret& T);
	~TurretBarrel() {};

	POINT* GetBarrelPOINT() { return TurretBarrel_point; };

	double GetAngle() { return Barrel_Angle; }
	void SetAngle(double delta) { Barrel_Angle = delta; }

	double GetHeight() { return TurretBarrel_height; }

	void Set_Rect_Point(Turret& T);
	void Rotate(int direction, Turret& T);
	virtual void Draw(HDC hdc);
};

class CannonBall : public CommonObject
{
private:
	double direction_angle;
	double speed = 10;
public:
	CannonBall(TurretBarrel& T);
	~CannonBall() {};

	double GetSpeed() { return speed; }

	void Set_Angle(double Angle) { direction_angle = Angle; }
	void Move();
	virtual void Draw(HDC hdc);
};

class DefenseWall : public CommonObject
{
private:
	double width;
	double height = 20;
	int life = 3;
public:
	DefenseWall(int x, int y);
	~DefenseWall() {};

	void DecreaseLife() { life -= 1; }
	int GetLife() { return life; }
	void SetWidth(int Y) { width = Y; }
	double GetWidth() { return width; }
	void SetHeight(int Y) { height = Y; }
	double GetHeight() { return height; }

	virtual void Draw(HDC hdc);
};

class Enemy : public CommonObject
{
private:
	double speed = 8;
public:
	Enemy(int X) { center.x = X; center.y = 10; radius = 20; }
	~Enemy() {};

	double GetSpeed() { return speed; }

	void Move() { center.y += speed; }
	virtual void Draw(HDC hdc);
};

bool EnemyContactWithWall(DefenseWall* wall, Enemy* shell);
bool EnemyContactWithCannonBall(CannonBall* ball, Enemy* shell);