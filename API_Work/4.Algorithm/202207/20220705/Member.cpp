#include <iostream>
#include <string.h>
#include "Member.h"

// ȸ�� ��ȣ �� �Լ�
int Member::MemberNoCmp(const Member* x, const Member* y)
{
	return x->no < y->no ? -1 : (x->no > y->no ? 1 : 0);
}

// ȸ�� �̸� �� �Լ�
int Member::MemberNameCmp(const Member* x, const Member* y)
{
	return strcmp(x->name, y->name);
}

// ȸ�� ������(��ȣ�� �̸�)�� ���(�� �ٲ� ����)
void Member::PrintMember(const Member* x)
{
	std::cout << x->no << x->name;
}

// ȸ�� ������(��ȣ�� �̸�)�� ���(�� �ٲ� ����)
void Member::PrintLnMember(const Member* x)
{
	std::cout << x->no << x->name << "\n";
}

// ȸ�� ������(��ȣ�� �̸�)�� �о� ����
Member Member::ScanMember(const char* message, int sw)
{
	Member temp;
	std::cout << message << "�ϴ� �����͸� �Է��ϼ���.\n";
	if (sw & MEMBER_NO)
	{
		std::cout << "��ȣ : ";
		std::cin >> temp.no;
	}
	if (sw & MEMBER_NAME)
	{
		std::cout << "�̸� : ";
		std::cin >> temp.name;
	}
	return temp;	
}