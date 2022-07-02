#include <iostream>
using namespace std;

int bf_match(const char Origin[], const char Keyword[]);
int KMP_match(const char Origin[], const char Keyword[]);
int bm_match(const char Origin[], const char Keyword[]);

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
					cout << "�񱳸� " << compare_count << "ȸ �õ��մϴ�.";
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
	char Table[5000] = "ABABAABA";
	while (1)
	{
		if (Table[0] = Table[1])
		{

		}
	}
}

int bm_match(const char Origin[], const char Keyword[])
{
	char Table[128];


	for (int i = 0; i < strlen(Keyword); i++)
	{
		for (int j = 0; j < 128; j++)
		{
			if (Keyword[i] == j)
			{
				Table[j] = strlen(Keyword) - i - 1;
			}
		}
	}

}