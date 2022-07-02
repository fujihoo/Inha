#include <iostream>

void swap(int* a, int* b);

int main()
{
	using namespace std;
	int n = 0;
	int arr[100] = { NULL };

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < (n + 1) / (i + 1); j++)
		{
			if (arr[j] > arr[j + (n + 1) / (i + 1)])
			{
				swap(arr + j, arr + j + (n + 1) / (i + 1));
			}
		}
	}
	cout << "결과" << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";

	return 0;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}