// WindowAPI.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//
#define _USE_MATH_DEFINES
#define BSIZE 40

#include "framework.h"
#include "WindowAPI.h"
#include "WindowDraw.h"
#include <commdlg.h>

// >> : GDI+
#include <objidl.h>
#include <gdiplus.h>
#pragma comment(lib, "Gdiplus.lib")
using namespace Gdiplus;
// << :

#pragma comment(lib, "msimg32.lib")

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

// >> : bitmap
HBITMAP hBackImage;
BITMAP bitBack;

HBITMAP hSigongImage;
BITMAP bitSigong;

HBITMAP hAniImage;
BITMAP bitAni;
const int Sprite_Size_X = 57;
const int SPrite_Size_Y = 52;

int Run_Frame_Max = 0;
int Run_Frame_Min = 0;
int curFrame = Run_Frame_Min;

HBITMAP hDoubleBufferingImage;
HBITMAP HTransparentImage;
BITMAP bitTransparent;

//void DrawBitmapDoubleBuffering(HWND hWnd, HDC hdc);
void DrawBitmapDoubleBuffering(HDC hdc);
void UpdateFrame(HWND hWnd);
void CreateBitmap();
void DrawBitmap(HDC hdc);
//void DrawBitmap(HWND hWnd, HDC hdc);
void DeleteBitmap();
//void DeleteBitmpa();
// << :

// >> : GDI+
ULONG_PTR g_GdiToken;
void Gdi_Init();
void Gdi_Draw(HDC hdc);
void Gdi_End();
// << : GDI+


VOID CALLBACK KeyStateProc(HWND hWnd, UINT uMsg, UINT idEvent, DWORD dwTime);
VOID CALLBACK TimerProc(HWND hWnd, UINT uMsg, UINT idEvent, DWORD dwTime);
TCHAR sKeyState[128];
void Update();
POINT ptAni = { 200, 400 };

static TCHAR sTime[128];
static TCHAR str[256];
static int count, yPos;
static SIZE size;
static WPARAM selectedMenu;
HDC hdc;
PAINTSTRUCT ps;

