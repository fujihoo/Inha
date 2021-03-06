// int형 스택 IntStack의 사용
#include <iostream>
#include "InStack.h"

int main()
{
	using namespace std;
	IntStack s;
	if (Initialize(&s, 64) == -1)
	{
		puts("스택 생성에 실패하였습니다.");
		return 1;
	}

	while (1)
	{
		int menu, x;
		cout << "현재 데이터 수 : " << Size(&s) << "\/" << Capacity(&s) << '\n';
		cout << "(1)푸시 (2)팝 (3)피크 (4)출력 (0)종료 : ";
		cin >> menu;

		if (menu == 0)
		{
			break;
		}
		switch (menu) {
		case 1:	// 푸시
			cout << "데이터 : ";
			cin >> x;
			if (Push(&s, x) == -1)
			{
				puts("\a 오류 : 푸시에 실패하였습니다.");
			}
			break;

		case 2: // 팝
			if (Pop(&s, &x) == -1)
			{
				puts("\a오류 : 팝에 실패하였습니다. ");
			}
			else
			{
				cout << "팝 데이터는 " << x << "입니다. \n";
			}
			break;

		case 3: // 피크
			if (Peek(&s, &x) == -1)
			{
				puts("\a 오류 : 피크에 실패하였습니다.");
			}
			else
			{
				cout << "피크 데이터는 " << x << "입니다.\n";
			}
			break;

		case 4:	// 출력
			Print(&s);
			break;
		}
	}
	Terminate(&s);
	return 0;
}