// WindowAPI.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//
#define _USE_MATH_DEFINES
#define BSIZE 40

#include "framework.h"
#include "WindowAPI.h"
#include "WindowDraw.h"
#include <commdlg.h>

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

VOID CALLBACK TimerProc(HWND hWnd, UINT idEvent, DWORD dwTime);

static TCHAR sTime[128];
static TCHAR str[256];
static int count, yPos;
static SIZE size;
static WPARAM selectedMenu;
HDC hdc;
PAINTSTRUCT ps;

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
		0, 0, 1000, 2000, nullptr, nullptr, hInstance, nullptr);

	/*
   HWND hWnd = CreateWindowW(szWindowClass,_T("박지후의 첫 윈도우"), WS_OVERLAPPEDWINDOW,
	   200, 300, 600, 400, nullptr, nullptr, hInstance, nullptr);
	   */

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
	static RECT screenRect;
	/*static Game maingame;*/
	OPENFILENAME OFN;
	TCHAR lpstrFile[100] = _T("");
	TCHAR filter[] = _T("EVery File(*.*) \0*.*\0")
		_T("Text File\0*.txt;*.doc\0");
	static int	x, y;
	static BOOL Selection;
	static HMENU hMenu, hSubMenu;
	int			mx, my;
	//static RECT	rectView;
	/*static RECT rcClient;
	static bool Point_Check = false;*/
	//static double circle_radius = 100;
	/*static bool Button_Down = false;
	static int count, new_x, new_y, x_move = 40, y_move = 50;*/
	/*static ObjectCircle circle[100];*/
	switch (message)
	{
	case WM_CREATE:
	{
		x = 50, y = 50;
		Selection = FALSE;

		//GetClientRect(hWnd, &rectView);
		/*count = 0;
		yPos = 120;*/

		/*CreateCaret(hWnd, NULL, 3, 20);*/
		/*ShowCaret(hWnd);*/
		hMenu = GetMenu(hWnd);
		hSubMenu = GetSubMenu(hMenu, 2);
		EnableMenuItem(hSubMenu, ID_DrawCircle, MF_ENABLED);
		EnableMenuItem(hSubMenu, ID_DrawRectangle, MF_ENABLED);
	}
		break;
	case WM_COMMAND:
	{
		int wmId = LOWORD(wParam);
		// 메뉴 선택을 구문 분석합니다:
		switch (wmId)
		{
		case ID_FILEOPEN :
		{
			TCHAR str[100], lpstrFile[100] = _T(" ");
			TCHAR filter[] = _T("Every File(*.*) \0*.*\0Text File\0*.t\0;*.doc\0");

			OPENFILENAME ofn;
			memset(&ofn, 0, sizeof(OPENFILENAME));
			ofn.lStructSize = sizeof(OPENFILENAME);
			ofn.hwndOwner = hWnd;
			ofn.lpstrFilter = filter;
			ofn.lpstrFile = lpstrFile;
			ofn.nMaxFile = 100;
			ofn.lpstrInitialDir = _T(".");
			if (GetOpenFileName(&ofn) != 0)
			{
				_stprintf_s(str, _T("%s 파일을 열겠습니까?"), ofn.lpstrFile);
				MessageBox(hWnd, str, _T("열기 선택"), MB_OK);
			}
			break;
		}
		case ID_FILESAVE:
		{
			TCHAR str[100], lpstrFile[100] = _T(" ");
			TCHAR filter[] = _T("Every File(*.*) \0*.*\0Text File\0*.t\0;*.doc\0");

			OPENFILENAME ofn;
			memset(&ofn, 0, sizeof(OPENFILENAME));
			ofn.lStructSize = sizeof(OPENFILENAME);
			ofn.hwndOwner = hWnd;
			ofn.lpstrFilter = filter;
			ofn.lpstrFile = lpstrFile;
			ofn.nMaxFile = 100;
			ofn.lpstrInitialDir = _T(".");
			if (GetSaveFileName(&ofn) != 0)
			{
				_stprintf_s(str, _T("%s 파일을 열겠습니까?"), ofn.lpstrFile);
				MessageBox(hWnd, str, _T("열기 선택"), MB_OK);
			}
			break;
		}
		case IDM_ABOUT:
			DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
			break;
		case ID_DrawCircle:
		case ID_DrawRectangle:
		{
			selectedMenu = wmId;
			int answer = MessageBox(hWnd, _T("선택한 메뉴로 실행하겠습니까?"), _T("메뉴선택확인"), MB_OKCANCEL);

			if (answer == IDOK)
			{
				InvalidateRect(hWnd, NULL, TRUE);
			}
			else if (answer == IDCANCEL)
			{

			}
			break;
		}
	
		case IDM_EXIT:
		{
			DestroyWindow(hWnd);
			break;
		}
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
	}
	break;
	case WM_PAINT:
	{
		PAINTSTRUCT ps;
		hdc = BeginPaint(hWnd, &ps);
		/*POINT A, B;
		A.x = x + 20, A.y = 20;*/

		if (Selection)
			Rectangle(hdc, x - BSIZE, y - BSIZE, x + BSIZE, y + BSIZE);
		Ellipse(hdc, x - BSIZE, y - BSIZE, x + BSIZE, y + BSIZE);
		/*if (flag)
			SelectObject(hdc, GetStockObject(LTGRAY_BRUSH));*/
		
	
	/*	case ID_DrawCircle:

		case ID_DrawRectangle:*/
		// TODO: 여기에 hdc를 사용하는 그리기 코드를 추가합니다...
		/*DrawLine_Test(hdc);*/
		/*POINT a, b;
		a.x = 0;
		a.y = 0;
		b.x = 700;
		b.y = 700;*/

		/*POINT O;
		O.x = 500;
		O.y = 450;
		int Radius = 200;
		int numofang = 6;

		DrawStar(hdc, O, Radius, numofang);*/

		/*POINT A_1{ 100, 100 }, A_2{ 200, 200 }, B_1{ 200, 0 }, B_2{ 300, 100 },
			C_1{ 300, 100 }, C_2{ 400, 200 }, D_1{ 200, 200 }, D_2{ 300, 300 };

		RECT rc1{ A_1.x, A_1.y, A_2.x, A_2.y };
		if (x != -1)
		{
			DrawRectangle(hdc, A_1, A_2);
			DrawText(hdc, _T("왼쪽"), _tcslen(_T("왼쪽")), &rc1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
		}
		else
			DrawRedRectangle(hdc, A_1, A_2);

		RECT rc2{ B_1.x, B_1.y, B_2.x, B_2.y };
		if (y != -1)
		{
			DrawRectangle(hdc, B_1, B_2);
			DrawText(hdc, _T("위쪽"), _tcslen(_T("위쪽")), &rc2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
		}
		else
			DrawRedRectangle(hdc, B_1, B_2);

		RECT rc3{ C_1.x, C_1.y, C_2.x, C_2.y };
		if (x != 1)
		{
			DrawRectangle(hdc, C_1, C_2);
			DrawText(hdc, _T("오른쪽"), _tcslen(_T("오른쪽")), &rc3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
		}
		else
			DrawRedRectangle(hdc, C_1, C_2);

		RECT rc4{ D_1.x, D_1.y, D_2.x, D_2.y };
		if (y != 1)
		{
			DrawRectangle(hdc, D_1, D_2);
			DrawText(hdc, _T("아래쪽"), _tcslen(_T("아래쪽")), &rc4, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
		}
		else
			DrawRedRectangle(hdc, D_1, D_2);*/

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
	case WM_LBUTTONDOWN:
	{
		POINT temp;
		temp.x = LOWORD(lParam);
		temp.y = HIWORD(lParam);

	
		/*if (InCircle(x, y, mx, my))
			Selection = TRUE;*/

		InvalidateRgn(hWnd, NULL, TRUE);
		break;
	}
	case WM_LBUTTONUP:
	{
		Selection = FALSE;
		InvalidateRgn(hWnd, NULL, TRUE);
		break;
	}
	case WM_MOUSEMOVE:
		mx = LOWORD(lParam);
		my = HIWORD(lParam);
		if (Selection)
		{
			x = mx;
			y = my;
			InvalidateRgn(hWnd, NULL, TRUE);
		}
		break;
	case WM_CHAR:
	{
		/*int breakpoint = 999;

		if (wParam == VK_BACK && count > 0) count--;
		else if (wParam == VK_RETURN) yPos += 20;
		else str[count++] = wParam;
		str[count] = NULL;

		InvalidateRect(hWnd, NULL, TRUE);*/
	}
	break;
	case WM_KEYUP:
	{
		/*flag = false;*/

		/*switch (wParam)
		{
		case VK_RIGHT:
			x = 0;
			break;
		case VK_LEFT:
			x = 0;
			break;
		case VK_DOWN:
			y = 0;
			break;
		case VK_UP:
			y = 0;
			break;
		default:
			break;
		}
		*/
		/*InvalidateRect(hWnd, NULL, TRUE);
		break;*/
	}
	case WM_KEYDOWN:
	{
		/*if (wParam == VK_RIGHT)
			SetTimer(hWnd, 1, 70, NULL);*/
		/*{
			flag = true;
			x += 40;
			if (x + 20 > rectView.right)
				x = rectView.right - 40;
		}*/
		/*int breakpoint = 999;*/
		/*switch (wParam)
		{
		case VK_RIGHT:
			x = 1;
			break;
		case VK_LEFT:
			x = -1;
			break;
		case VK_DOWN:
			y = 1;
			break;
		case VK_UP:
			y = -1;
			break;
		default:
			break;
		}*/
		//InvalidateRect(hWnd, NULL, TRUE);	// 기존 화면 지워주면서 다시 프린트
		/*break;*/
	}
	/*case WM_TIMER:
		x += 40;
		if (x + 20 > rectView.right)
			x = rectView.right - 40;
		InvalidateRgn(hWnd, NULL, TRUE);
		break;*/
	case WM_DESTROY:
		/*	HideCaret(hWnd);
			DestroyCaret();*/
		PostQuitMessage(0);
		break;
	/*case WM_SIZE:
		GetClientRect(hWnd, &rectView);
		break;*/
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

/*
Q1. 원의 중점과 반지름을 인자로 받아 원을 그리는 함수를 구현하라.

Q2. 해바라기 그리기 함수를 구현하라.
	원을 그리기 위한 기본 정보에 .. 외각에 그려질 원의 개수를 입력 받아
	해바라기 형식으로 그려지도록 한다.

Q3. 별을 그리는 함수를 구현하라.
	별의 중점과 별과 외곽점까지의 거리를 입력 받아 별을 그리도록 한다.
*/

/*
Q1. 클라이언트 영역에 마우스 클릭하면
	현재 마우스 위치에 원을 랜덤하게 생성.
	생성된 도형은 임의의 방향으로 이동, 클라이언트 영역을 넘어서지 않게 외곽에서 반사

	옵션 : 1, 2, 3 번호 키로 설정.

	1번 - 다른 오브젝트와 부딪치면 서로 튕기기
	2번 - 다른 오브젝트와 부딪치면 하나로 합체해서 커지게 하기
	3번 - 다른 오브젝트와 부딪치면 분열해서 작아지게 하기

*/

VOID CALLBACK TimerProc(HWND hWnd, UINT idEvent, DWORD dwTime)
{
	SYSTEMTIME st;
	GetLocalTime(&st);
	wsprintf(sTime, _T("지금 시간은 %d:%d:%d 입니다", st.wHour, st.wMinute, st.wSecond));
	InvalidateRgn(hWnd, NULL, TRUE);
}