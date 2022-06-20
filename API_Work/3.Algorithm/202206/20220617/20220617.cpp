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

	cout << "단순 삽입 정렬 과정" << "\n";

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				swap(arr + j, arr + (j - 1));
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
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