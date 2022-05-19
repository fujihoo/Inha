//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>

/*
	작성자 : 홍길동
	목적 : 기본 코드 설명
 */

 // : 작성자 - 홍길동, 목적 - main 함수 설명

 //int main()
 //{
 //	printf("Hello World!\n");
 //	printf("Be Happy!\n");
 //	return 0;
 //}

 //int main(void)
 //{
 //	printf("Be happy\n");
 //	printf("1234567890234567890\n");
 //	printf("My\tfriend\n");
 //	printf("Goot\bd\tchance\n");
 //	printf("Cow\rW\a\n");
 //
 //	int breakpoint = 999;
 //
 //	return 0;
 //}
 //{
 //	// %d , %lf
 //	int age;
 //	printf("A ");
 //	printf("%d\n", 10);
 //	printf("%.3lf\n", 3.4);
 //}
 //{
 //	// %d , %lf
 //	printf("%.1lf\n", 3.45);
 //	printf("학생%s 나이는 %d 입니다", "AAA", 27);
 //
 //	system("pause");
 //	return -1;
 //}
 //int main(void)
 /*
	 printf("Be\rHappy!\nBaby");
	 return 0;
 }*/
 //{
 //	printf("%d\n", 12);
 //	printf("%o\n", 12);
 //	printf("%x\n", 12);
 //
 //	printf("%d\n", 12);
 //	printf("%d\n", 12);
 //	printf("%d\n", 12);
 //}
 //{
 //	printf("%c\n", 'A');
 //	printf("%s\n", "ABCDEFG");
 //}

 //int main(void)
 //{
 //	printf("Be\rHappy!\nBaby");
 //}
 //int main(void)
 //{
 //	int a = 0, b, c;
 //	double dA;
 //	char cA;
 //
 //	a = 10;
 //	b = a;
 //	c = a + 20;
 //	dA = 3.5f;
 //	cA = 'A';
 //
 //	printf("변수 a의 값 : %d\n", a);
 //	printf("변수 b의 값 : %d\n", b);
 //	printf("변수 c의 값 : %d\n", c);
 //	printf("변수 dA의 값 : %.1lf\n", dA);
 //	printf("변수 cA의 값 : %c\n", cA);
 //}

 //int main(void)
 //{
 //	int in = 2147483647;
 //	long ln = 2147483647;
 //
 //	printf("int형 변수 출력 : %d\n", in);
 //	printf("long형 변수 출력 : % ld\n",ln);
 //	printf("int : %d \n", sizeof(int));
 //	printf("long : %d \n", sizeof(long));
 //}

 //int main(void)
 //{
 //	char fruit[20] = "Apple";
 //	char fruit2[11] = "Strawberry";
 //
 //	//fruit2[0] = "pineApple";
 //
 //	printf("%s %s" , fruit2 , "Jam");
 //
 //	strcpy(fruit, "pineApple");
 //
 //	printf("%s \n", fruit);
 //}

 //int main(void)
 //	/*int a = 0;
 //	printf("숫자 입력: ");
 //	scanf("%d", &a);
 //
 //	printf("입력된 값 : %d\n", a);
 //	*/
 //	/*int age;
 //	double height;
 //
 //	printf("나이와 키를 입력하세요 : ");
 //	scanf("%d %lf", &age, &height);
 //	printf("나이는 %d살, 키는 %.1lfcm입니다\n", age, height);
 //
 //	return 0;*/
 //
 //	/*char grade;
 //	char name[20];
 //
 //	printf("학점 입력 : ");
 //	scanf("%c", &grade);
 //	printf("이름 입력 : ");
 //	scanf("%s", name);
 //	printf("%s의 학점은 %c입니다.\n", name, grade);
 //
 //	return 0;*/
 //
 //	//double apple;
 //	//int banana;
 //	//int orange;
 //
 //	//apple = 5 / 2.0;
 //	//banana = 5 / 2;
 //	//orange = 5 % 2;
 //
 //	//printf("apple : %.1lf\n", apple);
 //	//printf("banana : %d\n", banana);
 //	//printf("orange : %d\n", orange);
 //
 //	/*int a = 5, b = 5;
 //	int pre, post;
 //
 //	pre = (++a) * 3;
 //	post = (b++) * 3;
 //
 //	printf("초깃값 a = %d, b = %d\n", a, b);
 //	printf("전위형: (++a) * 3 = %d, 후위형: (b++) * 3 = %d\n", pre, post);
 //
 //	return 0;*/
 //
 //	/*int a = 10, b = 20, c = 10;
 //	int res;
 //
 //	res = (a > b);
 //	printf("a > b : %d\n", res);
 //	res = (a >= b);
 //	printf("a >= b : %d\n", res);
 //	res = (a < b);
 //	printf("a < b : %d\n", res);
 //	res = (a <= b);
 //	printf("a <= b : %d\n", res);
 //	res = (a == b);
 //	printf("a == b : %d\n", res);
 //	res = (a != c);
 //	printf("a != b : %d\n", res);*/
 //
 //	/*int age;
 //
 //	printf("나이를 입력하시오 : ");
 //	scanf("%d", &age);
 //	printf("%d은 %d대입니다.", age, (age/10)*10);
 //
 //	return 0;*/
 //
 //	/*int Human_Life_min = 100 * 365 * 24 * 60;
 //	int N;
 //	int M;
 //	int loss_age;
 //	int Expected_age;
 //
 //	printf("몇년간 하루에 몇개피씩 담배를 피웠나요?");
 //	scanf("%d%d", &N, &M);
 //	loss_age = N * M * 365 * 220;
 //	Expected_age = Human_Life_min - N * M * 365 * 220;
 //	printf("줄어든 수명 : %d일 %d시 %d분\n",
 //		((loss_age / 60) / 24), (loss_age / 60) % 24, loss_age % 60);
 //	printf("기대 수명 : %d살 %d일 %d시 %d분\n",
 //		(((Expected_age / 60) / 24) / 365), (((Expected_age / 60) / 24) % 365), (Expected_age / 60 % 24), Expected_age % 60);
 //
 //	return 0;*/
 //
 //
 //	//int a = 20, b = 3;
 //	//double res;
 //
 //	//res = ((double)a) / ((double)b);	// (double)을 사용해 a와 b의 값을 실수로 변환
 //	//printf("a = %d, b = %d\n", a, b);
 //	//printf("a / b의 결과 : %.1lf\n", res);
 //
 //	//a = (int)res;						// (int)를 사용해 res의 값에서 정수 부분만 추림
 //	//printf("(int) %.1lf의 결과 : %d\n", res, a);
 //
 //	//return 0;
 //	/*int a = 10, b = 20, res;
 //
 //	res = (a > b) ? a : b;
 //	printf("큰값 : %d\n", res);
 //
 //	return 0;*/
 //
 //	/*Q3. 사용자로부터 정수 3개를 입력받아 저장하고
 //이들 변수 중 가장 큰 값을 출력하는 프로그램을 작성하라.*/

 //int main(void)
 //{
	 /*int a;
	 int b;
	 int c;
	 int res1;
	 int res2;
	 int res3;

	 printf("a, b, c 값을 입력해라");
	 scanf("%d%d%d", &a, &b, &c);

	 res1 = (a > b) ? a : b;
	 res2 = (b > c) ? b : c;
	 res3 = (res1 > res2) ? res1 : res2;

	 printf("최대값은 %d입니다.", res3);

	 return 0;*/

	 //05-1 if 문
	 //int a = 0;
	 //scanf("%d", &a);
	 //if( a % 2 )				// : 나머지가 있을 때
	 //{
	 //	printf("입력된 수 %d 홀수입니다.\n", a);

	 //}

	 //if(!(a % 2))
	 //{
	 //	printf("입력된 수 %d 짝수입니다.\n", a);
	 //}

	 //{
	 //	int a = 20;
	 //	int b = 0;
	 //	printf("정상\n");

	 //	if (a > 10)
	 //	{
	 //		b = a;
	 //	}

	 //	printf("a : %d, b : %d\n", a, b);
	 //}

	 //Q. 두개의 정수를 입력 받아 두 수의 차를 출력하는
	 //프로그램을 작성하라.
	 //단, 무조건 큰 수 에서 작은 수를 빼야 한다.
	 //	ex) 12 5 -> 7
	 //		4 16 -> 12

	 //	case 1. if ~ else 문을 이용해서 작성
	 //	case 2. 조건연산자를 이용해서 작성

 //}

 //#define _CRT_SECURE_NO_WARNINGS
 //#include <stdio.h>

 //int main(void)
 //{
 //	int a;
 //	int b;
 //
 //	printf("정수 a,b 값을 입력하시오.");
 //	scanf("%d%d", &a, &b);
 //
 //	if (a >= b)
 //	{
 //		printf("%d", a - b);
 //	}
 //	else
 //	{
 //		printf("%d", b - a);
 //	}
 //
 //	a >= b ? printf("%d", a - b) : printf("% d", b - a);
 //
 //	return 0;
 //}

 //int main(void)
 //{
 //	int rank;
 //	int m = 0;
 //
 //	scanf("%d", &rank);
 //
 //	switch (rank)
 //	{
 //	case 1:
 //		m = 300;
 //		break;
 //	case 2:
 //		m = 200;
 //		break;
 //	case 3:
 //		m = 100;
 //		break;
 //	default :
 //		m = 10;
 //		break;
 //	}
 //	printf("m : %d\n", m);
 //
 //	return 0;
 //}

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>

 //

 //int main(void)
 //{
 //	int a = 1;
 //
 //	while (a < 10)
 //	{
 //		a = a * 2;
 //	}
 //	printf("a : %d\n", a);
 //
 //	return 0;
 //}

 //int main(void)
 //{
 //	int a;
 //
 //	while (1)
 //	{
 //		printf("정수를 입력하시오 : ");
 //		scanf("%d", &a);
 //		if (a <= 0)
 //			break;
 //		if (a % 2)
 //			printf("홀수\n");
 //		else
 //			printf("짝수\n");
 //	}
 //
 //	for (int i = 0; i < 3; i++)
 //	{
 //		printf("i : %d\n", i);
 //	}
 //
 //	return 0;
 //}

 //Q. 어떤 자연수를 입력받아 팩토리얼을 구하는 프로그램을 작성하라.
 //int main(void)
 //{
 //	int a;
 //	printf("자연수를 입력하세요");
 //	scanf("%d", &a);
 //
 //	int b = a;
 //
 //	if (a >= 1)
 //	{
 //		while (b != 1)
 //		{
 //			a = a * (b - 1);
 //			b--;
 //		}
 //	}
 //	printf("%d", a);
 //
 //	return 0;
 //}

 //Q.	두 수를 입력받아 두 수 사이에 존재하는 정수의 합을
 //	구하는 프로그램을 작성하라.
 //	ex) 3 5
 //		3 + 4 + 5 => 12

 //

 //Q.	사용자로부터 양의 정수 m과 n을 입력받아
 //	n개 만큼 m의 배수를 출력하는 프로그램을 작성
 //	ex) 3 4
 //		=> 3 6 9 12

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //
 //int main(void)
 //{
 //	int m;
 //	int n;
 //	int i;
 //	int sum = 0;
 //
 //	printf("m과 n을 입력하세요");
 //	scanf("%d%d", &m, &n);
 //
 //	if (m < n)
 //	{
 //		for (i = m; i <= n; i++)
 //		{
 //			sum = sum + i;
 //		}
 //	}
 //	else if (m == n)
 //	{
 //		sum = m;
 //	}
 //	else
 //	{
 //		for (i = n; i <= m; i++)
 //		{
 //			sum = sum + i;
 //		}
 //	}
 //
 //	printf("%d", sum);
 //	return 0;
 //}

 //int main(void)
 //{
 //	int a;
 //	scanf("%d", &a);
 //
 //	while (1)
 //		if (a < 0)
 //		{
 //			printf("%d", a);
 //		}
 //		else
 //		{
 //			printf("%d", a);
 //		}
 //		return 0;
 //}

 //Q. 사용자로부터 계속 정수를 입력받아 그 값을 계속 더해 나간다.
 //사용자가 0을 입력할 때까지 계속 되어야 하며, 0이 입력되면
 //입력된 모든 정수의 합을 출력한다.

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //
 //int main(void)
 //{
 //	int a = 1;
 //	int b = 0;
 //
 //	while(a!=0)
 //	{
 //		printf("더할 정수를 입력");
 //		scanf("%d", &a);
 //
 //		b = b + a;
 //	}
 //	printf("%d", b);
 //
 //	return 0;
 //}

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //
 //int i;
 //int j;
 //
 //int main(void)
 //{
 //	for (i = 2; i <= 9; i++)
 //	{
 //		for (j = 1; j <= 9; j++)
 //		{
 //			printf("%d * %d = %d\n", i, j, i*j);
 //		}
 //	}
 //}

 //Q. 1 이상 100 미만인 정수 m과 n의 배수를 출력하는
 //프로그램을 작성하라.
 //단, m의 배수 이면서 n의 배수인 정수는 한번만
 //출력해야 한다.
 //ex)	7 9
 //	7 9 14 18 21 27 28 35 36 ... 63 .. 99

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //
 //int main(void)
 //{
 //	int a = 0;
 //	int b = 0;
 //
 //	printf("a, b의 값을 입력하세요");
 //	scanf("%d%d", &a, &b);
 //
 //	for (int i = 1; i < 100; i++)
 //	{
 //		if (i % a == 0)
 //		{
 //			printf("%d\n", i);
 //			if (i % b == 0)
 //			{
 //				continue;
 //			}
 //		}
 //		else if (i % b == 0)
 //		{
 //			printf("%d\n", i);
 //			if (i % a == 0)
 //			{
 //				continue;
 //			}
 //		}
 //		else if (i % (a * b) == 0)
 //		{
 //			printf("%d\n", i);
 //		}
 //		else
 //		{
 //			continue;
 //		}
 //	}
 //}

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //
 //int main(void)
 //{
 //	int a = 0;
 //	int b = 0;
 //	int i = 0;
 //
 //	printf("두 정수 a, b 값을 입력하세요.");
 //	scanf("%d%d", a, b);
 //
 //	for (i = 1; i < 100; i++)
 //	{
 //		if((i % a) == 0 && (i % b) == 0)
 //		{
 //			printf("%d", )
 //		}
 //	}
 //}

 //Q. 임의의 n을 입력 받아서 다음과 같은 형태로 출력
 //ex) n = 5인 경우(서로 다른 두개의 프로그래밍)
 //*
 //**
 //***
 //****
 //*****
 //
 //    *
 //   **
 //  ***
 // ****
 //*****

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //
 //int main(void)
 //{
 //	int n;
 //	printf("임의의 n을 입력하시오.");
 //	scanf("%d", &n);
 //
 //	for(int i = 0; i < n; i++)
 //	{
 //		for(int j = 0; j <= i; j++)
 //		{
 //			printf("*");
 //		}
 //		printf("\n");
 //	}
 //
 //	for (int i = 0; i < n; i++)
 //	{
 //		for(int j = 0; j < n-i-1; j++)
 //		{
 //			printf(" ");
 //		}
 //		for(int j = 0; j <= i; j++)
 //		{
 //			printf("*");
 //		}
 //		printf("\n");
 //	}
 //}

 //Q1. 다음과 같이 되도록 구구단을 출력하여라.
 //원하는 단 n을 입력 받아 n단 까지 출력
 //
 //ex) n = 6
 //
 //			구	구	단
 //----------------------------------------
 //2x1 = 2		3x1 = 3		4x1 = 4
 //2x2 ...........................
 //.
 //.
 //.
 //2x9 = 18	3x9 = 27	4x9 = 36		
 //----------------------------------------
 //5x1 = 5		6x1 = 6
 //5x2 ...........................
 //.
 //.
 //.
 //5x9 = 45	6x9 = 54

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //
 //int main(void)
 //{
 //	int n = 0;
 //	int a = 2;
 //
 //	printf("원하는 단을 입력하시오 : ");
 //	scanf("%d", &n);
 //	printf("\t구\t구\t단\t\n");
 //	printf("-------------------------------------------\n");
 //
 //	for (int j = 1; j <= 9; j++)
 //	{
 //
 //		for (int k = a; k <= a + 2 && k<=n; k++)
 //		{
 //			if (n >= a)
 //			{
 //				printf("%d * %d = %d\t", k, j, k * j);
 //			}
 //		}
 //		printf("\n");
 //		if (j == 9 && n > a+2)
 //		{
 //			a += 3;
 //			j = 0;
 //			printf("-------------------------------------------\n");
 //		}
 //	}
 //}





 //Q.임의 수 n을 입력 받아서 다음과 같은 형태로 출력하시오.
 //ex) n = 5
 //*       *
 //* *   * *
 //* * * * *
 //* *   * *
 //*       *
 //
 //ex) n = 4
 //*     *
 //* * * *
 //* * * *
 //*     *
 //
 //
 //
 //Q.임의 수 n을 입력 받아서 다음과 같은 형태로 출력하시오.
 //ex) n = 5
 //*       *
 //  *   *
 //	*
 //  *   *
 //*       *
 //
 //ex) n =4
 //*     *
 //  * *
 //  * *
 //*     *


 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //
 //int main(void)
 //{
 //	int	a = 2;
 //	int	n = 0;
 //
 //	scanf("%d", &n);
 //
 //	for(int i = 1; i <= 9; i++)
 //	{
 //		for(int j = a; j <= a+2 && j <= n; j++)
 //		{
 //			if (n >= a)
 //			{
 //				printf("%d * %d = %d\t", j, i, j * i);
 //			}
 //		}
 //		printf("\n");
 //		if(i == 9 && n > a+2)
 //		{
 //			a += 3;
 //			i = 0;
 //		}
 //	}
 //}

 //#include <stdio.h>
 //
 //int sum(int x, int y);
 //
 //int main(void)
 //{
 //	int a = 10, b = 20 ;
 //	int result;
 //
 //	result = sum(a, b);
 //	printf("result : %d\n", result);
 //
 //	return 0;
 //}
 //
 //int sum(int x, int y)
 //{
 //	int temp;
 //
 //	temp = x + y;
 //
 //	return temp;
 //}

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include <stdio.h>
 //
 //int get_num(void);
 //
 //int main(void)
 //{
 //	int result;
 //
 //	result = get_num();
 //	printf("반환값 : %d\n", result);
 //	return 0;
 //}
 //
 //int get_num(void)
 //{
 //	int num;
 //
 //	printf("양수 입력 : ");
 //	scanf("%d", &num);
 //
 //	return num;
 //}

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //
 //void print_char(char ch, int count);
 //
 //int main(void)
 //{
 //	print_char('@', 5);
 //
 //	return 0;
 //}
 //
 //void print_char(char ch, int count)
 //{
 //	int i;
 //
 //	for (i = 0; i < count; i++)
 //	{
 //		printf("%c", ch);
 //	}
 //
 //	return;
 //}

