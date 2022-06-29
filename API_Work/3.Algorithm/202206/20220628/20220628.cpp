#include <iostream>
using namespace std;

int bf_match(const char Origin[], const char Keyword[]);
int KMP_match(const char Origin[], const char Keyword[]);

int main()
{
	char Origin[5000] = { 0 };
	char Keyword[5000] = { 0 };

	cin >> Origin >> Keyword;
	bf_match(Origin, Keyword);
	KMP_match(Origin, Keyword);
	
	return 0;
}

int bf_match(const char Origin[], const char Keyword[])
{
	int match_count = 0;
	int compare_count = 0;

	for (int i = 0; i < strlen(Origin) - strlen(Keyword) + 1; i++)
	{
		cout << i << " " << Origin << endl;
		for (int j = 0; j < strlen(Keyword); j++)
		{
			if (j != 0)
				cout << "  " << Origin << endl;
			if (Origin[i + j] != Keyword[j])
			{
				for (int k = 0; k < i + j; k++)
				{
					cout << " ";
				}
				cout << "  " << "|" << endl;
				for (int k = 0; k < i; k++)
				{
					cout << " ";
				}
				cout << "  " << Keyword;
				cout << "\n";
				compare_count++;
				break;
			}
			else
			{
				for (int k = 0; k < i + j; k++)
				{
					cout << " ";
				}
				cout << "  " << "+" << endl;
				for (int k = 0; k < i; k++)
				{
					cout << " ";
				}
				cout << "  " << Keyword;
				cout << "\n";
				match_count++;
				compare_count++;
				if (match_count == 3)
				{
					cout << "비교를 " << compare_count << "회 시도합니다.";
					return 1;
				}
			}
			cout << "\n";
		}
		cout << "\n";
		match_count = 0;
	}
}

int KMP_match(const char Origin[], const char Keyword[])
{
	char Table[256] = "ABABAABA";
	while (1)
	{
		if (Table[0] = Table[1])
		{

		}
	}
}