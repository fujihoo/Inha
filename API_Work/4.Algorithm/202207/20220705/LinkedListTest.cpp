// Program using LinkedList

#include <iostream>
#include "Member.h"
#include "LinkedList.h"

using namespace std;

typedef enum
{
	TERMINATE, ADD, DELETE, PRINT_ALL, SEARCH
}Menu;

Menu SelectMenu(void)
{
	int i, ch;
	const char* mstring[] =
	{
		"학생 추가", "학생 삭제", "출력", "검색",
	};

	do
	{
		for (i = TERMINATE; i < SEARCH; i++)
		{
			cout << i << ". " << mstring[i];
			putchar('\n');
		}
		cin >> ch;
	} while (ch < TERMINATE || ch > SEARCH);

	return(Menu)ch;
}

int main(void)
{
	Menu menu;
	List list;
	Initialize(&list);
}