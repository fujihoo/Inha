#define _USE_MATH_DEFINES
#include "WindowDraw.h"

void Textout_Test(HDC hdc, int yPos, TCHAR str[], SIZE size)
{
	TextOut(hdc, 100, 100, _T("Hello World!"), _tcslen(_T("Hello World!")));

	RECT rc;
	rc.left = 200;
	rc.top = 200;
	rc.right = 300;
	rc.bottom = 300;
	DrawText(hdc, _T("Hello World!"), _tcslen(_T("Hello World!")), &rc, DT_VCENTER);

	// : Key input
	{
		SetTextColor(hdc, RGB(255, 0, 0));
		TextOut(hdc, 400, yPos, str, _tcslen(str));
		GetTextExtentExPointW(hdc, str, _tcslen(str), 0, 0, 0, &size);
		SetCaretPos(400 + size.cx, yPos);
	}
}

void DrawLine_Test(HDC hdc)
{
	MoveToEx(hdc, 250, 250, NULL);
	LineTo(hdc, 500, 500);
}

void DrawGrid(HDC hdc, POINT LeftTop, POINT RightBottom, LONG nWidth, LONG nHeight)
{
	for (int i = 0; i <= RightBottom.y / nHeight; i++)
	{
		MoveToEx(hdc, 0, LeftTop.y + i * nHeight, NULL);
		LineTo(hdc, RightBottom.x, LeftTop.y + i * nHeight);
	}

	for (int i = 0; i <= RightBottom.x / nWidth; i++)
	{
		MoveToEx(hdc, LeftTop.x + i * nWidth, 0, NULL);
		LineTo(hdc, LeftTop.x + i * nWidth, RightBottom.y);
	}
}

void DrawCircle_Test(HDC hdc)
{
	Ellipse(hdc, 300, 300, 500, 400);
}

void DrawRectangle_Test(HDC hdc)
{
	Rectangle(hdc, 500, 300, 700, 500);
}

void DrawPolygon_Test(HDC hdc)
{
	POINT point[5] = { {10, 150}, {250, 30}, {500, 150}, {350, 300}, {150, 300} };
	Polygon(hdc, point, 5);
}

void DrawCircle(HDC hdc, POINT center, double radius)
{
	Ellipse(hdc, center.x - radius, center.y - radius, center.x + radius, center.y + radius);
}

void DrawSunflower(HDC hdc, POINT center, double radius, int numofcircumscribedcircle)
{
	DrawCircle(hdc, center, radius);
	double radius2 = (radius * sin(M_PI / numofcircumscribedcircle) / (1 - sin(M_PI / numofcircumscribedcircle)));
	const double radian = M_PI / numofcircumscribedcircle;
	for (int i = 0; i < numofcircumscribedcircle; i++)
	{
		POINT R;

		R.x = center.x + (radius + radius2) * (cos(radian * (2 * i)));
		R.y = center.y + (radius + radius2) * (sin(radian * (2 * i)));

		DrawCircle(hdc, R, radius2);
	}
}

void DrawStar(HDC hdc, POINT center, double radius, int numofang)
{
	const double radian = 2 * M_PI / numofang;
	POINT* R = new POINT[numofang];
	POINT* r = new POINT[numofang];
	POINT* C = new POINT[2 * numofang];
	for (int i = 0; i < numofang; i++)
	{
		double radius2 = radius * (cos((2 * M_PI) / numofang) / cos((M_PI) / numofang));

		R[i].x = center.x + radius * (cos(radian * i + (M_PI / 2)));
		R[i].y = center.y + radius * (sin(radian * i + (M_PI / 2)));

		r[i].x = center.x + radius2 * (cos(radian * ((1 / 2.0) * ((2 * i) + 1)) + (M_PI / 2)));
		r[i].y = center.y + radius2 * (sin(radian * ((1 / 2.0) * ((2 * i) + 1)) + (M_PI / 2)));

		C[2 * i] = R[i];
		C[2 * i + 1] = r[i];
	}
	Polygon(hdc, C, 2 * numofang);
	delete[] R;
	delete[] r;
	delete[] C;
}

void DrawRectangle(HDC hdc, POINT LeftTop, POINT RightBottom)
{
	Rectangle(hdc, LeftTop.x, LeftTop.y, RightBottom.x, RightBottom.y);
}

void DrawRedRectangle(HDC hdc, POINT A_1, POINT A_2)
{
	HBRUSH hBrush, oldBrush;
	hBrush = CreateSolidBrush(RGB(255, 0, 0));
	oldBrush = (HBRUSH)SelectObject(hdc, hBrush);
	DrawRectangle(hdc, A_1, A_2);
	SelectObject(hdc, oldBrush);
	DeleteObject(hBrush);
}

double LengthPts(int x1, int y1, int x2, int y2)
{
	return(sqrt((float)((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1))));
}

BOOL InCircle(int x, int y, int mx, int my)
{
	if (LengthPts(x, y, mx, my) < BSIZE)
		return TRUE;
	else
		return FALSE;
}

void OutFromFile(TCHAR filename[], HWND hWnd)
{
	FILE* fPtr;
	HDC hdc;
	int line;
	TCHAR buffer[500];
	line = 0;
	hdc = GetDC(hWnd);
#ifdef _UNICODE
	_tfopen_s(&fPtr, filename, _T("r, ccs = UNICODE"));
#else
	_tfopen_s(&fPtr, filename, _T("r"));
#endif
	while (_fgetts(buffer, 100, fPtr) != NULL)
	{
		if (buffer[_tcslen(buffer) - 1] == _T('\n'))
			buffer[_tcslen(buffer) - 1] == NULL;
		TextOut(hdc, 0, line * 20, buffer, _tcslen(buffer));
		line++;
	}
	fclose(fPtr);
	ReleaseDC(hWnd, hdc);
}