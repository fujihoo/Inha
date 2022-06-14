// strngbad.cpp -- StringBad 클래스의 메서드
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "strngbad.h"
using std::cout;

// static 클래스 멤버를 초기화한다
int StringBad::num_strings = 0;

// 클래스 메서드

// C 스타일의 문자열로 부터 StringBad를 생성한다
StringBad::StringBad(const char* s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
	cout << num_strings << ": \"" << str << "\" 객체생성\n";
}

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++");
	num_strings++;
	cout << num_strings << ": \"" << str << "\" 디폴트 객체 생성\n";
}

StringBad::~StringBad()
{
	cout << "\"" << str << "\" 객체 파괴, ";
	--num_strings;
	cout << "남은 객체 수:  " << num_strings << "\n";
	delete[] str;
}

std::ostream& operator << (std::ostream& os, const StringBad& st)
{
	os << st.str;
	return os;
}