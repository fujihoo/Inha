#define _CRT_SECURE_NO_WARNINGS
/*
 Q4. 소수 판별 프로그램 개선
     0. 이전에 작성한 소수 출력 프로그램 작성
     1. 홀수로만 계산하기
     2. 이전 계산된 소수로 나누어 지지 않는 수
     3. 제곱근 n 이하의 모든 소수로 나누었을 때
        나누어 떨어지지 않는 수를 소수
 */

// 0. 이전에 작성한 소수 출력 프로그램 작성

#include <iostream>
using namespace std;

int get_num(void);
int is_prime_number(int a);
int print_prime_number(int b);

int main()
{
    int n1 = get_num();
    time_t Start = clock();
	print_prime_number(n1);
    time_t Finish = clock();

    cout << "\n" << (double)(Finish - Start);

    return 0;
}

int get_num(void)
{
    int num;
    cout << "2 이상의 정수 입력: ";
    cin >> num;

    while (num < 2)
    {
        cout << "2 이상의 정수를 입력하세요!\n";
        cout << "입력: ";
        cin >> num;
    }
    return num;
}

int is_prime_number(int a)      // 소수 판별 함수
{
    for (int i = 2; i < a; ++i)
    {
	    if (a % i == 0)
	    {
            return 0;
	    }
    }
    return 1;
}

int print_prime_number(int b)   // 소수 출력 함수
{
    int count = 0;
    for (int i = 2; i <= b; i++)
    {
	    if (is_prime_number(i))
	    {
		    if (count == 5)     // 선 개행 후 출력
		    {
                cout << "\n";
                count = 0;
		    }
            cout << i << "\t";
            count++;
	    }
    }
    return 0;
}