#include "Stopwatch.h"

void hanoi(int n, int from, int by, int to);

int main()
{
	int n;
	std::cin >> n;
	Stopwatch timer;
	timer.start();
	hanoi(n, 1, 2, 3);
	timer.stop();

	std::cout << timer.getElaspedTime() << "\n";
	
	return 0;
}

void hanoi(int n, int from, int by, int to)
{
	if (n == 1)
	{
		std::cout << n << "을 " << from << "에서 " << to << "로 옮겼습니다." << "\n";
	}
	else
	{
		hanoi(n - 1, from, to, by);
		std::cout << n << "을 " << from << "에서 " << to << "로 옮겼습니다." << "\n";
		hanoi(n - 1, by, from, to);
	}
}