//#define		_CRT_SECURE_NO_WARNINGS
//#include	<stdio.h>
//
//int get_num(void);
//int is_prime_number(int a);
//int print_prime_number(int b);
//
//int main(void)
//{
//	int n1 = get_num();
//	print_prime_number(n1);
//
//	return 0;
//}
//
//int get_num(void)
//{
//	int num;
//	printf("2 이상의 정수 입력 : ");
//	scanf("%d", &num);
//	while (num < 2)
//	{
//		printf("2이상의 정수를 입력하세요!\n");
//		printf("입력 : ");
//		scanf("%d", &num);
//	}
//	return num;
//}
//
//int is_prime_number(int a) // 소수 판별 함수
//{
//	for (int i = 2; i < a; ++i)
//	{
//		if (a % i == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//int print_prime_number(int b) // 소수 출력 함수
//{
//	int count = 0;
//	for (int i = 2; i <= b; i++)
//	{
//		if (is_prime_number(i))
//		{
//			if (count == 5) // 선 개행 후 출력
//			{
//				printf("\n");
//				count = 0;
//			}
//			printf("%d\t", i);
//			count++;
//		}
//	}
//	return 0;
//}

/*
 2022.04.26(화)
 Q1. p.206 도전 실전 예제 .. 재귀호출 이용해서

#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rec(int n);

int main(void)
{
	int a = 0;

	printf("자연수 n을 입력하시오\n");
	scanf("%d", &a);
	printf("%d", rec(a));
}

int rec(int n)
{
	if (n <= 0)
	{
		return 0;
	}
	else
	{
		return n + rec(n - 1);
	}
}
*/

