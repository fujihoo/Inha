#pragma once
//string2.h -- 확대 개선된 String 클래스 정의
#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String(const char* s);
	String();
	String(const String& st);
	~String();
	int length() const { return len; }
	void stringlow();
	void stringup();
	void setlen(int length);
	void setstr(const char* c);
	const char* getstr();
	int has(char c);
	String& operator = (const String& st);
	String& operator = (const char* s);
	String operator+(const String& st);
	String operator+(const char* s);
	char& operator[](int i);
	const char& operator[](int i) const;
	friend bool operator<(const String& st1, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st1, const String& st2);
	friend const char* operator+(const char* st1, String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);
	static int HowMany();
};
#endif // !STRING1_H_
