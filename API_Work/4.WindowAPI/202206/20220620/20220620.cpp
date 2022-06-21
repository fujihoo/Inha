// 20220620.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//
#define _USE_MATH_DEFINES

#include <cmath>
#include <numbers>
#include "framework.h"
#include "20220620.h"

#define MAX_LOADSTRING 100

// 전역 변수:
HINSTANCE hInst;                                // 현재 인스턴스입니다.
WCHAR szTitle[MAX_LOADSTRING];                  // 제목 표시줄 텍스트입니다.
WCHAR szWindowClass[MAX_LOADSTRING];            // 기본 창 클래스 이름입니다.

// 이 코드 모듈에 포함된 함수의 선언을 전달합니다:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

static TCHAR str[256];
static int count, yPos;
static SIZE size;
HDC hdc;
PAINTSTRUCT ps;

void Textout_Test();
void DrawLine_Test(HDC hdc);

void DrawGrid(HDC hdc, POINT LeftTop, POINT RightBottom, LONG nWidth, LONG nHeight);
void DrawCircle_Test(HDC hdc);
void DrawCircle(HDC hdc, POINT center, double radius);
void DrawPolygon_Test(HDC hdc);
void DrawSunflower(HDC hdc, POINT center, double radius, int numofcircumscribedcircle);
void DrawStar(HDC hdc, POINT center, double radius, int numofang);


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	// TODO: 여기에 코드를 입력합니다.

	// 전역 문자열을 초기화합니다.
	LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadStringW(hInstance, IDC_MY20220620, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);

	// 애플리케이션 초기화를 수행합니다:
	if (!InitInstance(hInstance, nCmdShow))
	{
		return FALSE;
	}

	HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_MY20220620));

	MSG msg;

	// 기본 메시지 루프입니다:
	while (GetMessage(&msg, nullptr, 0, 0))
	{
		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

	return (int)msg.wParam;
}



//
//  함수: MyRegisterClass()
//
//  용도: 창 클래스를 등록합니다.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEXW wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_QUESTION));
	wcex.hCursor = LoadCursor(nullptr, IDC_IBEAM);
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wcex.lpszMenuName = MAKEINTRESOURCEW(IDC_MY20220620);
	wcex.lpszClassName = szWindowClass;
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_QUESTION));

	return RegisterClassExW(&wcex);
}

//
//   함수: InitInstance(HINSTANCE, int)
//
//   용도: 인스턴스 핸들을 저장하고 주 창을 만듭니다.
//
//   주석:
//
//        이 함수를 통해 인스턴스 핸들을 전역 변수에 저장하고
//        주 프로그램 창을 만든 다음 표시합니다.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
	hInst = hInstance; // 인스턴스 핸들을 전역 변수에 저장합니다.

	HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
		0, 0, 1000, 1000, nullptr, nullptr, hInstance, nullptr);

	if (!hWnd)
	{
		return FALSE;
	}

	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	return TRUE;
}

//
//  함수: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  용도: 주 창의 메시지를 처리합니다.
//
//  WM_COMMAND  - 애플리케이션 메뉴를 처리합니다.
//  WM_PAINT    - 주 창을 그립니다.
//  WM_DESTROY  - 종료 메시지를 게시하고 반환합니다.
//
//



LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) // 메
{


	switch (message)
	{
	case WM_CREATE:
		count = 0;
		yPos = 120;

		/*CreateCaret(hWnd, NULL, 3, 20);*/
		/*ShowCaret(hWnd);*/
		break;
	case WM_COMMAND:
	{
		int wmId = LOWORD(wParam);
		// 메뉴 선택을 구문 분석합니다:
		switch (wmId)
		{
		case IDM_ABOUT:
			DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
			break;
		case IDM_EXIT:
			DestroyWindow(hWnd);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
	}
	break;
	case WM_PAINT:
	{
		PAINTSTRUCT ps;
		hdc = BeginPaint(hWnd, &ps);
		// TODO: 여기에 hdc를 사용하는 그리기 코드를 추가합니다...
		/*DrawLine_Test(hdc);*/
		/*POINT a, b;
		a.x = 0;
		a.y = 0;
		b.x = 700;
		b.y = 700;*/
		POINT O;
		O.x = 500;
		O.y = 450;
		int Radius = 200;
		int numofang = 6;

		DrawStar(hdc, O, Radius, numofang);

		/*DrawSunflower(hdc, O, Radius, numofcircumscribedcircle);*/
		//DrawCircle(hdc, O, Radius);
		/*DrawGrid(hdc, a, b, 20, 20);
		DrawCircle_Test(hdc);
		{
			HPEN hPen, oldPen;
			hPen = CreatePen(PS_DOT, 1, RGB(255, 0, 0));
			oldPen = (HPEN)SelectObject(hdc, hPen);
			DrawPolygon_Test(hdc);
			SelectObject(hdc, oldPen);
			DeleteObject(hPen);
		}

		{
			HBRUSH hBrush, oldBrush;
			hBrush = CreateSolidBrush(RGB(0, 255, 0));
			oldBrush = (HBRUSH)SelectObject(hdc, hBrush);
			DrawPolygon_Test(hdc);
			SelectObject(hdc, oldBrush);
			DeleteObject(hBrush);
		}*/

		EndPaint(hWnd, &ps);
	}
	break;
	case WM_DESTROY:
		HideCaret(hWnd);
		DestroyCaret();
		PostQuitMessage(0);
		break;
	case WM_KEYDOWN:
	{
		int breakpoint = 999;
	}
	break;
	case WM_CHAR:
	{
		int breakpoint = 999;

		if (wParam == VK_BACK && count > 0) count--;
		else if (wParam == VK_RETURN) yPos += 20;
		else str[count++] = wParam;
		str[count] = NULL;

		InvalidateRect(hWnd, NULL, TRUE);
	}
	break;
	case WM_KEYUP:
	{
		int breakpoint = 999;
	}
	break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

// 정보 대화 상자의 메시지 처리기입니다.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}

void Textout_Test()
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

//void DrawLine_Test(HDC hdc)
//{
//	MoveToEx(hdc, 250, 250, NULL);
//	LineTo(hdc, 500, 500);
//}




void DrawGrid(HDC hdc, POINT LeftTop, POINT RightBottom, LONG nWidth, LONG nHeight)
{
	for (int i = 0; i <= RightBottom.y/nHeight; i++) 
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

		R.x = center.x + (radius + radius2) * (cos(radian * (2*i)));
		R.y = center.y + (radius + radius2) * (sin(radian * (2*i)));

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

		C[2*i] = R[i];
		C[2*i + 1] = r[i];
	}
	Polygon(hdc, C, 2 * numofang);
	delete[] R;
	delete[] r;
	delete[] C;
}
/*
Q1. 원의 중점과 반지름을 인자로 받아 원을 그리는 함수를 구현하라.

Q2. 해바라기 그리기 함수를 구현하라.
	원을 그리기 위한 기본 정보에 .. 외각에 그려질 원의 개수를 입력 받아
	해바라기 형식으로 그려지도록 한다.

Q3. 별을 그리는 함수를 구현하라.
	별의 중점과 별과 외곽점까지의 거리를 입력 받아 별을 그리도록 한다.
*/