/*
 Q2. 입력받는 값의 절대값을 구하는 함수 abs()를 구현하라
 ex>
 종료하라면 0을 입력하시오.
 정수 입력 : -34
 절대 값은 : 34
 */

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //
 //int abs(int n);
 //
 //int main(void)
 //{
 //	int n = 1;
 //
 //	while (n)
 //	{
 //		printf("정수 n을 입력하시오, 0 입력시 종료 :");
 //		scanf("%d", &n);
 //		printf("%d\n", abs(n));
 //	}
 //	
 //}
 //
 //int abs(int n)
 //{
 //	if(n < 0)
 //	{
 //		n = -n;
 //	}
 //	return n;
 //}

 /*
 Q3. 달팽이 한마리가 한달이 지나면 어른이 되고
	 다시 한달이 지나면 새끼를 낳는다.
	 새로 태어나 달팽이 역시 한달이 지나면
	 어른이 되고, 다시 한달 후부터 새끼를 낳는 다고 할 때,
	 달팽이가 매달 새끼를 낳으면 1년후 전체
	 달팽이의 수는 얼마인지 알 수 있도록 프로그램을
	 작성하라.
	 (가정 1. 달팽이는 자웅동체이다.
	  가정 2. 달팽이가 1년 만에 죽을리는 없다.)
  */

  //#define		_CRT_SECURE_NO_WARNINGS
  //#include <stdio.h>
  //
  //int fibo_rec(int n);
  //
  //int main(void)
  //{
  //	int n = 1;
  //	printf("몇 달이 지났나? : ");
  //	scanf("%d", &n);
  //	if (n >= 0)
  //	{
  //		printf("달팽이 : %d마리\n", fibo_rec(n + 1));
  //	}
  //	else
  //	{
  //		return 0;
  //	}
  //}
  //
  //int fibo_rec(int n)
  //{
  //	if (n == 0)
  //	{
  //		return 0;
  //	}
  //	else if (n == 1)
  //	{
  //		return 1;
  //	}
  //	else
  //		return fibo_rec(n - 1) + fibo_rec(n - 2);
  //}

//#define		_CRT_SECURE_NO_WARNINGS
//#include	<stdio.h>
//
//int func_calculation(int i, int a, int b);
//
//int main(void)
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//
//	while (1)
//	{
//		printf("원하는 연산을 선택하시오\n");
//		printf("(1:덧셈, 2:뺼셈, 3:곱셈, 4:나눗셈, 0:종료)\n");
//		scanf("%d", &i);
//		if (i == 0)
//		{
//			return 0;
//		}
//		if (i < 0 || i > 4)
//		{
//			printf("0과 4사이 수를 입력하세요!\n\n");
//			continue;
//		}
//		printf("두 정수를 입력하시오\n");
//		scanf("%d%d", &a, &b);
//
//		func_calculation(i, a, b);
//	}
//}
//
//int func_calculation(int i, int a, int b)
//{
//	int cal;
//
//	if (i == 1)
//	{
//		cal = a + b;
//		printf("""덧셈"" 결과는 %d 입니다,\n\n", cal);
//	}
//	else if (i == 2)
//	{
//		cal = a - b;
//		printf("""뺼셈"" 결과는 %d 입니다.\n\n", cal);
//	}
//	else if (i == 3)
//	{
//		cal = a * b;
//		printf("""곱셈"" 결과는 %d 입니다.\n\n", cal);
//	}
//	else if (i == 4)
//	{
//		cal = a / b;
//		printf("""나눗셈"" 결과는 %d 입니다.\n\n", cal);
//	}
//	else
//	{
//		return 0;
//	}
//}

//#define		_CRT_SECURE_NO_WARNINGS
//#include	<stdio.h>
//
//void print_dot(int n);
//
//int main(void)
//{
//	int n = 0;
//
//	printf("n 값을 입력하세요 : ");
//	scanf("%d", &n);
//
//	print_dot(n);
//
//	return 0;
//}
//
////▶◀모양으로 출력 하기
//void print_dot(int n)
//{
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			if(i <= (n / 2))
//			{
//				if(j <= i || j >= n - i - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			else
//			{
//				if (j >= i || j <= n - i - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//		}
//		printf("\n");
//	}
//}

//#define		_CRT_SECURE_NO_WARNINGS
//#include	<stdio.h>
//
//#include	<stdio.h>
//
//void print_dot(int n);
//
//int main(void)
//{
//	int n = 0;
//
//	printf("n 값을 입력하세요 : ");
//	scanf("%d", &n);
//
//	print_dot(n);
//
//	return 0;
//}
//
////X모양으로 출력 하기
//void print_dot(int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i <= (n / 2))
//			{
//				if (j == i || j == n - i - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			else
//			{
//				if (j == i || j == n - i - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//		}
//		printf("\n");
//	}
//}

//#define		_CRT_SECURE_NO_WARNINGS
//#include	<stdio.h>
//
//int main(void)
//{
	/*int arr[5];

	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 1;*/

	/*int arr[5];

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = arr[0] + arr[1];
	scanf("%d", &arr[3]);

	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);

	return 0;*/

	/*int score[5];
	int i;
	int total = 0;
	double avg;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%d\t", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;*/

	//	int score[5];
	//	int i;
	//	int total = 0;
	//	double avg;
	//	int count;
	//
	//	count = sizeof(score) / sizeof(score[0]);
	//
	//	for (i = 0; i < count; i++)
	//	{
	//		scanf("%d", &score[i]);
	//	}
	//
	//	for (i = 0; i < count; i++)
	//	{
	//		total += score[i];
	//	}
	//	avg = total / (double)count;
	//
	//	for (i = 0; i < count; i++)
	//	{
	//		printf("%5d", score[i]);
	//	}
	//	printf("\n");
	//
	//	printf("평균 : %.1lf\n", avg);
	//
	//	return 0;
	//}

	/*
	 Q. 길이가 5인 int형 배열을 선언하고 사용자로부터 5개의 정수를
		입력받고 다음의 내용을 출력하는 프로그램을 작성하라.
		1. 입력된 정수중 최대값
		2. 입력된 정수중 최소값
		3. 입력된 정수들의 총합

		주의 : min/max의 초기값 주의, 첨자가 배열의 크기를 넘지 않도록 한다.
	 */

	 //#define		_CRT_SECURE_NO_WARNINGS
	 //#include	<stdio.h>

	 /*int main(void)
	 {
		 int arr[5];

		 for (int i = 0; i < 5; i++)
		 {
			 scanf("%d", &i);
		 }

		 for (int i = 0; i < 5; i++)
		 {
			 int max, min;
			 max = ()
		 }
	 }
	 */

	 //#define		_CRT_SECURE_NO_WARNINGS
	 //#include	<stdio.h>
	 //#include	<string.h>
	 //
	 //int main(void)
	 //{
	 //	char str1[80] = "cat";
	 //	char str2[80] = "tt";
	 //
	 //	strcpy(str1, "tt");
	 //	printf("%s", str1);
	 //
	 //	return 0;
	 //}

	 //#include	<stdio.h>
	 //
	 //int main(void)
	 //{
	 //	char str[80];
	 //
	 //	printf("문자열 입력 : ");	// 입력 안내 메시지 출력
	 //	gets(str);						// 빈칸을 포함한 문자열 입력
	 //	puts("입력된 문자열 : ");	//문자열 상수 출력
	 //	puts(str);		//배열에 저장된 문자열 출력
	 //
	 //	return 0;
	 //}

	 //#include <stdio.h>
	 //
	 //int main(void)
	 //{
	 //	char str[5];
	 //
	 //	str[0] = 'O';
	 //	str[1] = 'K';
	 //	printf("%s\n", str);
	 //
	 //	return 0;
	 //}

	 //Q. p232 대소문자 변환 프로그램.
	 //	메뉴 : 1. 대문자로 변환, 2. 소문자로 변환
	 //	1 입력 > Be Happy!
	 //	2 출력 > BE HAPPY!
	 //
	 //	1 입력 > Be Happy!
	 //	2 출력 > be happy!

	 //#define		_CRT_SECURE_NO_WARNINGS
	 //#include	<stdio.h>
	 //
	 //int	main(void)
	 //{
	 //	char str[80] = { 0 };
	 //	int n;
	 //
	 //	printf("1 입력 : 대문자 변환\n2 입력 : 소문자 변환\n");
	 //	scanf("%d", &n);
	 //	printf("문자열 입력 : \n");
	 //	getchar();
	 //	//scanf("%*c"); 대체 가능
	 //	gets(str);
	 //
	 //	for (int i = 0; i < 80; i++)
	 //	{
	 //		if (n == 1)
	 //		{
	 //			if (str[i] >= 'a' && str[i] <= 'z')
	 //			{
	 //				str[i] -= 32;
	 //			}
	 //		}
	 //		else if (n == 2)
	 //		{
	 //			if (str[i] >= 'A' && str[i] <= 'Z')
	 //			{
	 //				str[i] += 32;
	 //			}
	 //		}
	 //		else
	 //		{
	 //			continue;
	 //		}
	 //	}
	 //	puts(str);
	 //
	 //	return 0;
	 //}

	 /*
	 Q. 다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성하라.
		 A	Z
	 +	z	A
	 -----------
		 9	9


	 */


	 //#define		_CRT_SECURE_NO_WARNINGS
	 //#include	<stdio.h>
	 //
	 //int main(void)
	 //{
	 //	int n;
	 //
	 //	printf("\tA\tZ\n+\tZ\tA\n--------------------\n\tN\tN\n\n");
	 //	while (1)
	 //	{
	 //		printf("위 식을 만족하는 A, Z를 출력하겠습니다.\nN을 입력하시오. (단, n의 범위는 0부터 9까지 입니다.) : ");
	 //		scanf("%d", &n);
	 //		if (n >= 10 || n < 0)
	 //		{
	 //			printf("\n잘못된 입력입니다. 다시 입력해주세요\n\n");
	 //		}
	 //		else
	 //		{
	 //			break;
	 //		}
	 //	}
	 //
	 //	for (int A = 0; A <= n; A++)
	 //	{
	 //		for (int Z = n; Z >= 0; Z--)
	 //		{
	 //			if (A + Z == n)
	 //			{
	 //				printf("\tA = %d,\tZ = %d\n", A, Z);
	 //			}
	 //		}
	 //	}
	 //	return 0;
	 //}

