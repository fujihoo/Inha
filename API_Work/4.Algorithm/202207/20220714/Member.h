#pragma once

class Member
{
private:
	int no;
	char name[20];

public:
	int MemberNoCmp(const Member* x, const Member* y);
	int MemberNameCmp(const Member* x, const Member* y);
	void PrintMember(const Member* x);
	Member ScanMember(const char* message, int sw);
};

#define MEMBER_NO	1
#define MEMBER_NAME	2