// string1.cpp -- String 클래스 매서드
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "String2.h"
using std::cin;
using std::cout;

// static 클래스 멤버를 초기화한다.

int String::num_strings = 0;

// static 메서드
int String::HowMany()
{
	return num_strings;
}

// 클래스 메서드

String::String(const char* s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String& st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete[] str;
}

void String::stringlow()
{
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
}

void String::stringup()
{
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
}

void String::setlen(int length)
{
	len = length;
}

void String::setstr(const char* c)
{
	delete[] str;
	str = new char[len + 1];
	std::strcpy(str, c);
}

const char* String::getstr()
{
	return str;
}

int String::has(char c)
{
	int cnt = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == c)
		{
			cnt++;
		}
	}
	return cnt;
}

String& String::operator=(const String& st)
{
	if (this == &st)
	{
		return *this;
	}
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
	// TODO: 여기에 return 문을 삽입합니다.
}

String& String::operator=(const char* s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
	// TODO: 여기에 return 문을 삽입합니다.
}

String String::operator+(const String& st)
{
	String tmp;
	tmp.len = (len + st.len);
	tmp.str = new char[tmp.len + 1];
	std::strcpy(tmp.str, str);
	std::strcat(tmp.str, st.str);
	return tmp;
}

String String::operator+(const char* s)
{
	String tmp;
	tmp.len = (len + std::strlen(s));
	tmp.str = new char[tmp.len + 1];
	std::strcpy(tmp.str, str);
	std::strcat(tmp.str, s);
	return tmp;
}

char& String::operator[](int i)
{
	return str[i];
	// TODO: 여기에 return 문을 삽입합니다.
}

const char& String::operator[](int i) const
{
	return str[i];
	// TODO: 여기에 return 문을 삽입합니다.
}

// 오버로드 연산자 프렌드

bool operator<(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
	return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

const char* operator+(const char* st1, String& st2)
{
	st2.setlen(st2.length() + std::strlen(st1));
	char* temp = new char[st2.length()];
	std::strcpy(temp, st1);
	std::strcat(temp, st2.getstr());
	return temp;
}

ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;;
	return os;
	// TODO: 여기에 return 문을 삽입합니다.
}

istream& operator>>(istream& is, String& st)
{
	char temp [String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}