//#define		_CRT_SECURE_NO_WARNINGS
//#include	<stdio.h>
//#include	<Windows.h>
//#include	<conio.h>
//
//int main(void)
//{
//	char str[80], temp;
//	int count = 0;
//
//	printf("광고판에 표기할 문자열을 입력하시오 : \n");
//	printf(">> ");
//	gets(str);
//	count = strlen(str);
//
//	while (1)
//	{
//		temp = _getch();
//		system("cls");
//		puts("광고판에 표기할 문자열을 입력하시오\n단, esc 입력시 종료");
//		printf(">> ");
//		if (temp == 27) //esc 입력시 종료.
//		{
//			break;
//		}
//		
//		printf("Hello");
//		Sleep(300);	//밀리초 단위로 대기(1000밀리초 -> 1초)
//		system("cls");	//화면에 내용을 지운다.
//		printf("ello H");
//		Sleep(300);
//		system("cls");
//		printf("llo He");
//		Sleep(300);
//		system("cls");
//		printf("lo Hel");
//		Sleep(300);
//		system("cls");
//		printf("o Hell");
//		Sleep(300);
//		system("cls");
//	}
//	printf("프로그램 종료\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 15, total;	// 변수 선언과 초기화
//	double avg;					// 평균을 저장할 변수
//	int* pa;					// 포인터 선언
//	int* pb;					// 포인터 선언
//	int* pt = &total;			// 포인터 선언과 초기화
//	double* pg = &avg;			// double형 포인터 선언과 초기화
//
//	pa = &a;					// 포인터 pa에 변수 a의 주소 대입
//	pb = &b;					// 포인터 pb에 변수 b의 주소 대입
//
//	*pt = *pa + *pb;			// a 값과 b 값을 더해 total에 저장
//	*pg = *pt / 2.0;			// total 값을 2로 나눈 값을 avg에 저장
//
//	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
//	printf("두 정수의 합 : %d\n", *pt);
//	printf("두 정수의 평균 : %.1lf\n", *pg);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//	int in;
//	double db;
//
//	char* pc = &ch;
//	int* pi = &in;
//	double* pd = &db;
//
//	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
//	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
//	printf("double형 변수의 주소 크기 : %d\n", sizeof(&ch));
//
//	printf("char형 변수의 포인터의 크기 : %d\n", sizeof(pc));
//	printf("char형 변수의 포인터의 크기 : %d\n", sizeof(pi));
//	printf("char형 변수의 포인터의 크기 : %d\n", sizeof(pd));
//
//	printf("char* 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
//	printf("int* 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
//	printf("double* 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));
//
//	return 0;
//}

