#include "Window.h"

void Window::CreateBitmap()
{
	// : for bitblt
	hIntroImage = (HBITMAP)LoadImage(NULL, TEXT("Resource/Title.png"),
		IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE || LR_CREATEDIBSECTION);
	GetObject(hIntroImage, sizeof(BITMAP), &bitIntro);
}

void Window::UpdateFrame(HWND hWnd)
{
	if (++curFrame > Run_Frame_Max)
		curFrame = Run_Frame_Min;
}

void Window::DeleteBitmap(HDC hdc)
{
	DeleteObject(hIntroImage);
}

void Window::TimerProc(HWND hWnd, UINT uMsg, UINT idEvent, DWORD dwTime)
{
	UpdateFrame(hWnd);
	InvalidateRgn(hWnd, NULL, FALSE);
}