#pragma once
// strngbad.h -- 결함이 있는 string 클래스 정의
#include <iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_
class StringBad
{
private:
	char* str;
	int len;
	static int num_strings;
public:
	StringBad(const char* s);
	StringBad();
	~StringBad();
// 프렌드 함수
	friend std::ostream& operator << (std::ostream& os, const StringBad& st);
};
#endif // !STRNGBAD_H_