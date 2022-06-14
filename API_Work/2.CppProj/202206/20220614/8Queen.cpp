//#include <iostream>
//using namespace std;
//
//int n = 0, cnt = 0;
//int board[15] = { 0 };
//
//int Promising(int column);
//void NQueen(int column);
//
//int main()
//{
//	cin >> n;
//	NQueen(0);
//	cout << cnt << "\n";
//}
//
//int Promising(int column)
//{
//	for (int i = 0; i < column; i++)
//	{
//		if (board[column] == board[i] || column - i == abs(board[column] - board[i]))
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//void NQueen(int column)
//{
//	if (column == n)
//	{
//		cnt++;
//		return;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		board[column] = i;
//		if (Promising(column))
//		{
//			NQueen(column + 1);
//		}
//	}
//}

#include <iostream>
using namespace std;

int num = 0, cnt = 0;
int column;
int board[15];

int Promising(int column);
void NQueen(int column);

int main()
{
	cin >> num;
	NQueen(0);
	
	cout << cnt << "\n";

	return 0;
}

int Promising(int column)
{
	for (int i = 0; i < column; i++)
	{
		if (board[i] == board[column] || column - i == abs(board[column] - board[i]))
		{
			return 0;
		}
	}
	return 1;
}

void NQueen(int column)
{
	if (num == column)
	{
		cnt++;
		return;
	}
	for (int i = 0; i < num; i++)
	{
		board[column] = i;
		if (Promising(column))
		{
			NQueen(column + 1);
		}
	}
}