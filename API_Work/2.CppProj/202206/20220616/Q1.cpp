/*
Q1. 홀수의 양의 정수 k가 주어졌을 때, 가로 세로의
	크기가 k인 공간에 오른쪽으로 정렬된 삼각형을
	출력하는 프로그램을 작성하시오.
	이 때 삼각형의 모서리는 '*'로 출력하고, 삼각형
	내부의 문자는 '+'로 채워야한다.
	조건> 삼각형 크기는  ( 3 <= 크기 <= 99 ) 사이의
	정수 중에 홀수가 입력되고 잘못된 데이터가
	입력되는 경우는 없다.


	ex > 3					5
		 *					    *
		 * *			      * *
		 *					* + *
							  * *
								*
*/
#include <iostream>

int main()
{
	using namespace std;
	int iN = 0;

	while (iN % 2 == 0)
	{
		cout << "자연수 중 홀수를 입력해주세요: ";
		cin >> iN;
		if (iN % 2 == 0)
		{
			cout << "짝수를 입력하셨습니다. 홀수를 입력해주세요: ";
		}
		if (iN < 1)
		{
			cout << "0이하의 수를 입력하셨습니다. 자연수 중 홀수를 입력하세요: ";
			continue;
		}
	}

	for (int i = 0; i < (iN / 2 + 1); i++)
	{
		for (int j = 0; j < (iN / 2 - i + 1); j++)
		{
			cout << " ";
		}
		for (int j = (iN / 2 - i + 1); j < iN; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = (iN / 2 + 1); i < iN; i++)
	{
		for (int j = 0; j < (iN / 2 + i - 1); j++)
		{
			cout << " ";
		}
		for (int j = (iN / 2 + i - 1); j < iN; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}