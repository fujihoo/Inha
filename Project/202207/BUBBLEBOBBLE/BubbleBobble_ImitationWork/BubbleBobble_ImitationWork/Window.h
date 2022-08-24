#pragma once
#include <windows.h>

class Window
{
private:
	HBITMAP hIntroImage;
	BITMAP bitIntro;
	int Run_Frame_Max = 0;
	int Run_Frame_Min = 0;
	int curFrame = Run_Frame_Min;
public:
	void CreateBitmap();
	void UpdateFrame(HWND hWnd);
	void DeleteBitmap(HDC hdc);
	static VOID CALLBACK TimerProc(HWND hWnd, UINT uMsg, UINT idEvent, DWORD dwTime);
};