// >> : dialog box
BOOL CALLBACK Dlg_Proc(HWND hWnd, UINT iMsg, WPARAM wParam, LPARAM lParam);


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
	/*while (GetMessage(&msg, nullptr, 0, 0))
	{
		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}*/
	Gdi_Init();
	while (true)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			if (msg.message == WM_QUIT)
			{
				break;
			}
			else
			{
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
		}
		else
		{
			Update();
		}
	}
	Gdi_End();
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
static RECT screenRect;

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) // 메
{
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

		GetClientRect(hWnd, &screenRect);
		//GetClientRect(hWnd, &rectView);
		/*count = 0;
		yPos = 120;*/
		CreateBitmap();

		SetTimer(hWnd, 1, 200, KeyStateProc);
		SetTimer(hWnd, 3, 100, TimerProc);


		/*CreateCaret(hWnd, NULL, 3, 20);*/
		/*ShowCaret(hWnd);*/
		hMenu = GetMenu(hWnd);
		hSubMenu = GetSubMenu(hMenu, 2);
		EnableMenuItem(hSubMenu, ID_DrawCircle, MF_ENABLED);
		EnableMenuItem(hSubMenu, ID_DrawRectangle, MF_ENABLED);
	}
	break;
	case WM_TIMER:
		break;
	case WM_COMMAND:
	{
		int wmId = LOWORD(wParam);
		// 메뉴 선택을 구문 분석합니다:
		switch (wmId)
		{
		case ID_FILEOPEN:
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
				//InvalidateRect(hWnd, NULL, TRUE);
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
		//PAINTSTRUCT ps;
		hdc = BeginPaint(hWnd, &ps);

		//DrawBitmapDoubleBuffering(hWnd, hdc);
		DrawBitmapDoubleBuffering(hdc);
		/*POINT A, B;
		A.x = x + 20, A.y = 20;*/

		//if (Selection)
		//	Rectangle(hdc, x - BSIZE, y - BSIZE, x + BSIZE, y + BSIZE);
		//Ellipse(hdc, x - BSIZE, y - BSIZE, x + BSIZE, y + BSIZE);
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
	case WM_SIZE:
	{
		GetClientRect(hWnd, &screenRect);
	}
	break;
	case WM_LBUTTONDOWN:
	{
		POINT StartPos;
		StartPos.x = LOWORD(lParam);
		StartPos.y = HIWORD(lParam);
		DialogBox(hInst, MAKEINTRESOURCE(IDD_DIALOG1), hWnd, Dlg_Proc);


		/*if (InCircle(x, y, mx, my))
			Selection = TRUE;*/

			//InvalidateRgn(hWnd, NULL, TRUE);
		break;
	}
	case WM_LBUTTONUP:
	{
		Selection = FALSE;
		//InvalidateRgn(hWnd, NULL, TRUE);
		break;
	}
	case WM_MOUSEMOVE:
		mx = LOWORD(lParam);
		my = HIWORD(lParam);
		if (Selection)
		{
			x = mx;
			y = my;
			//InvalidateRgn(hWnd, NULL, TRUE);
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
		break;
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
			//DeleteBitmpa();
		DeleteBitmap();
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

void CreateBitmap()
{
	// : for bitblt
	hBackImage = (HBITMAP)LoadImage(NULL, TEXT("images/수지.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	GetObject(hBackImage, sizeof(BITMAP), &bitBack);

	// : for trans .. blt
	hSigongImage = (HBITMAP)LoadImage(NULL, TEXT("images/sigong.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	GetObject(hSigongImage, sizeof(BITMAP), &bitSigong);

	// : for ani .. blt
	hAniImage = (HBITMAP)LoadImage(NULL, TEXT("images/zero_run.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
	GetObject(hAniImage, sizeof(BITMAP), &bitAni);
	Run_Frame_Max = bitAni.bmWidth / Sprite_Size_X - 1;
	Run_Frame_Min = 2;
	curFrame = Run_Frame_Min;
}


void DrawBitmapDoubleBuffering(HDC hdc)
{
	HDC hMemDC;
	HBITMAP hOldBitmap;
	int bx, by;


	// >> :
	HDC hMemDC2;
	HBITMAP hOldBitmap2;
	// << :
	hMemDC = CreateCompatibleDC(hdc);
	// >> :
	if (hDoubleBufferingImage == NULL)
		hDoubleBufferingImage = CreateCompatibleBitmap(hdc, screenRect.right, screenRect.bottom);
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hDoubleBufferingImage);
	// << :
	// : for background
	{
		hMemDC2 = CreateCompatibleDC(hMemDC);
		hOldBitmap2 = (HBITMAP)SelectObject(hMemDC2, hBackImage);
		bx = bitBack.bmWidth;
		by = bitBack.bmHeight;

		BitBlt(hMemDC, 0, 0, bx, by, hMemDC2, 0, 0, SRCCOPY);
		//StretchBlt(hMemDC, 900, 0, 200, 200, hMemDC2, 0, 0, bx, by, SRCCOPY);

		SelectObject(hMemDC2, hOldBitmap2);
		DeleteDC(hMemDC2);
	}
	// : for trans...
	{
		hMemDC2 = CreateCompatibleDC(hMemDC);
		hOldBitmap2 = (HBITMAP)SelectObject(hMemDC2, hSigongImage);
		bx = bitSigong.bmWidth;
		by = bitSigong.bmHeight;

		TransparentBlt(hMemDC, 200, 200, bx, by, hMemDC2, 0, 0, bx, by, RGB(255, 0, 255));

		SelectObject(hMemDC2, hOldBitmap);
		DeleteDC(hMemDC2);
	}
	// : for ani
	{
		hMemDC2 = CreateCompatibleDC(hMemDC);
		hOldBitmap = (HBITMAP)SelectObject(hMemDC2, hAniImage);
		bx = bitAni.bmWidth / 16;
		by = bitAni.bmHeight / 2;

		int xStart = curFrame * bx;
		int yStart = 0;

		TransparentBlt(hMemDC, ptAni.x, ptAni.y, bx, by, hMemDC2, xStart, yStart, bx, by, RGB(255, 0, 255));

		xStart = Run_Frame_Max * bx - xStart;
		yStart = by;
		TransparentBlt(hMemDC, ptAni.x, ptAni.y + 50, bx, by, hMemDC2, xStart, yStart, bx, by, RGB(255, 0, 255));

		SelectObject(hMemDC2, hOldBitmap);
		DeleteDC(hMemDC2);
	}

	// >> : Gdi+
	Gdi_Draw(hMemDC);
	// << :

	BitBlt(hdc, 0, 0, screenRect.right, screenRect.bottom, hMemDC, 0, 0, SRCCOPY);

	SelectObject(hMemDC, hOldBitmap);
	DeleteDC(hMemDC);
}

void DeleteBitmap()
{
	DeleteObject(hBackImage);
	DeleteObject(hSigongImage);
	DeleteObject(hAniImage);
}

void Gdi_Init()
{
	GdiplusStartupInput gpsi;
	GdiplusStartup(&g_GdiToken, &gpsi, NULL);
}

void Gdi_Draw(HDC hdc)
{
	Graphics graphics(hdc);
	// >> : txt
	SolidBrush brush(Color(255, 255, 0, 0));
	FontFamily fontFamily(L"Times New Roman");
	Font font(&fontFamily, 24, FontStyleRegular, UnitPixel);
	PointF pointF(10.0f, 20.0f);
	graphics.DrawString(L"Hello GDI+!", -1, &font, pointF, &brush);
	// << :

	Pen pen(Color(255, 0, 255, 255));
	graphics.DrawLine(&pen, 0, 0, 200, 200);

	// >> : image
	Image	img((WCHAR*)L"images/sigong.png");
	int w = img.GetWidth();
	int h = img.GetHeight();
	graphics.DrawImage(&img, 300, 100, w, h);
	// << :

	// >> : ani
	Image	img2((WCHAR*)L"images/zero_run.png");
	w = img2.GetWidth() / 16;
	h = img2.GetHeight() / 2;
	int xStart = curFrame * w;
	int ystart = 0;
	ImageAttributes imgAttr;
	imgAttr.SetColorKey(Color(245, 0, 245), Color(255, 10, 255));
	graphics.DrawImage(&img2, Rect(400, 100, w, h), xStart, ystart, w, h, UnitPixel, &imgAttr);
	// <<

	// >> : alpha rect..
	brush.SetColor(Color(128, 255, 0, 0));
	graphics.FillRectangle(&brush, 400, 100, w, h);
	// << 

	int xPos = 300;
	int yPos = 200;
	// >> : rotate image
	Image* pImg = nullptr;
	pImg = Image::FromFile((WCHAR*)L"images/sigong.png");
	if (pImg) // NULL 체크
	{
		w = pImg->GetWidth();
		h = pImg->GetHeight();

		Gdiplus::Matrix mat;
		static int rot = 0;

		mat.RotateAt((rot % 360), Gdiplus::PointF(xPos + (float)(w / 2), yPos + (float)(h / 2)));
		graphics.SetTransform(&mat);
		graphics.DrawImage(pImg, xPos, yPos, w, h);

		rot += 10;

		mat.Reset();
		graphics.SetTransform(&mat);
	}
	// << :

	if (pImg)
	{
		// >> : alpha image
		REAL transparency = 0.5f;
		ColorMatrix colorMatrix =
		{
			1.0f, 0.0f, 0.0f, 0.0f, 0.0f,
			0.0f, 1.0f, 0.0f, 0.0f, 0.0f,
			0.0f, 0.0f, 1.0f, 0.0f, 0.0f,
			0.0f, 0.0f, 0.0f, transparency, 0.0f,
			0.0f, 0.0f, 0.0f, 0.0f, 1.0f,
		};
		imgAttr.SetColorMatrix(&colorMatrix);
		xPos = 400;
		graphics.DrawImage(pImg, Rect(xPos, yPos, w, h),	// : dest coord
			0, 0, w, h,										// : source coord
			UnitPixel, &imgAttr);

		// gray
		ColorMatrix grayMatrix =
		{
			0.3f, 0.3f, 0.3f, 0.0f, 0.0f,
			0.6f, 0.6f, 0.6f, 0.0f, 0.0f,
			0.1f, 0.1f, 0.1f, 0.0f, 0.0f,
			0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
			0.0f, 0.0f, 0.0f, 0.0f, 1.0f,
		};
		imgAttr.SetColorMatrix(&grayMatrix);
		xPos = 500;
		graphics.DrawImage(pImg, Rect(xPos, yPos, w, h),	// : dest coord
			0, 0, w, h,										// : source coord
			UnitPixel, &imgAttr);

		// gray
		ColorMatrix grayMatrix2 =
		{
			0.3f, 0.3f, 0.3f, 0.0f, 0.0f,
			0.6f, 0.6f, 0.6f, 0.0f, 0.0f,
			0.1f, 0.1f, 0.1f, 0.0f, 0.0f,
			0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
			0.0f, 0.0f, 0.0f, 0.0f, 2.0f,
		};
		imgAttr.SetColorMatrix(&grayMatrix2);
		xPos = 600;
		graphics.DrawImage(pImg, Rect(xPos, yPos, w, h),	// : dest coord
			0, 0, w, h,										// : source coord
			UnitPixel, &imgAttr);

		
		xPos = 700;
		pImg->RotateFlip(RotateNoneFlipX);
		graphics.DrawImage(pImg, Rect(xPos, yPos, w, h), 0, 0, w, h, UnitPixel, &imgAttr);

		delete pImg;
	}
	// << :
}

void Gdi_End()
{
	GdiplusShutdown(g_GdiToken);
}

void UpdateFrame(HWND hWnd)
{
	if (++curFrame > Run_Frame_Max)
		curFrame = Run_Frame_Min;
}

VOID CALLBACK KeyStateProc(HWND hWnd, UINT uMsg, UINT idEvent, DWORD dwTime)
{
	if (GetKeyState('A' & 0x8000))
	{
		wsprintf(sKeyState, TEXT("%s"), _T("A-Key pressed"));
	}
	else if (GetKeyState('D' & 0x8000))
	{
		wsprintf(sKeyState, TEXT("%s"), _T("D-Key pressed"));
	}
	else
	{
		wsprintf(sKeyState, TEXT(" "));
	}
	InvalidateRgn(hWnd, NULL, FALSE);
}

VOID CALLBACK TimerProc(HWND hWnd, UINT uMsg, UINT idEvent, DWORD dwTime)
{
	/*SYSTEMTIME st;
	GetLocalTime(&st);
	wsprintf(sTime, _T("지금 시간은 %d:%d:%d 입니다", st.wHour, st.wMinute, st.wSecond));*/
	/*double bx = bitAni.bmWidth / 16;
	double by = bitAni.bmHeight / 2;
	RECT temp1{ 400, 600 - by, 400 + bx, 600 + by };
	RECT* temp = &temp1;*/
	UpdateFrame(hWnd);
	InvalidateRgn(hWnd, NULL, FALSE);
}

void Update()
{
	DWORD newTime = GetTickCount();
	static DWORD oldTime = newTime;
	if (newTime - oldTime < 100)
		return;
	oldTime = newTime;
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		ptAni.x += 10;
	}
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		ptAni.x -= 10;
	}
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		ptAni.y -= 10;
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		ptAni.y += 10;
	}
}

BOOL CALLBACK Dlg_Proc(HWND hDlg, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
	TCHAR word[128];
	UNREFERENCED_PARAMETER(lParam);
	switch (iMsg)
	{
	case WM_INITDIALOG:
	{
		HWND hBtn = GetDlgItem(hDlg, IDC_START);
		EnableWindow(hBtn, FALSE);
	}
	return TRUE;
	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
			//IDC_EDIT_SOURCE
			//IDC_EDIT_COPY
		case IDC_BUTTON_COPY:
		{
			TCHAR word[128];
			GetDlgItemText(hDlg, IDC_EDIT_SOURCE, word, 128);
			SetDlgItemText(hDlg, IDC_EDIT_COPY, word);
		}
		break;
		case IDC_BUTTON_CLEAR:
		{
			SetDlgItemText(hDlg, IDC_EDIT_SOURCE, _T(""));
			SetDlgItemText(hDlg, IDC_EDIT_COPY, _T(""));
		}
		break;
		case IDC_START:
		{
			HWND hBtn = GetDlgItem(hDlg, IDC_START);
			EnableWindow(hBtn, FALSE);

			hBtn = GetDlgItem(hDlg, IDC_PAUSE);
			EnableWindow(hBtn, TRUE);

			SetDlgItemText(hDlg, IDC_TEXT, _T("시작됐어요~~"));
		}
		break;
		case IDC_PAUSE:
		{
			HWND hBtn = GetDlgItem(hDlg, IDC_START);
			EnableWindow(hBtn, TRUE);

			hBtn = GetDlgItem(hDlg, IDC_PAUSE);
			EnableWindow(hBtn, FALSE);

			SetDlgItemText(hDlg, IDC_TEXT, _T("멈춤~~"));
		}
		break;
		case IDC_CLOSE:
		{
			HWND hBtn = GetDlgItem(hDlg, IDC_START);
			EnableWindow(hBtn, TRUE);

			hBtn = GetDlgItem(hDlg, IDC_PAUSE);
			EnableWindow(hBtn, FALSE);

			SetDlgItemText(hDlg, IDC_TEXT, _T("끝~~"));

			//EndDialog(hDlg, LOWORD(wParam));
			return TRUE;
		}
		break;
		case IDC_BUTTON_PRINT:
		{
			HDC hdc = GetDC(hDlg);

			TextOut(hdc, 10, 10, _T("Hello Button!!"), 14);
			SetDlgItemText(hDlg, IDC_TEXT, _T("Hello Button!!"));

			ReleaseDC(hDlg, hdc);
		}
		break;
		case IDOK:
		case IDCANCEL:
		{
			EndDialog(hDlg, LOWORD(wParam));
			return TRUE;
		}
		break;
		}
	}
	return FALSE;
}