/*
Q1. ���� ��Ʈ�� �����϶�.
	p.204 Q2�� ���� �� ��ġ�� ��ȯ ���θ�
	+, - ��ȣ�� ǥ�� ���ش�.
*/

#include <iostream>

void swap(int* a, int *b);

void bubblesort(char arr[], int n);

int main()
{

}

void swap(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(char arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 2*n - 1; j > 0; n--)
		{
			if (arr[j] < arr[j - 2])
			{
				swap(arr + j, arr + (j - 2));
				arr[j - 1] = '+';
			}
		}
	}
}