/*
Q. int 형 num1, num2 를 선언과 동시에
10과 20으로 초기화 해주고
int 형 포인터 ptr1, ptr2 를 선언,
각 num1 과 num2 를 이용해서
num1 은 10 증가 num2 는 10 감소하게 한다.
이후 ptr1 과 ptr2 가 가리키는 대상을 서로 바꾼다.
마지막으로 ptr1 과 ptr2 가 가리키는
변수의 내용을 출력한다.
그리고 각 변수에 저장된 값도 출력해서 확인한다.
 */

 //#include <stdio.h>
 //
 //int main(void)
 //{
 //	int num1 = 10;
 //	int num2 = 20;
 //
 //	int* ptr1 = &num1;
 //	int* ptr2 = &num2;
 //
 //	printf("num1 = %d, num2 = %d, *ptr1 = %d, *ptr2 = %d\n", num1, num2, *ptr1, *ptr2);
 //
 //	num1 += 10;
 //	num2 -= 10;
 //
 //	printf("num1 = %d, num2 = %d, *ptr1 = %d, *ptr2 = %d\n", num1, num2, *ptr1, *ptr2);
 //
 //	ptr1 = &num2;
 //	ptr2 = &num1;
 //
 //	printf("num1 = %d, num2 = %d, *ptr1 = %d, *ptr2 = %d\n", num1, num2, *ptr1, *ptr2);
 //
 //	return 0;
 //}

 //call by reference!!!!
 //#include <stdio.h>
 //
 //void swap(int* pa, int* pb);				// 두 변수의 값을 바꾸는 함수의 선언
 //
 //int main(void)
 //{
 //	int a = 10, b = 20;						// 변수 선언과 초기화
 //
 //	swap(&a, &b);						// a, b의 주소를 인수로 주고 함수 호출
 //	printf("a : %d, b: %d\n", a, b);	// 변수 a, b 출력
 //
 //	return 0;
 //}
 //
 //void swap(int* pa , int* pb)	// 매개변수로 포인터 선언
 //{
 //	int temp;					// 교환을 위한 임시 변수
 //
 //	temp = *pa;					// temp에 pa가 가리키는 변수의 값 저장
 //	*pa = *pb;					// pa가 가리키는 변수에 pb가 가리키는 변수의 값 저장
 //	*pb = temp;					// pb가 가리키는 변수에 temp 값 저장
 //}

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //
 //void swap(double* pa, double* pb);
 //void line_up(double* maxp, double* midp, double* minp);
 //
 //int main(void)
 //{
 //	double max, mid, min;
 //
 //	printf("실수값 3개 입력 : ");
 //	scanf("%lf%lf%lf", &max, &mid, &min);
 //	line_up(&max, &mid, &min);
 //	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);
 //
 //	return 0;
 //}
 //
 //void swap(double* pa, double* pb)
 //{
 //	double temp;
 //
 //	temp = *pa;
 //	*pa = *pb;
 //	*pb = temp;
 //}
 //
 //void line_up(double* maxp, double* midp, double* minp)
 //{
 //	if (*maxp < *midp)
 //	{
 //		swap(maxp, midp);
 //	}
 //	if (*maxp < *minp)
 //	{
 //		swap(maxp, minp);
 //	}
 //	if (*midp < *minp)
 //	{
 //		swap(midp, minp);
 //	}
 //}

 //#include <Stdio.h>
 //
 //int main(void)
 //{
 //	int arr[3];
 //	int* pa = arr;
 //	int i;
 //
 //	*pa = 10;
 //	*(pa + 1) = 20;
 //	pa[2] = pa[0] + pa[1];
 //
 //	for (i = 0; i < 3; i++)
 //	{
 //		printf("%5d", pa[i]);
 //	}
 //
 //	return 0;
 //}

 //#include <stdio.h>
 //
 //int main(void)
 //{
 //	int arr[5] = { 10, 20, 30, 40, 50 };
 //	int* pa = arr;
 //	int* pb = pa + 3;
 //
 //	pa += 4;
 //
 //	printf("pa : %u\n", pa);
 //	printf("pb : %u\n", pb);
 //
 //
 //	printf("pb = pa : %u\n", pb - pa);
 //
 //	printf("앞에 있는 배열 요소의 값 출력 : ");
 //	if (pa < pb)
 //	{
 //		printf("%d\n", *pa);
 //	}
 //	else
 //	{
 //		printf("%d\n", *pb);
 //	}
 //
 //	return 0;
 //}

 /*
  Q. 광고판 문자열 출력프로그램을 포인터를 이용한 코드로
  바꿔 재작성 하도록 한다.
  */

  //#define		_CRT_SECURE_NO_WARNINGS
  //#include	<stdio.h>
  //#include	<Windows.h>
  //#include	<conio.h>
  //
  //int main(void)
  //{
  //	char str[80], temp, esc;
  //	int count = 0;
  //
  //	printf("광고판에 표기할 문자열을 입력하시오 : \n");
  //	printf(">> ");
  //	gets(str);
  //	count = strlen(str);
  //	str[count] = ' ';
  //	str[count + 1] = '\0';
  //	count++;
  //
  //	while (1)
  //	{
  //		if (_kbhit())
  //		{
  //			if (_getch() == 27)
  //			{
  //				break;
  //			}
  //		}
  //
  //		temp = str[0];
  //		for (int i = 0; i < count; i++)
  //		{
  //			str[i] = str[i + 1];
  //		}
  //		str[count - 1] = temp;
  //		puts(str);
  //		Sleep(300);
  //		system("cls");
  //	}
  //	return 0;
  //}

  //#define		_CRT_SECURE_NO_WARNINGS
  //#include	<stdio.h>
  //#include	<Windows.h>
  //#include	<conio.h>
  //
  //int main(void)
  //{
  //	char str[80], temp, esc;
  //	char* str_1 = str;
  //	char* temp_1 = &temp;
  //	char* esc_1 = &esc;
  //	int count = 0;
  //
  //	printf("광고판에 표기할 문자열을 입력하시오 : \n");
  //	printf(">> ");
  //	gets(str);
  //	count = strlen(str);
  //	str[count] = ' ';
  //	str[count + 1] = '\0';
  //	count++;
  //
  //	while (1)
  //	{
  //		if (_kbhit())
  //		{
  //			if (_getch() == 27)
  //			{
  //				break;
  //			}
  //		}
  //
  //		temp = *str;
  //		for (int i = 0; i < count; i++)
  //		{
  //			*(str + i) = *(str + i +1);
  //		}
  //		str[count - 1] = temp;
  //		puts(str_1);
  //		Sleep(300);
  //		system("cls");
  //	}
  //	return 0;
  //}

  /*
   Q. 길이가 6인 int형 배열 Arr을 선언하고 1,2,3,4,5,6 으로
	  초기화 한 다음에 배열에 저장된 값의 순서가 6,5,4,3,2,1이
	  되도록 변경하는 프로그램을 작성하라.
	  단, 배열의 맨 앞과 맨뒤를 가리키는 포인터 변수 두개를
	  선언해서 이를 활용하여 저장된 값의 순서를 뒤 바꿔야 한다.

	  임의의 값을 입력 받아서 뒤집어 출력하는 프로그램을 작성하라
	  ex)	입력 : Hello
		  출력 : olleH
   */

   /*#include <stdio.h>

   void swap(int* a, int* b);

   int main(void)
   {
	  int Arr[6] = { 1, 2, 3, 4, 5, 6 };
	  int* Arr_1 = Arr;

	  for (int i = 0; i < 3; i++)
	  {
		  swap((Arr_1 + i), (Arr_1 + 5 - i));
	  }
	  for (int i = 0; i < 6; i++)
	  {
		  printf("%d", *(Arr_1 + i));
	  }


	  return 0;
   }

   void swap(int* a, int* b)
   {
	  int temp = 0;
	  temp = *b;
	  *b = *a;
	  *a = temp;
   }*/

   //#define		_CRT_SECURE_NO_WARNINGS
   //#include	<string.h>
   //#include	<stdio.h>
   //
   //void swap(char* a, char* b);
   //
   //int main(void)
   //{
   //	char str[80];
   //	char* str_1 = str;
   //
   //	int count;
   //	printf("문자열 입력 : ");
   //	gets(str);
   //	count = strlen(str);
   //
   //	for (int i = 0; i < count / 2; i++)
   //	{
   //		swap(str_1 + i, str_1 + count - 1 - i);
   //	}
   //	puts(str);
   //
   //	return 0;
   //}
   //
   //void swap(char* a, char* b)
   //{
   //	char temp = 0;
   //	temp = *b;
   //	*b = *a;
   //	*a = temp;
   //}

   //#define		_CRT_SECURE_NO_WARNINGS
   //#include	<stdio.h>
   //
   //void arr_func(int arr[]);
   //
   //int main(void)
   //{
   //	int arr[5] = { 0 };
   //
   //	printf("최대, 최소, 총합을 구할 5개의 정수를 입력하시오 : ");
   //	for (int i = 0; i < 5; i++)
   //	{
   //		scanf("%d", &arr[i]);
   //	}
   //	arr_func(arr);
   //
   //	return 0;
   //}
   //
   //void arr_func(int arr[])
   //{
   //	int max = arr[0];
   //	int min = arr[0];
   //	int sum = 0;
   //
   //	for (int i = 0; i < 5; i++)
   //	{
   //		max = (max < arr[i]) ? arr[i] : max;
   //		min = (min > arr[i]) ? arr[i] : min;
   //		sum += arr[i];
   //	}
   //
   //	printf("입력된 정수 중 최대값 : %d\n입력된 정수 중 최소 값 : %d\n입력된 정수의 총합 : %d\n", max, min, sum);
   //}

   //#include <stdio.h>
   //
   //void input_nums(int* lotto_nums);
   //void print_nums(int* lotto_nums);
   //
   //int main(void)
   //{
   //	int lotto_nums[6];
   //
   //	input_nums(lotto_nums);
   //	print_nums(lotto_nums);
   //
   //	return 0;
   //}
   //
   //void input_nums(int* lotto_nums)
   //{
   //	for (int i = 0; i < 5; i++)
   //	{
   //		scanf("%d", &lotto_nums[i]);
   //	}
   //}
   //
   //void print_nums(int* lotto_nums)
   //{
   //	
   //}

   /*
	P.315

   도전 실전 예제

   Q. 길이가 가장 긴 단어 찾기?

   키보드로 입력한 단어 중에서

   길이가 가장 긴 단어의 길이를 출력하세요.

   한 줄에 하나의 단어만 입력하며 Ctrl + Z를

   누를 때까지 입력한 단어 중에서

   길이가 가장 긴 단어의 길이를 출력합니다.

   배열은 사용하지 않고 작성하세요.

   ?

   실행결과

   입력 :
   apple
   kiwi
   strawberry
   mango
   ^Z

   출력 :
   가장 긴 단어의 길이 : 10
	*/

	//#define		_CRT_SECURE_NO_WARNINGS
	//#include	<stdio.h>
	//
	//int main(void)
	//{
	//	int res = 0;
	//	int max = 0;
	//	int count = -1;
	//	char ch;
	//
	//	printf("단어들을 입력하세요 : \n>> ");
	//
	//	while(1)
	//	{
	//		res = scanf("%c", &ch);
	//		count++;
	//		if (res == -1)
	//		{
	//			break;
	//		}
	//		if (ch == '\n')
	//		{
	//			max = max < count ? count : max;
	//			count = -1;
	//			printf(">> ");
	//		}
	//	}
	//	printf("\n가장 긴 단어의 길이 : %d\n", max);
	//
	//	return 0;
	//}

	//p.318 12-1 문자열과 포인터
	//#include <stdio.h>
	//
	//int main(void)
	//{
	//	printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
	//	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
	//	printf("첫 번째 문자 : %c\n", *"apple");
	//	printf("두 번째 문자 : %c\n", *("apple" + 1));
	//	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);
	//
	//	return 0;
	//}

	//#include <stdio.h>
	//
	//int main(void)
	//{
	//	char* pFruit = "apple";
	//	printf("%p\n", *pFruit);
	//	pFruit = "banana";
	//	printf("%p\n", *pFruit);
	//	pFruit = "apple";
	//	printf("%p\n", *pFruit);
	//
	//	return 0;
	//}

	//#define		_CRT_SECURE_NO_WARNINGS
	//#include	<stdio.h>
	//#include	<string.h>
	//
	//int main(void)
	//{
	//	char str1[80] = "strawberry";
	//	char str2[80] = "apple";
	//	char* ps1 = "banana";
	//	char* ps2 = str2;
	//
	//	printf("최초 문자열 : %s\n", str1);
	//	strcpy(str1, str2);
	//	printf("바뀐 문자열 : %s\n", str1);
	//
	//	strcpy(str1, ps1);
	//	printf("바뀐 문자열 : %s\n", str1);
	//
	//	strcpy(str1, ps2);
	//	printf("바뀐 문자열 : %s\n", str1);
	//
	//	strcpy(str1, "banana");
	//	printf("바뀐 문자열 : %s\n", str1);
	//
	//	return 0;
	//}


	//#define		_CRT_SECURE_NO_WARNINGS
	//#include	<stdio.h>
	//#include	<string.h>
	//
	//int main(void)
	//{
	//	char str[20] = "mango tree";
	//
	//	strncpy(str, "apple-pie", 5);
	//
	//	printf("%s\n", str);
	//
	//	return 0;
	//}

	//#define		_CRT_SECURE_NO_WARNINGS
	//#include	<stdio.h>
	//#include	<string.h>
	//
	//int main(void)
	//{
	//	char c[80] = "piee";
	//	char d[10] = "pieeeee";
	//
	//	strcmp(c, d);
	//	printf("%d", c);
	//
	//	return 0;
	//}

	//#include <stdio.h>
	//
	//char* my_strcpy(char* pa, char* ps);				// 함수 선언
	//
	//int main(void)
	//{
	//	char str[80] = "strawberry";
	//
	//	printf("바꾸기 전 문자열 : %s\n", str);
	//	my_strcpy(str, "apple");					// 문자열 "apple" 복사
	//	printf("바꾼 후 문자열 : %s\n", str);
	//	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));	// 반환값으로 출력
	//
	//	return 0;
	//}
	//
	//char *my_strcpy(char* pd, char* ps)					//복사 받을 곳(pd)과 복사할 곳(ps)의 포인터
	//{
	//	char* po = pd;		// pd 값을 나중에 반환하기 위해 보관
	//
	//	while (*ps != '\0')	// ps가 가리키는 문자가 널 문자가 아닌 동안
	//	{
	//		*pd = *ps;		// ps가 가리키는 문자를 pd가 가리키는 위치에 대입
	//		pd++;			// 복사 받을 다음 위치로 포인터 증가
	//		ps++;			// 복사할 다음 문자의 위치로 포인터 증가
	//	}
	//	*pd = '\0';			// 복사가 모두 끝난 후 복사 받을 곳에 널 문자로 마무리
	//
	//	return po;			// 복사가 끝난 저장 공간의 시작 주소 반환
	//}


	/*
	 Q. "I am a boy. I am Happy!" 문자열이 있는데
	 이 중 boy 의 위치 주소를 출력하고
	 boy 를 girl 로 바꾸어 출력하도록 하는 코드를
	 작성하라.

	 출력결과)
		boy 위치 주소 : 0FF2 C400
		바뀐 문자열 : "I am a girl. I am Happy!"
	 */

	 //#define		_CRT_SECURE_NO_WARNINGS
	 //#include	<stdio.h>

	 //int main(void)
	 //{
	 //	int num_score[3][4] = { 100, 20, 30, 40 ,
	 //							 90, 80, 40, 20 ,
	 //							100, 20, 30, 40 };
	 //
	 //	int* pInt = num_score;
	 //	printf("%d\n", *(pInt + 6));		//40
	 //
	 //	return 0;
	 //}

	 //int main(void)
	 //{
	 //	int score[2][3][4] = {		// 2개 반 세명의 4과목 점수 저장
	 //		{ { 72, 80, 95, 60 }, { 68, 98, 83, 90 }, { 75, 72, 84, 90 } },
	 //		{ { 60, 85, 90, 88 }, { 95, 92, 88, 95 }, { 43, 72, 56, 75 } }
	 //	};
	 //
	 //	int i, j, k;										// 반복 제어 변수
	 //
	 //	for (i = 0; i < 2; i++)								// 반 수만큼 반복
	 //	{
	 //		printf("%d반 점수 : \n", i + 1);			// 반이 바뀔 때마다 출력
	 //		for (j = 0; j < 3; j++)							// 헉샹 수만큼 반복
	 //		{
	 //			for (k = 0; k < 4; k++)						// 과목 수만큼 반복
	 //			{
	 //				printf("%5d", score[i][j][k]);	// 점수 출력
	 //			}
	 //			printf("\n");							// 한 학생의 점수를 출력하고 줄 바꿈
	 //		}
	 //		printf("\n");
	 //	}
	 //
	 //	return 0;
	 //}

	 /*
	  Q. 행렬 전환
		 다음과 같은 A 행렬을 B 행렬과 같은 형태가 되도록 하라

		 A		=>	B			A		=>	B
		 1 2 3 4		5 1			1 2 3		7 4	1
		 5 6 7 8		6 2			4 5 6		8 5 2
					 7 3			7 8 9		9 6 3
					 8 4

	  */

	  //#define		_CRT_SECURE_NO_WARNINGS
	  //#include	<stdio.h>

	  //int main(void)
	  //{
	  //	int i = 0;
	  //	int j = 0;
	  //
	  //	char arr[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
	  //	char arr_1[4][2] = { 0 , };
	  //
	  //	for (int a = 0; a <= 3; a++)
	  //	{
	  //		for (int b = 1; b >= 0; b--)
	  //		{
	  //			arr_1[i][j] = arr[b][a];
	  //			printf("%d\t", arr_1[i][j]);
	  //			j++;
	  //		}
	  //		printf("\n");
	  //		j = 0;
	  //		i++;
	  //	}
	  //	return 0;
	  //}

	  //int main(void)
	  //{
	  //	int i = 0;
	  //	int j = 0;
	  //
	  //	char arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	  //	char arr_1[3][3] = { 0 , };
	  //
	  //	for (int a = 0; a <= 2; a++)
	  //	{
	  //		for (int b = 2; b >= 0; b--)
	  //		{
	  //			arr_1[i][j] = arr[b][a];
	  //			printf("%d\t", arr_1[i][j]);
	  //			j++;
	  //		}
	  //		printf("\n");
	  //		j = 0;
	  //		i++;
	  //	}
	  //	return 0;
	  //}






