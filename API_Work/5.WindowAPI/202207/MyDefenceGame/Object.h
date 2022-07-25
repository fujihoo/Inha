#pragma once
#include <iostream>
#include <cmath>
#include <Windows.h>
#include <random>
#include "MyDefenceGame.h"

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<int> dis(100, 1180);

class object
{
private:
	HDC _hdc;
	POINT _center;
	double _radius;
public:
	object(); {}
	~object();

};

class circle : public object
{
public:
	void DrawCircle(HDC hdc, POINT center, double radius)
};
