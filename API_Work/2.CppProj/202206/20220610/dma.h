#pragma once
#ifndef DMA_H_
#define DNA_H_
#include <iostream>

// DMA를 사용하는 기초 클래스
class baseDMA
{
private:
	char* label;
	int rating;
public:
	baseDMA(const char* 1 = "null", int r = 0);
	baseDMA(const baseDMA& rs);
	virtual ~baseDMA();
	baseDMA& operator = (const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};

// DMA를 사용하지 않는 파생 클래스
// 파괴자가 필요 없다
// 일시적 복사 생성자를 사용한다
// 암식적 대입 연산자를 사용한다
class lacksDMA : public baseDMA
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
	lacksDMA(const char* c, const baseDMA& rs);
	friend std::ostream& operator << (std::ostream& os, const lacksDMA& rs);
};

// DMA를 사용하는 파생 클래스
class hasDMA : public baseDMA
{
private:
	char* st
};
#endif // !1