/*
 Q.	다음과 같이 배열에 숫자가 채워지도록 프로그램을
	작성하라. ( N x N의 경우로만 작성할 것)
	ex >	3 x 3 의 경우

			1 2 6
			3 5 7
			4 8 9
 */

 /*
  Q.	야구게임
	 세개의 숫자를 입력 받아서 다음과 같이
	 숫자가 있지만 그 위치가 틀렸을 때는 볼을 출력
	 숫자와 위치가 맞으면 스트라이크 출력
	 숫자와 위치가 전부 틀리면 아웃을 출력하는
	 프로그램을 작성하라.
	 무엇이 볼이고 스트라이크 인지는 출력하지 않는다.
	 (주어지는 숫자 또는 입력되는 숫자는 중복 되어선 안된다.)

	 ex> 컴퓨터 2 1 6 <- 보여지면 안됨.
	 1 > 8 3 5	=> OUT
	 2 > 6 5 9	=> 0S 1B
	 3 > 2 6 4	=> 1S 1B
	 4 > 2 1 6	=> 정답
  */

  //#define		_CRT_SECURE_NO_WARNINGS
  //#include	<stdio.h>
  //#include	<stdlib.h>
  //
  //int main(void)
  //{
  //	int ans[3] = { 0, };
  //	int player[3] = { 0, };
  //	int STRIKE = 0;
  //	int BALL = 0;
  //	int random;
  //
  //	while (1) // 중복이 없는 랜덤 난수 만들기
  //	{
  //		ans[0] = rand() % 10;
  //		ans[1] = rand() % 10;
  //		ans[2] = rand() % 10;
  //
  //		if (ans[0] != ans[1] && ans[1] != ans[2] && ans[2] != ans[0])
  //		{
  //			break;
  //		}
  //	}
  //
  //	while (1)
  //	{
  //		printf("숫자 3개를 입력하세요");
  //		scanf("%d%d%d", &player[0], &player[1], &player[2]);
  //
  //		if ((player[0] >= 10 && player[0] <= 0) || (player[1] >= 10 && player[1] <= 0) || player[2] >= 10 && player[2] <= 0)
  //		{
  //			printf("입력되는 수는 한자리 수여야만 합니다");
  //			continue;
  //		}
  //
  //		for (int i = 0; i < 3; i++)
  //		{
  //			if (ans[i] == player[i])
  //			{
  //				STRIKE++;
  //			}
  //			else
  //			{
  //				int j = (i + 1) > 2 ? (i + 1) - 2 : i + 1;
  //				int k = (i + 2) > 2 ? (i + 2) - 2 : i + 2;
  //				if (ans[i] == player[j] || ans[i] == player[k])
  //				{
  //					BALL++;
  //				}
  //			}
  //		}
  //
  //		if (STRIKE + BALL == 0)
  //		{
  //			printf("OUT !!\n\n");
  //		}
  //		else
  //		{
  //			printf("%d STRIKE\t %d BALL\n\n", STRIKE, BALL);
  //			if (STRIKE == 3)
  //			{
  //				printf("\n홈런 !! 정답인 %d%d%d을(를) 맞추셨습니다 !!\n\n", ans[0], ans[1], ans[2]);
  //				break;
  //			}
  //		}
  //		BALL = 0;
  //		STRIKE = 0;
  //	}
  //
  //	return 0;
  //}

//Q.배열에 숫자를 다음과 같은 방법으로 채워지도록
//프로그램을 작성하라.
//시계 방향으로 m xm 의 2차원 배열에 숫자가 채워지도록 한다.
//ex >
//1 2 3
//8 9 4
//7 6 5
//
//#define		_CRT_SECURE_NO_WARNINGS
//#include	<string.h>
//#include	<stdio.h>
//
//
//void rot_func(int* ptr, int n);
//
//int main(void)
//{
//	int n = 4;
//	int arr[4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
//	int* ptr = arr;
//
//	rot_func(ptr, n);
//}
//
//void rot_func(int* ptr, int n)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int arr_2[4][4] = { 0, };
//
//	while (1)
//	{
//		for (i = count; (j <= n - 1 - count) && (j >= count); j++)
//		{
//
//			arr_2[i][j] = *(ptr + count);
//			count++;
//		}
//		for (j = n - count; (i <= n - 1 - count) && (j >= count); i++)
//		{
//			arr_2[i][j] = *(ptr + count);
//			count++;
//		}
//		for (i = n - count; (j >= count + 1) && (j <= n - count); j--)
//		{
//			arr_2[i][j] = *(ptr + count);
//			count++;
//		}
//		for (j = count; (i >= count + 1) && (i <= n - count); i--)
//		{
//			arr_2[i][j] = *(ptr + count);
//			count++;
//		}
//	}
//	for (int a = 0; a < 4; a++)
//	{
//		for (int b = 0; b < 4; b++)
//		{
//			printf("%d\t", arr_2[a][b]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int arr1[4] = { 1, 2, 3, 4 };
//	int arr2[4] = { 11, 12, 13, 14 };
//	int arr3[4] = { 21, 22, 23, 24 };
//	int* pary[3] = { arr1, arr2, arr3 };
//	int i, j;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d\t", &pary[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//	int* pi;
//	int** ppi;
//
//	pi = &a;
//	ppi = &pi;
//
//	printf("------------------------------------\n");
//	printf("변수	변숫값	&연산	*연산	**연산\n");
//	printf("------------------------------------\n");
//	printf("   a%10d%10u\n", a, &a);
//	printf("  pi%10u%10u%10d\n", pi, &pi, *pi);
//	printf(" ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
//	printf("------------------------------------\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//void swap_ptr(char** ppa, char** ppb);
//
//int main(void)
//{
//	char* pa = "success";
//	char* pb = "failure";
//
//	printf("pa -> %d, pb -> %d\n", pa, pb);
//	swap_ptr(&pa, &pb);
//	printf("pa -> %d, pb -> %d\n", pa, pb);
//
//	return 0;
//}
//
//void swap_ptr(char** ppa, char** ppb)
//{
//	char* pt;
//	pt = *ppa;
//	*ppa = *ppb;
//	*ppb = pt;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int arr[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
//	int(*pa)[4];		// int형 변수 4개의 배열을 가리키는 배열 포인터
//
//	pa = arr;
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\t", pa[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

