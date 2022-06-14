#pragma once
#ifndef STOPWATCH_H_
#define STOPWATCH_H_
#include <iostream>
#include <ctime>

class Stopwatch
{
private:
	unsigned int startTime;
	unsigned int endTime;
public:
	unsigned int get_startTime() { return startTime; };
	unsigned int get_endTime() { return endTime; };
	void start() { startTime = (unsigned int)clock(); };
	void stop() { endTime = (unsigned int)clock(); };
	unsigned int getElaspedTime() { return get_endTime() - get_startTime(); };
};


#endif // !