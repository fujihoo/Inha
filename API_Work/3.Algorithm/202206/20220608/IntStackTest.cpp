// int�� ���� IntStack�� ���
#include <iostream>
#include "InStack.h"

int main()
{
	using namespace std;
	IntStack s;
	if (Initialize(&s, 64) == -1)
	{
		puts("���� ������ �����Ͽ����ϴ�.");
		return 1;
	}

	while (1)
	{
		int menu, x;
		cout << "���� ������ �� : " << Size(&s) << "\/" << Capacity(&s) << '\n';
		cout << "(1)Ǫ�� (2)�� (3)��ũ (4)��� (0)���� : ";
		cin >> menu;

		if (menu == 0)
		{
			break;
		}
		switch (menu) {
		case 1:	// Ǫ��
			cout << "������ : ";
			cin >> x;
			if (Push(&s, x) == -1)
			{
				puts("\a ���� : Ǫ�ÿ� �����Ͽ����ϴ�.");
			}
			break;

		case 2: // ��
			if (Pop(&s, &x) == -1)
			{
				puts("\a���� : �˿� �����Ͽ����ϴ�. ");
			}
			else
			{
				cout << "�� �����ʹ� " << x << "�Դϴ�. \n";
			}
			break;

		case 3: // ��ũ
			if (Peek(&s, &x) == -1)
			{
				puts("\a ���� : ��ũ�� �����Ͽ����ϴ�.");
			}
			else
			{
				cout << "��ũ �����ʹ� " << x << "�Դϴ�.\n";
			}
			break;

		case 4:	// ���
			Print(&s);
			break;
		}
	}
	Terminate(&s);
	return 0;
}