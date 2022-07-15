#include <iostream>
#include <string.h>
#include "Member.h"

// 회원 번호 비교 함수
int Member::MemberNoCmp(const Member* x, const Member* y)
{
	return x->no < y->no ? -1 : (x->no > y->no ? 1 : 0);
}

// 회원 이름 비교 함수
int Member::MemberNameCmp(const Member* x, const Member* y)
{
	return strcmp(x->name, y->name);
}

// 회원 데이터(번호와 이름)를 출력(줄 바꿈 없음)
void Member::PrintMember(const Member* x)
{
	std::cout << x->no << x->name;
}

// 회원 데이터(번호와 이름)를 출력(줄 바꿈 있음)
void Member::PrintLnMember(const Member* x)
{
	std::cout << x->no << x->name << "\n";
}

// 회원 데이터(번호와 이름)를 읽어 들임
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