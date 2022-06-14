#pragma once
#ifndef DMA_H_
#define DNA_H_
#include <iostream>

// DMA�� ����ϴ� ���� Ŭ����
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

// DMA�� ������� �ʴ� �Ļ� Ŭ����
// �ı��ڰ� �ʿ� ����
// �Ͻ��� ���� �����ڸ� ����Ѵ�
// �Ͻ��� ���� �����ڸ� ����Ѵ�
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

// DMA�� ����ϴ� �Ļ� Ŭ����
class hasDMA : public baseDMA
{
private:
	char* st
};
#endif // !1
