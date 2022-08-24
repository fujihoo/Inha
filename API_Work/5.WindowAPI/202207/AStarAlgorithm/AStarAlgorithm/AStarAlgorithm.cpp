﻿// AStarAlgorithm.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//
#include <string>
#include <vector>
#include <algorithm>
#include "framework.h"
#include "AStarAlgorithm.h"
#include "WindowDraw.h"
#include "Node.h"

#define MAX_LOADSTRING 100

// 전역 변수 및 함수 선언:
HINSTANCE hInst;                                // 현재 인스턴스입니다.
WCHAR szTitle[MAX_LOADSTRING];                  // 제목 표시줄 텍스트입니다.
WCHAR szWindowClass[MAX_LOADSTRING];            // 기본 창 클래스 이름입니다.
POINT ptCursor;
POINT ptCursor2;
Node** MAP;
Node** CreateArray(int width, int height, int length);
void DeleteArray(Node** Map, int width, int length);
void PrintValue(HDC hdc, Node** Map, int col, int row, int length);
void CALLBACK TimerProc1(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
void FindSmallNode(HDC hdc, Node StartNode, Node EndNode, Node parentnode);


// 이 코드 모듈에 포함된 함수의 선언을 전달합니다:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

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
	LoadStringW(hInstance, IDC_ASTARALGORITHM, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);

	// 애플리케이션 초기화를 수행합니다:
	if (!InitInstance(hInstance, nCmdShow))
	{
		return FALSE;
	}

	HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_ASTARALGORITHM));

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
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ASTARALGORITHM));
	wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wcex.lpszMenuName = MAKEINTRESOURCEW(IDC_ASTARALGORITHM);
	wcex.lpszClassName = szWindowClass;
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

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
	RECT rc = RECT({ 0,0,800,800 });
	AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW, TRUE);
	HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
		0, 0, rc.right - rc.left, rc.bottom - rc.top, nullptr, nullptr, hInstance, nullptr);
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
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	static bool isStart = false;
	static bool isEnd = false;
	static bool isWall = false;

	POINT LefTop, RightBottom;
	LefTop.x = 0;
	LefTop.y = 0;
	RightBottom.x = 800;
	RightBottom.y = 800;
	int length = 40;
	switch (message)
	{
		// WM_TIMER  사용하기

	case WM_CREATE:
		{
			MAP = CreateArray(RightBottom.x, RightBottom.y, length);
			//SetTimer(hWnd, 1, 10, (TIMERPROC)TimerProc1);
		}
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
			// 만약 시작노드와 끝 노드가 지정이 되있을 경우에만 빨강 파랑을 그려줘라.

			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);

			if (MAP != nullptr)
			{
				for (int i = 0; i < 20; i++)
				{
					for (int j = 0; j < 20; j++)
					{
						HBRUSH old;
						switch (MAP[i][j].type)
						{
						case START:
							old = (HBRUSH)SelectObject(hdc, CreateSolidBrush(RGB(255, 0, 0)));
							break;
						case END:
							old = (HBRUSH)SelectObject(hdc, CreateSolidBrush(RGB(0, 0, 255)));
							break;
						case WALL:
							old = (HBRUSH)SelectObject(hdc, CreateSolidBrush(RGB(0,0,0)));
							break;
						default:
							continue;
						}
						Rectangle(hdc, (MAP[i][j].ptPosition.x),
							(MAP[i][j].ptPosition.y),
							(MAP[i][j].ptPosition.x) + 40,
							(MAP[i][j].ptPosition.y) + 40);
						DeleteObject(SelectObject(hdc, old));
					}
				}
			}
			if (isStart && isEnd)
			{
				Node temp;
				temp.ptPosition = { -1, -1 };
				FindSmallNode(hdc, MAP[ptCursor.x][ptCursor.y], MAP[ptCursor2.x][ptCursor2.y], temp);
			}
			DrawGrid(hdc, LefTop, RightBottom, 40, 40);
			PrintValue(hdc, MAP, RightBottom.x / length, RightBottom.y / length, length);

			// TODO: 여기에 hdc를 사용하는 그리기 코드를 추가합니다...
			EndPaint(hWnd, &ps);
		}
		break;
	case WM_LBUTTONDOWN:
		{
			MAP[ptCursor.x][ptCursor.y].type = NONE;
			GetCursorPos(&ptCursor);
			ScreenToClient(hWnd, &ptCursor);
			ptCursor.x /= 40;
			ptCursor.y /= 40;
			// 시작노드 지정
			MAP[ptCursor.x][ptCursor.y].ptPosition = {ptCursor.x * 40 , ptCursor.y * 40};
			MAP[ptCursor.x][ptCursor.y].type = START;
			isStart = TRUE;
			InvalidateRect(hWnd, nullptr, true);
		}
		break;
	case WM_RBUTTONDOWN:
		{
			MAP[ptCursor2.x][ptCursor2.y].type = NONE;
			GetCursorPos(&ptCursor2);
			ScreenToClient(hWnd, &ptCursor2);
			ptCursor2.x /= 40;
			ptCursor2.y /= 40;
			// 끝노드 지정
			MAP[ptCursor2.x][ptCursor2.y].ptPosition = { ptCursor2.x * 40 , ptCursor2.y * 40 };
			MAP[ptCursor2.x][ptCursor2.y].type = END;
			isEnd = TRUE;
			InvalidateRect(hWnd, nullptr, true);
		}
		break;
	case WM_KEYDOWN:
		{
			switch (wParam)
			{
			case VK_SPACE:
				{
					POINT pt;
					
					GetCursorPos(&pt);
					ScreenToClient(hWnd, &pt);
					pt.x /= 40;
					pt.y /= 40;
					MAP[pt.x][pt.y].ptPosition = { pt.x * 40, pt.y * 40 };
					
					if(!(MAP[pt.x][pt.y].type == END || MAP[pt.x][pt.y].type == START))
						MAP[pt.x][pt.y].type = WALL;
					
					InvalidateRect(hWnd, nullptr, true);
				}
			}
		}
		break;
	case WM_DESTROY:
		DeleteArray(MAP, RightBottom.x, length);
		PostQuitMessage(0);
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

