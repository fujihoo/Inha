#include "WindowDraw.h"

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