/*
 Q. 다음과 같이 두개의 int형 포인터 변수와
	길이가 5인 int 형 배열을 선언한다.
		int* maxPtr ;
		int* minPtr ;
		int arr[5] ;
	MaxAndMin 이란 함수를 정의하고 이를 호출하여
	위 배열과 두 포인터를 변수로 전달한다.
	이 함수의 호출이 완료 되면, 포인터 변수 maxPtr에는
	가장 큰 값이 저장된 배열 요소의 주소값이,
	minPtr에는 가장 작은 배열 요소의 주소값이 저장되어야 한다.
	( 이중 포인터를 매개변수로 활용할 것)
	결과 출력 >
		arr 주소값과, 최대, 최소의 주소값
		maxPtr, minPtr이 가진 주소에 저장된 값을 출력하라.
 */

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //int MaxAndMin(int** maxPtr, int** minPtr, int* arr[5], int N);
 //
 //int main(void)
 //{
 //	int arr[128];
 //	int N;
 //	int* maxPtr = arr;
 //	int* minPtr = arr;
 //
 //	while (1)
 //	{
 //		printf("몇 개의 배열을 사용하시겠습니까? (최대 100) : ");
 //		scanf("%d", &N);
 //		if (N <= 100 && N > 0)
 //		{
 //			break;
 //		}
 //		else
 //		{
 //			printf("잘못된 숫자를 입력하셨습니다. 다시 입력해주세요\n\n");
 //			continue;
 //		}
 //	}
 //	printf("숫자 %d개를 입력해주세요 : \n=> ", N);
 //	for (int i = 0; i < N; i++)
 //	{
 //		scanf("%d", &arr[i]);
 //	}
 //	MaxAndMin(&maxPtr, &minPtr, arr, N);
 //}
 //
 //int MaxAndMin(int** max, int** min, int* arr, int N)
 //{
 //	for (int i = 0; i < N; i++)
 //	{
 //		*max = **max < arr[i] ? &arr[i] : *max;
 //		*min = **min > arr[i] ? &arr[i] : *min;
 //	}
 //
 //	printf("arr의 주소값 : %d\t\t최대값의 주소값 : %d\t최소값의 주소값 : %d\n", arr, *max, *min);
 //	printf("maxPtr이 가진 값 : %d\tminPtr이 가진 값 : %d\n", **max, **min);
 //}

 //#include <stdio.h>
 //
 //int sum(int, int);
 //
 //int main(void)
 //{
 //	int (*fp)(int, int);
 //	int res;
 //
 //	fp = sum;
 //	res = fp(10, 20);
 //	printf("result : %d\n", res);
 //
 //	return 0;
 //}
 //
 //int sum(int a, int b)
 //{
 //	return (a + b);
 //}

 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //
 //void func(int (*fp)(int, int));			// 함수 포인터를 매개변수로 갖는 함수
 //int sum(int a, int b);					// 두 정수를 더하는 함수
 //int mul(int a, int b);					// 두 정수를 곱하는 함수
 //int max(int a, int b);					// 두 정수 중에 큰 값을 구하는 함수
 //
 //int main(void)
 //{
 //	int sel;							// 선택된 메뉴 번호를 저장할 변수
 //
 //	printf("01 두 정수의 합\n");	// 메뉴 출력
 //	printf("02 두 정수의 곱\n");
 //	printf("03 두 정수 중에서 큰 값 계산\n");
 //	printf("원하는 연산을 선택하세요 : ");
 //	scanf("%d", &sel);			// 메뉴 번호 입력
 //	switch (sel)
 //	{
 //	case 1: func(sum); break;			// 1이면 func에 덧셈 기능 추가
 //	case 2: func(mul); break;			// 2이면 func에 곱셈 기능 추가
 //	case 3: func(max); break;			// 3이면 func에 큰 값 구하는 기능 추가
 //	}
 //
 //	return 0;
 //}
 //
 //void func(int (*fp)(int, int))
 //{
 //	int a, b;							// 두 정수를 저장할 변수
 //	int res;							// 함수의 반환값을 저장할 변수
 //
 //	printf("두 정수의 값을 입력하세요 : ");
 //	scanf("%d%d", &a, &b);		// 두 정수 입력
 //	res = fp(a, b);
 //	printf("결과값은 : %d\n", res);	// 반환 값 출력
 //}
 //
 //int sum(int a, int b)					// 덧셈 함수
 //{
 //	return (a + b);
 //}
 //
 //int mul(int a, int b)					// 곱셈 함수
 //{
 //	return (a * b);
 //}
 //
 //int max(int a, int b)					// 큰 값을 구하는 함수
 //{
 //	if (a > b)
 //	{
 //		return 0;
 //	}
 //	else
 //	{
 //		return b;
 //	}
 //}


 //#define		_CRT_SECURE_NO_WARNINGS
 //#include	<stdio.h>
 //#include	<string.h>
 //
 //void swap(char* str, void* a, void* b);
 //
 //int main(void)
 //{
 //	int f_Age = 0;
 //	int s_Age = 0;
 //	double f_Height = 0;
 //	double s_Height = 0;
 //
 //	printf("첫 번째 사람의 나이와 키 입력 : ");
 //	scanf(" %d%lf", &f_Age, &f_Height);
 //	printf("두 번째 사람의 나이와 키 입력 : ");
 //	scanf(" %d%lf", &s_Age, &s_Height);
 //
 //	swap("int", &f_Age, &s_Age);
 //	swap("double", &f_Height, &s_Height);
 //
 //	printf("첫 번째 사람의 나이와 키 : %d살, %.1lfcm\n", f_Age, f_Height);
 //	printf("두 번째 사람의 나이와 키 : %d살, %.1lfcm\n", s_Age, s_Height);
 //}
 //
 //void swap(char* str, void* a, void* b)
 //{
 //	if (str == "int")
 //	{
 //		int temp = *(int*)a;
 //		*(int*)a = *(int*)b;
 //		*(int*)b = temp;
 //	}
 //	if (str == "double")
 //	{
 //		double temp = *(double*)a;
 //		*(double*)a = *(double*)b;
 //		*(double*)b = temp;
 //	}
 //}

 //#include <stdio.h>
 //#include <stdlib.h>
 //
 //int main(void)
 //{
 //	int* pi;
 //	double* pd;
 //
 //	pi = (int*)malloc(sizeof(int));
 //	if (pi == NULL)
 //	{
 //		printf("# 메모리가 부족합니다.\n");
 //		exit(1);
 //	}
 //	pd = (double*)malloc(sizeof(double));
 //
 //	*pi = 10;
 //	*pd = 3.4;
 //
 //	printf("정수형으로 사용 : %d\n", *pi);
 //	printf("실수형으로 사용 : %.1lf\n", *pd);
 //
 //	free(pi);
 //	free(pd);
 //
 //	return 0;
 //}

 /*
  Q. 사용자로부터 문자열을 입력 받아서 단어를 역으로 출력하는
	 프로그램을 작성하라.
	 ("Quit"가 입력될 때 까지 반복 되도록 한다.)
	 입력 > I am happy
	 출력 > happy am I

	 (메모리 할당, 내용 복사 연습)

	 sprintf 사용 X
  */


  //#define		_CRT_SECURE_NO_WARNINGS
  //#include	<stdio.h>
  //#include	<stdlib.h>
  //
  //int main(void)
  //{
  //	int num = 0;
  //	printf("> 양수 입력 : ");
  //	scanf(" %d", &num);
  //
  //	int* pi;
  //	pi = (int*)calloc(num, sizeof(int));	// 동적 할당 및 초기화
  //
  //	if (pi == NULL)
  //	{
  //		printf("# 메모리가 부족합니다.\n");
  //		exit(1);
  //	}
  //
  //	for (int i = 2; i < num; i++)					// 소수이면 해당 인덱스에 -1 삽입
  //	{
  //		for (int j = 2; j < i; j++)
  //		{
  //			if (i % j == 0)
  //			{
  //				pi[i] = -1;
  //				break;
  //			}
  //		}
  //		if (pi[i] != -1)							// 소수가 아니면 해당 값 삽입
  //		{
  //			pi[i] = i;
  //		}
  //	}
  //
  //	printf("\n");
  //
  //	for (int i = 2; i < num; i++)
  //	{
  //		if (pi[i] == -1)							// 소수면 X 출력
  //		{
  //			printf("%5c", 'X');
  //		}
  //		else										// 소수가 아니면 해당 값 출력
  //		{
  //			printf("%5d", pi[i]);
  //		}
  //		if ((i - 1) % 5 == 0)						// 5개 출력했을시 줄바꿈
  //		{
  //			printf("\n");
  //		}
  //	}
  //	printf("\n");
  //
  //	free(pi);										// 동적 메모리 해제
  //
  //	return 0;
  //}

  //#include <stdio.h>
  //
  //typedef struct student						//구조체 선언
  //{
  //	int num;
  //	double grade;
  //} Student;
  //
  //int main(void)
  //{
  //	Student s1;
  //
  //	s1.num = 2;
  //	s1.grade = 2.7;
  //	printf("학번 : %d\n", s1.num);
  //	printf("학점 : %.1lf\n", s1.grade);
  //
  //	return 0;
  //}

  //#define		_CRT_SECURE_NO_WARNINGS
  //#include <stdio.h>
  //#include <stdlib.h>
  //#include <string.h>
  //
  //typedef struct profile
  //{
  //	char name[20];
  //	int age;
  //	double height;
  //	char* intro;
  //} Profile;
  //
  //int main(void)
  //{
  //	Profile yuni;
  //
  //	strcpy(yuni.name, "서하윤");
  //	yuni.age = 17;
  //	yuni.height = 164.5;
  //
  //	yuni.intro = (char*)malloc(80);
  //	printf("자기소개 : ");
  //	gets(yuni.intro);
  //
  //	printf("이름 : %s\n", yuni.name);
  //	printf("나이 : %d\n", yuni.age);
  //	printf("키 : %.1lf\n", yuni.height);
  //	printf("자기소개 : %s\n", yuni.intro);
  //	free(yuni.intro);
  //
  //	return 0;

  //#define		_CRT_SECURE_NO_WARNINGS
  //#include	<stdio.h>
  //
  //typedef struct vision
  //{
  //	double left;
  //	double right;
  //} Vision;
  //
  //Vision exchange(Vision robot);
  //
  //int main(Void)
  //{
  //	Vision robot;
  //
  //	printf("시력 입력 : ");
  //	scanf(" %lf%lf", &(robot.left), &(robot.right));
  //	robot = exchange(robot);
  //	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);
  //
  //	return 0;
  //}
  //
  //Vision exchange(Vision robot)
  //{
  //	double temp;
  //
  //	temp = robot.left;
  //	robot.left = robot.right;
  //	robot.right = temp;
  //
  //	return robot;
  //}

  //#define		_CRT_SECURE_NO_WARNINGS
  //#include <stdio.h>
  //
  //typedef struct score
  //{
  //	int kor;
  //	int eng;
  //	int math;
  //} Score;
  //
  //int main(void)
  //{
  //	Score yuni = { 90, 80, 70 };
  //	Score* ps = &yuni;
  //
  //	printf("국어 : %d\n", (*ps).kor);
  //	printf("영어 : %d\n", ps->eng);
  //	printf("수학 : %d\n", ps->math);
  //
  //	return 0;
  //}

  //#define		_CRT_SECURE_NO_WARNINGS
  //#include <stdio.h>
  //
  //typedef struct address
  //{
  //	char name[20];
  //	int age;
  //	char tel[20];
  //	char addr[80];
  //} Address;
  //
  //void print_list(Address* lp);
  //
  //int main(void)
  //{
  //	Address list[5] = {
  //		{"홍길동", 23, "111-1111", "울릉도 독도"},
  //		{"이순신", 35, "222-2222", "서울 건천동"},
  //		{"장보고", 19, "333-3333", "완도 청해진"},
  //		{"유관순", 15, "444-4444", "충남 천안"},
  //		{"안중근", 45, "555-5555", "황해도 해주"}
  //	};
  //
  //	print_list(list);
  //
  //	return 0;
  //}
  //
  //void print_list(Address* lp)
  //{
  //	int i;
  //
  //	for (i = 0; i < 5; i++)
  //	{
  //		printf("%10s%5d%15s%20s\n",
  //			(lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
  //	}
  //}

  //#define		_CRT_SECURE_NO_WARNINGS
  //#include <stdio.h>
  //
  //typedef struct list									// 자기 참조 구조체
  //{
  //	int num;										// 데이터를 저장하는 멤버
  //	struct list* next;								// 구조체 자신을 가리키는 포인터 멤버
  //} List;
  //
  //int main(void)
  //{
  //	List a = { 10, 0 }, b = { 20, 0 }, c = { 30,0 };	// 구조체 변수 초기화
  //	List* head = &a, * current;						// 헤드 포인터 초기화
  //
  //	a.next = &b;									// a의 포인터 멤버가 b를 가리킴
  //	b.next = &c;									// b의 포인터 멤버가 a를 가리킴
  //
  //	printf("head->num : %d\n", head->num);	// head가 가리키는 a의 num 멤버 사용
  //	printf("head->next->num : %d\n", head->next->num);	// head로 b의 num 멤버 사용
  //
  //	printf("list all : ");
  //	current = head;
  //	while (current != NULL)
  //	{
  //		printf("%d  ", current->num);
  //		current = current->next;
  //	}
  //	printf("\n");
  //
  //	return 0;
  //}

  /*
	  Q. 학번, 이름, 학점(국/영/수)을 입력 받을 수
	  있는 구조체를 만들고 임의 수의 학생에 대한
	  데이터를 입력 받아 출력하는 코드를 작성하라.
	  학점 순으로 정렬하여 출력하도록 한다.
	  - 다음 4개의 메뉴를 구성하고, 각 메뉴 선택시
	  작동은 다음과 같다.
	  1. 입력 - 학번, 이름, 성적 순으로 입력
	  2. 출력 - 성적에 따라 정렬된 형태로 출력
	  3. 검색 - 이름으로 해당 학생의 학점, 성적을 출력
	  4. 종료
	  단,
		  1. 번호 중복 불가, 이름은 중복 가능
		  2. 검색-> 이름검색으로 하고 먼저 찾은 것을 우선으로 출력
	  참고사항
		  1. 메모리 할당 사용, 자기 참조 구조체 활용, 입력/출력/검색은 각각
		  개별 함수로 구현한다.
   */

   //#define		_CRT_SECURE_NO_WARNINGS
   //#include	<stdio.h>
   //#include	<stdlib.h>
   //#include	<string.h>
   //
   //#define		MaxStudent 5
   //#define		MaxBuffer 255
   //
   //enum Subject { Kor = 0, Eng, Math, SUBEND};
   //
   //typedef struct student
   //{
   //	char	chName[20];
   //	char	chGrade;
   //	int		iID;
   //	int		iScore[SUBEND];
   //	int		iTotal;
   //	double	dScoreEver;
   //} Student;
   //
   //int CheckID(Student** pstu, int stunum, int iID);
   //void InputInfo(Student** pstu, int stunum);
   //void MakeTotEver(Student** pstu, int stunum);
   //void SortWithGrade(Student** pstu, int stunum);
   //void SearchWithName(Student** pstu, int stunum);
   //void PrintStudentGrade(Student** pstu, int stunum);
   //
   //int	main(void)
   //{
   //	system("cls");
   //
   //	Student* pStudent;
   //
   //	int iStudentCnt = 0;
   //	int iExit = 0;
   //
   //	pStudent = (Student*)malloc(sizeof(Student) * MaxStudent);
   //
   //	if (pStudent == NULL)
   //	{
   //		printf("메모리가 부족합니다.");
   //		exit(1);
   //	}
   //	memset(pStudent, 0, sizeof(Student) * MaxStudent);
   //
   //	while (iExit == 0)
   //	{
   //		int iCase = 0;
   //
   //		printf("1. 입력, 2. 출력, 3. 검색, 4. 종료 \n");
   //		scanf(" %d", &iCase);
   //
   //		switch (iCase)
   //		{
   //		case 1://입력
   //			Student * pTemp = pStudent;
   //			pStudent = (Student*)realloc(pStudent, sizeof(Student) * (++iStudentCnt));
   //			if (pStudent == NULL)
   //			{
   //				free(pTemp);
   //				exit(1);
   //			}
   //
   //			if (iStudentCnt > 1)
   //			{
   //				memset(pStudent + (iStudentCnt - 1), 0, sizeof(Student));
   //			}
   //
   //			InputInfo(&pStudent, iStudentCnt);
   //			MakeTotEver(&pStudent, iStudentCnt);
   //			SortWithGrade(&pStudent, iStudentCnt);
   //			break;
   //		case 2://출력
   //			PrintStudentGrade(&pStudent, iStudentCnt);
   //			break;
   //		case 3://검색
   //			SearchWithName(&pStudent, iStudentCnt);
   //			break;
   //		case 4:
   //			iExit = 1;
   //			break;
   //		}
   //
   //		if (iExit)
   //		{
   //			continue;
   //		}
   //
   //		system("pause");
   //		system("cls");
   //	}
   //
   //	free(pStudent);
   //
   //	return 0;
   //}
   //
   //int	CheckID(Student** pstu, int stunum, int iID)
   //{
   //	for (int i = 0; i < stunum; ++i)
   //	{
   //		if ((*pstu + i)->iID == iID)
   //		{
   //			return 1;
   //		}
   //	}
   //
   //	return 0;
   //}
   //
   //void InputInfo(Student** pstu, int stunum)
   //{
   //	for (int i = 0; i < stunum; ++i)
   //	{
   //		if (strcmp((*pstu + i)->chName, ""))
   //		{
   //			continue;
   //		}
   //
   //		char chNameTemp[MaxBuffer];
   //		printf("학번 : ");
   //		scanf("%d", &((*pstu + i)->iID));
   //
   //		if (CheckID(pstu, stunum, ((*pstu + i)->iID)))
   //		{
   //			printf("\t!!!!!중복 학번!!!!!\n");
   //			printf("다시 입력 바랍니다.\n\n");
   //			system("pause");
   //
   //			continue;
   //		}
   //
   //		printf("이름 : ");
   //		scanf("%s", chNameTemp);
   //		strcpy((*(pstu + i))->chName, chNameTemp);
   //
   //		printf("국어, 영어, 수학점수 : ");
   //		for (int j = 0; j < SUBEND; ++j)
   //		{
   //			scanf("%d", &((*pstu + i)->iScore[j]));
   //		}
   //	}
   //}
   //
   //void MakeTotEver(Student** pstu, int stunum)
   //{
   //	for (int i = 0; i < stunum; ++i)
   //	{
   //		(*pstu + i)->iTotal =
   //			(*pstu + i)->iScore[Kor] + (*pstu + i)->iScore[Eng] + (*pstu + i)->iScore[Math];
   //		(*pstu + i)->dScoreEver = (double)((*pstu + i)->iTotal) / SUBEND;
   //
   //		if ((*pstu + i)->dScoreEver >= 90.0)
   //			(*pstu + i)->chGrade = 'A';
   //		else if ((*pstu + i)->dScoreEver >= 80.0)
   //			(*pstu + i)->chGrade = 'B';
   //		else if ((*pstu + i)->dScoreEver >= 70.0)
   //			(*pstu + i)->chGrade = 'C';
   //		else
   //			(*pstu + i)->chGrade = 'F';
   //	}
   //}
   //
   //void SortWithGrade(Student** pstu, int stunum)
   //{
   //	for (int i = 0; i < stunum; ++i)
   //	{
   //		for (int j = i + 1; j < stunum; ++j)
   //		{
   //			if (j == stunum)
   //				break;
   //
   //			if ((*pstu + i)->dScoreEver > (*pstu + j)->dScoreEver)
   //			{
   //				Student Temp = *(*(pstu + i));
   //				*(*(pstu + i)) = *(*(pstu + j));
   //				*(*(pstu + j)) = Temp;
   //
   //				i = 0;
   //			}
   //		}
   //	}
   //}
   //
   //void PrintStudentGrade(Student** pstu, int stunum)
   //{
   //	for (int i = 0; i < stunum; ++i)
   //	{
   //		printf("%d\t%s\t%d\t%d\t%d\t%d\t%.1lf\t%c\n",
   //			(*pstu + i)->iID, (*pstu + i)->chName,
   //			(*pstu + i)->iScore[Kor], (*pstu + i)->iScore[Eng], (*pstu + i)->iScore[Math],
   //			(*pstu + i)->iTotal, (*pstu + i)->dScoreEver,
   //			(*pstu + i)->chGrade);
   //	}
   //}
   //
   //void SearchWithName(Student** pstu, int stunum)
   //{
   //	char TempSearch[MaxBuffer];
   //	printf("찾을 이름 입력 : ");
   //	scanf("%s", TempSearch);
   //	printf("\n");
   //	for (int i = 0; i < stunum; ++i)
   //	{
   //		if(!strcmp((*pstu + i)->chName, TempSearch))
   //		{
   //			printf("%d\t%s\t%d\t%d\t%d\t%d\t%.1lf\t%c\n",
   //				(*pstu + i)->iID, (*pstu + i)->chName,
   //				(*pstu + i)->iScore[Kor], (*pstu + i)->iScore[Eng], (*pstu + i)->iScore[Math],
   //				(*pstu + i)->iTotal, (*pstu + i)->dScoreEver,
   //				(*pstu + i)->chGrade);
   //		}
   //	}
   //}

   //#include <stdio.h>
   //#include <stdlib.h>
   //#include <crtdbg.h>
   //
   //int main(int argc, char** argv)
   //{
   //	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF || _CRTDBG_LEAK_CHECK_DF);
   //
   //	int* arr = NULL;
   //	arr = (int*)malloc(sizeof(int) * 4);
   //
   //	free(arr);
   //	_CrtDumpMemoryLeaks();
   //
   //	return 0;
   //}

