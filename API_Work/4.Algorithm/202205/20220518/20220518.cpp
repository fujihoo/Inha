//#include <iostream>
//
//int max(int a, int b, int c, int d);
//
//int main()
//{
//	using namespace std;
//	int a, b, c, d = 0;
//
//	cout << "최대 값을 구할 a, b, c, d를 차례대로 입력하시오\n";
//	cin >> a >> b >> c >> d;
//	cout << max(a, b, c, d);
//
//	return 0;
//}
//
//int max(int a, int b, int c, int d)
//{
//	int maximum = a;
//	if (b > maximum)
//	{
//		maximum = b;
//	}
//	if (c > maximum)
//	{
//		maximum = c;
//	}
//	if (d > maximum)
//	{
//		maximum = d;
//	}
//
//	return maximum;
//}

#include <iostream>

int max(int a, int b, int c);
int min(int a, int b, int c);
int center(int a, int b, int c);

int main()
{
	using namespace std;
	int a, b, c = 0;

	cout << "중앙값을 구할 세 수를 입력하시오";
	cin >> a >> b >> c;
	cout << center(a, b, c);

	return 0;
}

int max(int a, int b, int c)
{
	int maximum = a;
	if (b > maximum)
	{
		maximum = b;
	}
	if (c > maximum)
	{
		maximum = c;
	}

	return maximum;
}

int min(int a, int b, int c)
{
	int minimum = a;
	if (b < minimum)
	{
		minimum = b;
	}
	if (c < minimum)
	{
		minimum = c;
	}

	return minimum;
}

int center(int a, int b, int c)
{
	if ((b == max(a, b, c) && c == min(a, b, c)) || (c == max(a, b, c) && b == min(a, b, c)))
	{
		return a;
	}
	if ((c == max(a, b, c) && a == min(a, b, c)) || (a == max(a, b, c) && c == min(a, b, c)))
	{
		return b;
	}
	if ((a == max(a, b, c) && b == min(a, b, c)) || (b == max(a, b, c) && a == min(a, b, c)))
	{
		return c;
	}
	else
	{
		return 0;
	}
}
