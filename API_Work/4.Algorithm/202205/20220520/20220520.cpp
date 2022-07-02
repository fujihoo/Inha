//Q. 10진수를 입력받아 다른 진수로 변환하는 프로그램을 작성하라.
//   (2~36진수)

#define	_CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int Antilogalithm_Change(int iDecimal, int iAntilogalithm);

int main()
{

	int iDecimal = 0;
	int iAntilogalithm = 0;
	char iUp10;

	cout << "다른 진수로 변환할 10진수를 입력하시오: ";
	cin >> iDecimal;
	cout << "몇 진수로 변환 하시겠습니까?: ";
	cin >> iAntilogalithm;

	if (iDecimal >= 0 && iAntilogalithm >= 2 && iAntilogalithm <= 36)
	{
		Antilogalithm_Change(iDecimal, iAntilogalithm);
	}

	return 0;
}

int Antilogalithm_Change(int iDecimal, int iAntilogalithm)
{
	if (iAntilogalithm > 9)
	{
		if (iDecimal != 0 && iDecimal != 1)
		{
			Antilogalithm_Change(iDecimal / iAntilogalithm, iAntilogalithm);
			if (iDecimal % iAntilogalithm >= 10)
			{
				cout << (char)((iDecimal % iAntilogalithm) - 10 + 'A');
			}
			else
			{
				cout << iDecimal % iAntilogalithm;
			}
		}
	}
	else
	{
		if (iDecimal == 0 || iDecimal == 1)
		{
			cout << iDecimal;
		}
		else
		{
			Antilogalithm_Change(iDecimal / iAntilogalithm, iAntilogalithm);
			if (iDecimal % iAntilogalithm >= 10)
			{
				cout << (char)((iDecimal % iAntilogalithm) - 10 + 'A');
			}
			else
			{
				cout << iDecimal % iAntilogalithm;
			}
		}
	}

	return 1;
}

//Q. 각 진수끼리 변환하는 프로그램을 작성하라.
//   (2~36진수 사이로)
//   ex) 변환할 데이터의 진수는 : 2
//       데이터를 입력하시오 : 101
//       출력할 데이터의 진수는 : 10
//       변환된 데이터는 : 5