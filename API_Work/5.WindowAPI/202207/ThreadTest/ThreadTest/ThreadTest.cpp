// ThreadTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <Windows.h>
#include <iostream>
#include <process.h>

int Value = 0;
int ValuePlusOne = 0;
int Cnt = 0;
bool isChecked = false;
CRITICAL_SECTION cs;

DWORD WINAPI ThFunc1(LPVOID lpParam);
DWORD WINAPI ThFunc2(LPVOID lpParam);

unsigned WINAPI ThFunc3(LPVOID lpParam);
unsigned WINAPI ThFunc4(LPVOID lpParam);

DWORD dwThID[2];
HANDLE hThreads[2];
int main()
{
	unsigned long ulStackSize = 0;

	dwThID[0] = 0;
	dwThID[1] = 0;
	hThreads[0] = NULL;
	hThreads[1] = NULL;
	InitializeCriticalSection(&cs);

	hThreads[0] = (HANDLE)_beginthreadex(NULL, 0,
		(unsigned(__stdcall*)(void*)) ThFunc3,
		NULL, 0, (unsigned int*)&dwThID[0]);
	hThreads[1] = (HANDLE)_beginthreadex(NULL, 0,
		(unsigned(__stdcall*)(void*)) ThFunc4,
		NULL, 0, (unsigned int*)&dwThID[1]);

	if (hThreads[0] == 0 | hThreads[1] == 0)
		exit(1);
	//{
	//	hThreads[0] = CreateThread(NULL, ulStackSize, ThFunc1, NULL, CREATE_SUSPENDED, &dwThId[0]);
	//	hThreads[1] = CreateThread(NULL, ulStackSize, ThFunc1, NULL, CREATE_SUSPENDED, &dwThId[1]);
	//}

	ResumeThread(hThreads[0]);
	ResumeThread(hThreads[1]);

	WaitForMultipleObjects(2, hThreads, TRUE, INFINITE); // 일단은 기다려볼게

	//WaitForMultipleObjects(2, hThreads, TRUE, INFINITE);

	DWORD dwExitCode = 0;
	/*GetExitCodeThread(hThreads[0], &dwExitCode);
	while (dwExitCode == STILL_ACTIVE)
	{
		TerminateThread(hThreads[0], dwExitCode);
	}

	GetExitCodeThread(hThreads[1], &dwExitCode);
	while (dwExitCode == STILL_ACTIVE)
	{
		TerminateThread(hThreads[1], dwExitCode);
	}*/
	CloseHandle(hThreads[0]);
	CloseHandle(hThreads[1]);
	DeleteCriticalSection(&cs);

}

DWORD __stdcall ThFunc1(LPVOID lpParam)
{
	while (1)
	{
		EnterCriticalSection(&cs);	// isChecked = false;
		Value = rand() % 1000;
		ValuePlusOne = Value + 1;
		LeaveCriticalSection(&cs);	// isChecked = true;
	}
	return 0;
}

DWORD __stdcall ThFunc2(LPVOID lpParam)
{
	while (1)
	{
		EnterCriticalSection(&cs);	// if (isChecked)
		if (isChecked)
		{
			printf("%d	%d : %d\n", ++Cnt, Value, ValuePlusOne);
		}
		LeaveCriticalSection(&cs);
	}
	return 0;
}

unsigned __stdcall ThFunc3(LPVOID lpParam)
{
	while (1)
	{
		EnterCriticalSection(&cs);
		Value = rand() % 10000;
		ValuePlusOne = Value + 1;
		printf("ThFunc3 : %d %d\n", Value, ValuePlusOne);
		LeaveCriticalSection(&cs);
		if (Value = 9999)
			return 0;	//_endthreadex()
	}
	return 0;
}

unsigned __stdcall ThFunc4(LPVOID lpParam)
{
	while (1)
	{
		EnterCriticalSection(&cs);
		{
			if (isChecked)
			{
				printf("%d	%d : %d\n=======================================\n",
					++Cnt, Value, ValuePlusOne);
			}
			printf("ThFunc4 : %d %d\n", Value, ValuePlusOne);
		}
		LeaveCriticalSection(&cs);
	}
	return 0;
}
