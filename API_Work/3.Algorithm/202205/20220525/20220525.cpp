#define _CRT_SECURE_NO_WARNINGS

/*
 Q4. 선형 검색을 하기 위한 기본 순서도와 이를 바탕으로
	 선형 검색 프로그램을 작성하라.
	 ex > 데이터 입력 : 6 5 2 1 8 9 7 4
		  검색 데이터 : 9
			 자료중 9가 있습니다.
		  검색 데어터 : 3
			 자료중 3은 없습니다.

	 1. 선형 검색
	 2. 보초법 적용
	 3. p.113 Q2. 와 같은 형태로 출력
 */

#include <iostream>
int searchfunc(int* isearchdata);
int sequentialsearch(int* key);

using namespace std;

int main()
{
	int isearchdata = 0;
	searchfunc(&isearchdata);

	return 0;
}

int searchfunc(int* isearchdata)
{
	int n;
	cin >> n;
	int arr[n] = { 0 };
	cout << n <<"개의 숫자 데이터 입력: ";
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}
	cout << "검색 데이터: ";
	cin >> *isearchdata;
	for (int i = 0; i < 8; i++)
	{
		if (*isearchdata == arr[i])
		{
			printf("자료중 %d가 있습니다.", *isearchdata);
			return 1;
		}
	}
	printf("자료중 %d가 없습니다.", *isearchdata);
	return 0;
}