Node** CreateArray(int width, int height, int length)
{
	int col = width / length;
	int row = height / length;

	Node** Map = new Node * [row];

	for (int i = 0; i < row; i++)
	{
		Map[i] = new Node[col];
	}
	return Map;
}

void DeleteArray(Node** Map, int width, int length)
{
	for (int i = 0; i < width / length; i++)
	{
		delete[] * (Map + i);
	}
	delete[] Map;
}

void PrintValue(HDC hdc, Node** Map, int col, int row, int length)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::wstring G = std::to_wstring(Map[i][j].g);
			TextOut(hdc, length * i + 5, length * j, G.c_str(), G.size());
			std::wstring H = std::to_wstring(Map[i][j].h);
			TextOut(hdc, length * i + (length * 3) / 4 - 5, length * j, H.c_str(), H.size());
			std::wstring F = std::to_wstring(Map[i][j].f);
			TextOut(hdc, length * i + length / 2, length * j + length / 2, F.c_str(), F.size());
		}
	}
}

void CALLBACK TimerProc1(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{

	InvalidateRect(hWnd, NULL, false);
}

enum DIRECTION {LEFT, RIGHT, TOP, BOTTOM, LEFTTOP, RIGHTTOP, LEFTBOTTOM, RIGHTBOTTOM, DIRECTION_END};
POINT ptDirection[DIRECTION_END] =
{ {-1,0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {1, -1}, {-1, 1}, {1, 1} };

POINT operator + (POINT A, POINT B)
{
	return { A.x + B.x, A.y + B.y };
}

void FindSmallNode(HDC hdc, Node StartNode, Node EndNode, Node parentnode)
{
	static std::vector<Node> vecClose;

	if (IsSame(StartNode, EndNode))
		return;

	vecClose.push_back(StartNode);

	Node PheripheralNode[DIRECTION_END];
	int index = 0;
	std::vector<int> vecFValue;

	for (int i = 0; i < DIRECTION_END; i++)
	{
		PheripheralNode[i].ptPosition = { StartNode.ptPosition.x + 40 * ptDirection[i].x, StartNode.ptPosition.y + 40 * ptDirection[i].y };
		
		if (MAP[PheripheralNode[i].ptPosition.x / 40][PheripheralNode[i].ptPosition.y / 40].type == WALL)
			continue;

		if (IsSame(PheripheralNode[i], EndNode))
			return;

		bool IsInClose = false;
		for (size_t j = 0; j < vecClose.size(); ++j)
		{
			if (IsSame(vecClose[j], PheripheralNode[i]))
			{
				IsInClose = true;
				break;
			}
		}

		if (IsInClose)
			continue;
		
		HBRUSH old = (HBRUSH)SelectObject(hdc, CreateSolidBrush(RGB(255, 255, 0)));
		Rectangle(hdc,
			(PheripheralNode[i].ptPosition.x),
			(PheripheralNode[i].ptPosition.y),
			(PheripheralNode[i].ptPosition.x) + 40,
			(PheripheralNode[i].ptPosition.y) + 40);
		DeleteObject(SelectObject(hdc, old));

		if (i == LEFT || i == RIGHT || i == TOP || i == BOTTOM)
			PheripheralNode[i].g += 10;
		else
			PheripheralNode[i].g += 14;
		
		PheripheralNode[i].h = 
			(int)(sqrt(
				pow((double)(EndNode.ptPosition.x - PheripheralNode[i].ptPosition.x), 2)
				+ pow((double)(EndNode.ptPosition.y - PheripheralNode[i].ptPosition.y), 2)));
		vecFValue.push_back(PheripheralNode[i].f = PheripheralNode[i].g + PheripheralNode[i].h);
	}
	
	sort(vecFValue.begin(), vecFValue.end());
	
	for (int i = 0; i < DIRECTION_END; i++)
	{
		if (PheripheralNode[i].f == vecFValue[0])
		{
			index = i;
			break;
		}
	}

	HBRUSH old = (HBRUSH)SelectObject(hdc, CreateSolidBrush(RGB(255, 0, 255)));
	Rectangle(hdc,
		(PheripheralNode[index].ptPosition.x),
		(PheripheralNode[index].ptPosition.y),
		(PheripheralNode[index].ptPosition.x) + 40,
		(PheripheralNode[index].ptPosition.y) + 40);
	DeleteObject(SelectObject(hdc, old));

	FindSmallNode(hdc, PheripheralNode[index], EndNode, StartNode);
}