//#define		_CRT_SECURE_NO_WARNINGS
//#include	<stdio.h>
//#include	<stdlib.h>
//
//int main(int argc, char** argv)
//{
//	FILE* fp;
//	FILE* fpw;
//
//
//	fp = fopen("a.txt", "wb");
//	fpw = fopen("b.txt", "wb");
//
//
//	if (fp == NULL)
//	{
//		// : 파일 오픈 실패
//		printf("file open - failure");
//		exit(0);
//	}
//
//	if (fpw == NULL)
//	{
//		// : 파일 오픈 실패
//		printf("file open - failure");
//		exit(0);
//	}
//
//	// : to do something
//
//	for (int i = 0; i < 5; i++)
//	{
//		fputc(arr[i] )
//	}
//	printf("file open - success\n");
//
//	int ch;
//	while (1)
//	{
//		ch = fgetc(fp);
//		if (ch == EOF)
//		{
//			break;
//		}
//		putchar(ch);
//		fputc(ch, fpw);
//	}
//
//	fputc(ch, fp);
//
//	fclose(fp);
//	printf("\n");
//
//	return 0;
//}

//#define		_CRT_SECURE_NO_WARNINGS
//#include	<stdio.h>
//#include	<stdlib.h>
//
//int main(void)
//{
//	FILE* ifp, * ofp;
//	char name[20];
//	int kor, eng, math;
//	int total;
//	double avg;
//	int res;
//
//	ifp = fopen("a.txt", "r");
//	if (ifp == NULL)
//	{
//		printf("입력 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");
//	if (ofp == NULL)
//	{
//		printf("출력 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
//		if (res == EOF)
//		{
//			break;
//		}
//		total = kor + eng + math;	// 총점 계산
//		avg = total / 3.0;			// 평균 계산
//		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);	// 이름, 총점, 평균 출력
//		fprintf(stdout, "%s%5d%7.1lf\n", name, total, avg);
//	}
//
//	fclose(ifp);
//	fclose(ofp);
//
//	return 0;
//}

//#define		_CRT_SECURE_NO_WARNINGS
//#include	<stdio.h>
//#include	<string.h>
//
//int main(void)
//{
//	FILE* afp, * bfp, * cfp;
//	char a_animal[10][20] = { 0 };
//	char b_animal[10][20] = { 0 };
//	int res_a = 0;
//	int res_b = 0;
//	//int row_count_a = sizeof(a_animal) / sizeof(a_animal[0]);
//	int row_count_b = sizeof(b_animal) / sizeof(b_animal[0]);
//
//
//	afp = fopen("a.txt", "r");
//	if (afp == NULL)
//	{
//		printf("파일이 열리지 않았습니다.\n");
//		return 1;
//	}
//
//	bfp = fopen("b.txt", "r");
//	if (bfp == NULL)
//	{
//		printf("파일이 열리지 않았습니다.\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		int i = 0;
//		res_a = fscanf(afp, "%s", a_animal[i++]);
//		if (res_a == EOF)
//		{
//			break;
//		}
//	}
//
//	while (1)
//	{
//		int j = 0;
//		res_b = fscanf(bfp, "%s", b_animal[j++]);
//		if (res_b == EOF)
//		{
//			break;
//		}
//	}
//}

	/* (int i = 0; i <
	{
		if (strcmp(b_animal, a_animal) != 0)
		{
			printf("%s", b_animal);
		}
	}
}*/


/*
Q1. 99.txt 파일을 만들고, 여기에 구구단을 저장하도록
	한다. 그리고 fseek() 이용 원하는 구구단의 내용만
	찾아서 출력하는 프로그램을 작성하라.
	ex>	몇 단 ? 2
		2 단
		=================================
		2 x 1 = 2
		....
		2 x 9 = 18
		=================================

Q2. 파일 복사 프로그램 만들기.
	복사할 파일명과 복사 후 생성되는 파일명을 입력받아서
	파일의 내용을 복사하는 프로그램 작성.
	단, txt 파일 뿐만 아니라 이미지 파일 등.. 모든 종류의
	파일에 다 동일하게 적용할 수 있어야 한다.
	복사 진행 과정을 백분율로 화면에 표시해주도록 하고,
	한번에 4바이트씩 복사하도록 한다.
	ex>
		원본 파일 : source.txt
		대상 파일 : dest.txt


 */

#include <Windows.h>
#include <conio.h>
#include <math.h>

 //
#include <stdlib.h>
#include <crtdbg.h>

#pragma comment(lib, "lib/LibTest.lib")
extern void lib_TextOut();

#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

int main(void)
{
	lib_TextOut();

	PlaySound(TEXT("Test.wav"), NULL, SND_ASYNC);

	int c = _getch();

	return 0;
}