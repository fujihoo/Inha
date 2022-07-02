#pragma once

#include <iostream>
#include <cmath>
#include <algorithm>
#include "WindowAPI.h"
#include <Windows.h>
#include "framework.h"

void Textout_Test(HDC hdc, int yPos, TCHAR str[], SIZE size);
void DrawLine_Test(HDC hdc);

void DrawGrid(HDC hdc, POINT LeftTop, POINT RightBottom, LONG nWidth, LONG nHeight);
void DrawCircle_Test(HDC hdc);
void DrawCircle(HDC hdc, POINT center, double radius);
void DrawPolygon_Test(HDC hdc);
void DrawSunflower(HDC hdc, POINT center, double radius, int numofcircumscribedcircle);
void DrawStar(HDC hdc, POINT center, double radius, int numofang);
void DrawRectangle(HDC hdc, POINT LeftTop, POINT RightBottom);
void DrawRedRectangle(HDC hdc, POINT A_1, POINT A_2);
void OutFromFile(TCHAR filename[], HWND hWnd);

double LengthPts(int x1, int y1, int x2, int y2);

BOOL InCircle(int x, int y, int mx, int my);