/*		
		도수 정렬을 구현하라
		ex>
		0	1	2	3	4	5
	a	5	2	4	8	9	1

		누적 도수 분포표
		0	1	2	3	4	5	6	7	8	9
	f	0	1	2	2	3	4	4	4	5	6

		0	1	2	3	4	5
	b	1	2	4	5	8	9


*/

#include <iostream>

int main()
{
	using namespace std;
	int a[9] = { 0 };
	int maxval;
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
	}
	maxval = a[0];
	for (int i = 1; i < 9; i++)
	{
		if (maxval < a[i])
			maxval = a[i];
	}
	
	int* f = new int[maxval+1] {0};

	for (int i = 0; i < 9; i++)
	{
		f[a[i]]++;
	}
	
	for (int i = 1; i <= maxval; i++)
	{
		f[i] += f[i - 1];
	}

	int b[9] = { 0 };

	for (int i = 8; i >= 0; i--)
	{
		b[--f[a[i]]] = a[i];
	}

	for (int i = 0; i < 9; i++)
	{
		a[i] = b[i];
	}

	for (int i = 0; i < 9; i++)
	{
		cout << a[i];
	}
	cout << "\n";

	delete[] f;

	return 0;
}