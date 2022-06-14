// strngbad.cpp -- StringBad Ŭ������ �޼���
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "strngbad.h"
using std::cout;

// static Ŭ���� ����� �ʱ�ȭ�Ѵ�
int StringBad::num_strings = 0;

// Ŭ���� �޼���

// C ��Ÿ���� ���ڿ��� ���� StringBad�� �����Ѵ�
StringBad::StringBad(const char* s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
	cout << num_strings << ": \"" << str << "\" ��ü����\n";
}

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++");
	num_strings++;
	cout << num_strings << ": \"" << str << "\" ����Ʈ ��ü ����\n";
}

StringBad::~StringBad()
{
	cout << "\"" << str << "\" ��ü �ı�, ";
	--num_strings;
	cout << "���� ��ü ��:  " << num_strings << "\n";
	delete[] str;
}

std::ostream& operator << (std::ostream& os, const StringBad& st)
{
	os << st.str;
	return os;
}