#include <iostream>
#include "Member.h"

int Member::MemberNoCmp(const Member* x, const Member* y)
{
	return x->no > y->no ? 1 : (x->no < y->no ? -1 : 0);
}

int Member::MemberNameCmp(const Member* x, const Member* y)
{
	return strcmp(x->name, y->name);
}

void Member::PrintMember(const Member* x)
{
	std::cout << x->no << " " << x->name;
}

Member Member::ScanMember(const char* message, int sw)
{
	Member temp;
	std::cout << message << "하는 데이터를 입력하세요.\n";
	if (sw & MEMBER_NO)
	{
		std::cout << "번호 : ";
		std::cin >> temp.no;
	}
	if (sw & MEMBER_NAME)
	{
		std::cout << "이름 : ";
		std::cin >> temp.name;
	}
	return temp;
}