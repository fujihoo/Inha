//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>

/*
	�ۼ��� : ȫ�浿
	���� : �⺻ �ڵ� ����
 */

 // : �ۼ��� - ȫ�浿, ���� - main �Լ� ����

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
 //	printf("�л�%s ���̴� %d �Դϴ�", "AAA", 27);
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
 //	printf("���� a�� �� : %d\n", a);
 //	printf("���� b�� �� : %d\n", b);
 //	printf("���� c�� �� : %d\n", c);
 //	printf("���� dA�� �� : %.1lf\n", dA);
 //	printf("���� cA�� �� : %c\n", cA);
 //}

 //int main(void)
 //{
 //	int in = 2147483647;
 //	long ln = 2147483647;
 //
 //	printf("int�� ���� ��� : %d\n", in);
 //	printf("long�� ���� ��� : % ld\n",ln);
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
 //	printf("���� �Է�: ");
 //	scanf("%d", &a);
 //
 //	printf("�Էµ� �� : %d\n", a);
 //	*/
 //	/*int age;
 //	double height;
 //
 //	printf("���̿� Ű�� �Է��ϼ��� : ");
 //	scanf("%d %lf", &age, &height);
 //	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�\n", age, height);
 //
 //	return 0;*/
 //
 //	/*char grade;
 //	char name[20];
 //
 //	printf("���� �Է� : ");
 //	scanf("%c", &grade);
 //	printf("�̸� �Է� : ");
 //	scanf("%s", name);
 //	printf("%s�� ������ %c�Դϴ�.\n", name, grade);
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
 //	printf("�ʱ갪 a = %d, b = %d\n", a, b);
 //	printf("������: (++a) * 3 = %d, ������: (b++) * 3 = %d\n", pre, post);
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
 //	printf("���̸� �Է��Ͻÿ� : ");
 //	scanf("%d", &age);
 //	printf("%d�� %d���Դϴ�.", age, (age/10)*10);
 //
 //	return 0;*/
 //
 //	/*int Human_Life_min = 100 * 365 * 24 * 60;
 //	int N;
 //	int M;
 //	int loss_age;
 //	int Expected_age;
 //
 //	printf("��Ⱓ �Ϸ翡 ��Ǿ� ��踦 �ǿ�����?");
 //	scanf("%d%d", &N, &M);
 //	loss_age = N * M * 365 * 220;
 //	Expected_age = Human_Life_min - N * M * 365 * 220;
 //	printf("�پ�� ���� : %d�� %d�� %d��\n",
 //		((loss_age / 60) / 24), (loss_age / 60) % 24, loss_age % 60);
 //	printf("��� ���� : %d�� %d�� %d�� %d��\n",
 //		(((Expected_age / 60) / 24) / 365), (((Expected_age / 60) / 24) % 365), (Expected_age / 60 % 24), Expected_age % 60);
 //
 //	return 0;*/
 //
 //
 //	//int a = 20, b = 3;
 //	//double res;
 //
 //	//res = ((double)a) / ((double)b);	// (double)�� ����� a�� b�� ���� �Ǽ��� ��ȯ
 //	//printf("a = %d, b = %d\n", a, b);
 //	//printf("a / b�� ��� : %.1lf\n", res);
 //
 //	//a = (int)res;						// (int)�� ����� res�� ������ ���� �κи� �߸�
 //	//printf("(int) %.1lf�� ��� : %d\n", res, a);
 //
 //	//return 0;
 //	/*int a = 10, b = 20, res;
 //
 //	res = (a > b) ? a : b;
 //	printf("ū�� : %d\n", res);
 //
 //	return 0;*/
 //
 //	/*Q3. ����ڷκ��� ���� 3���� �Է¹޾� �����ϰ�
 //�̵� ���� �� ���� ū ���� ����ϴ� ���α׷��� �ۼ��϶�.*/

 //int main(void)
 //{
	 /*int a;
	 int b;
	 int c;
	 int res1;
	 int res2;
	 int res3;

	 printf("a, b, c ���� �Է��ض�");
	 scanf("%d%d%d", &a, &b, &c);

	 res1 = (a > b) ? a : b;
	 res2 = (b > c) ? b : c;
	 res3 = (res1 > res2) ? res1 : res2;

	 printf("�ִ밪�� %d�Դϴ�.", res3);

	 return 0;*/

	 //05-1 if ��
	 //int a = 0;
	 //scanf("%d", &a);
	 //if( a % 2 )				// : �������� ���� ��
	 //{
	 //	printf("�Էµ� �� %d Ȧ���Դϴ�.\n", a);

	 //}

	 //if(!(a % 2))
	 //{
	 //	printf("�Էµ� �� %d ¦���Դϴ�.\n", a);
	 //}

	 //{
	 //	int a = 20;
	 //	int b = 0;
	 //	printf("����\n");

	 //	if (a > 10)
	 //	{
	 //		b = a;
	 //	}

	 //	printf("a : %d, b : %d\n", a, b);
	 //}

	 //Q. �ΰ��� ������ �Է� �޾� �� ���� ���� ����ϴ�
	 //���α׷��� �ۼ��϶�.
	 //��, ������ ū �� ���� ���� ���� ���� �Ѵ�.
	 //	ex) 12 5 -> 7
	 //		4 16 -> 12

	 //	case 1. if ~ else ���� �̿��ؼ� �ۼ�
	 //	case 2. ���ǿ����ڸ� �̿��ؼ� �ۼ�

 //}

 //#define _CRT_SECURE_NO_WARNINGS
 //#include <stdio.h>

 //int main(void)
 //{
 //	int a;
 //	int b;
 //
 //	printf("���� a,b ���� �Է��Ͻÿ�.");
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
 //		printf("������ �Է��Ͻÿ� : ");
 //		scanf("%d", &a);
 //		if (a <= 0)
 //			break;
 //		if (a % 2)
 //			printf("Ȧ��\n");
 //		else
 //			printf("¦��\n");
 //	}
 //
 //	for (int i = 0; i < 3; i++)
 //	{
 //		printf("i : %d\n", i);
 //	}
 //
 //	return 0;
 //}

 //Q. � �ڿ����� �Է¹޾� ���丮���� ���ϴ� ���α׷��� �ۼ��϶�.
 //int main(void)
 //{
 //	int a;
 //	printf("�ڿ����� �Է��ϼ���");
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

 //Q.	�� ���� �Է¹޾� �� �� ���̿� �����ϴ� ������ ����
 //	���ϴ� ���α׷��� �ۼ��϶�.
 //	ex) 3 5
 //		3 + 4 + 5 => 12

 //

 //Q.	����ڷκ��� ���� ���� m�� n�� �Է¹޾�
 //	n�� ��ŭ m�� ����� ����ϴ� ���α׷��� �ۼ�
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
 //	printf("m�� n�� �Է��ϼ���");
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

 //Q. ����ڷκ��� ��� ������ �Է¹޾� �� ���� ��� ���� ������.
 //����ڰ� 0�� �Է��� ������ ��� �Ǿ�� �ϸ�, 0�� �ԷµǸ�
 //�Էµ� ��� ������ ���� ����Ѵ�.

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
 //		printf("���� ������ �Է�");
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

 //Q. 1 �̻� 100 �̸��� ���� m�� n�� ����� ����ϴ�
 //���α׷��� �ۼ��϶�.
 //��, m�� ��� �̸鼭 n�� ����� ������ �ѹ���
 //����ؾ� �Ѵ�.
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
 //	printf("a, b�� ���� �Է��ϼ���");
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
 //	printf("�� ���� a, b ���� �Է��ϼ���.");
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

 //Q. ������ n�� �Է� �޾Ƽ� ������ ���� ���·� ���
 //ex) n = 5�� ���(���� �ٸ� �ΰ��� ���α׷���)
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
 //	printf("������ n�� �Է��Ͻÿ�.");
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

 //Q1. ������ ���� �ǵ��� �������� ����Ͽ���.
 //���ϴ� �� n�� �Է� �޾� n�� ���� ���
 //
 //ex) n = 6
 //
 //			��	��	��
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
 //	printf("���ϴ� ���� �Է��Ͻÿ� : ");
 //	scanf("%d", &n);
 //	printf("\t��\t��\t��\t\n");
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





 //Q.���� �� n�� �Է� �޾Ƽ� ������ ���� ���·� ����Ͻÿ�.
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
 //Q.���� �� n�� �Է� �޾Ƽ� ������ ���� ���·� ����Ͻÿ�.
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
 //	printf("��ȯ�� : %d\n", result);
 //	return 0;
 //}
 //
 //int get_num(void)
 //{
 //	int num;
 //
 //	printf("��� �Է� : ");
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
//	printf("2 �̻��� ���� �Է� : ");
//	scanf("%d", &num);
//	while (num < 2)
//	{
//		printf("2�̻��� ������ �Է��ϼ���!\n");
//		printf("�Է� : ");
//		scanf("%d", &num);
//	}
//	return num;
//}
//
//int is_prime_number(int a) // �Ҽ� �Ǻ� �Լ�
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
//int print_prime_number(int b) // �Ҽ� ��� �Լ�
//{
//	int count = 0;
//	for (int i = 2; i <= b; i++)
//	{
//		if (is_prime_number(i))
//		{
//			if (count == 5) // �� ���� �� ���
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
 2022.04.26(ȭ)
 Q1. p.206 ���� ���� ���� .. ���ȣ�� �̿��ؼ�

#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rec(int n);

int main(void)
{
	int a = 0;

	printf("�ڿ��� n�� �Է��Ͻÿ�\n");
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
 Q2. �Է¹޴� ���� ���밪�� ���ϴ� �Լ� abs()�� �����϶�
 ex>
 �����϶�� 0�� �Է��Ͻÿ�.
 ���� �Է� : -34
 ���� ���� : 34
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
 //		printf("���� n�� �Է��Ͻÿ�, 0 �Է½� ���� :");
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
 Q3. ������ �Ѹ����� �Ѵ��� ������ ��� �ǰ�
	 �ٽ� �Ѵ��� ������ ������ ���´�.
	 ���� �¾ ������ ���� �Ѵ��� ������
	 ��� �ǰ�, �ٽ� �Ѵ� �ĺ��� ������ ���� �ٰ� �� ��,
	 �����̰� �Ŵ� ������ ������ 1���� ��ü
	 �������� ���� ������ �� �� �ֵ��� ���α׷���
	 �ۼ��϶�.
	 (���� 1. �����̴� �ڿ���ü�̴�.
	  ���� 2. �����̰� 1�� ���� �������� ����.)
  */

  //#define		_CRT_SECURE_NO_WARNINGS
  //#include <stdio.h>
  //
  //int fibo_rec(int n);
  //
  //int main(void)
  //{
  //	int n = 1;
  //	printf("�� ���� ������? : ");
  //	scanf("%d", &n);
  //	if (n >= 0)
  //	{
  //		printf("������ : %d����\n", fibo_rec(n + 1));
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
//		printf("���ϴ� ������ �����Ͻÿ�\n");
//		printf("(1:����, 2:�E��, 3:����, 4:������, 0:����)\n");
//		scanf("%d", &i);
//		if (i == 0)
//		{
//			return 0;
//		}
//		if (i < 0 || i > 4)
//		{
//			printf("0�� 4���� ���� �Է��ϼ���!\n\n");
//			continue;
//		}
//		printf("�� ������ �Է��Ͻÿ�\n");
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
//		printf("""����"" ����� %d �Դϴ�,\n\n", cal);
//	}
//	else if (i == 2)
//	{
//		cal = a - b;
//		printf("""�E��"" ����� %d �Դϴ�.\n\n", cal);
//	}
//	else if (i == 3)
//	{
//		cal = a * b;
//		printf("""����"" ����� %d �Դϴ�.\n\n", cal);
//	}
//	else if (i == 4)
//	{
//		cal = a / b;
//		printf("""������"" ����� %d �Դϴ�.\n\n", cal);
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
//	printf("n ���� �Է��ϼ��� : ");
//	scanf("%d", &n);
//
//	print_dot(n);
//
//	return 0;
//}
//
////����������� ��� �ϱ�
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
//	printf("n ���� �Է��ϼ��� : ");
//	scanf("%d", &n);
//
//	print_dot(n);
//
//	return 0;
//}
//
////X������� ��� �ϱ�
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

	printf("��� : %.1lf\n", avg);

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
	//	printf("��� : %.1lf\n", avg);
	//
	//	return 0;
	//}

	/*
	 Q. ���̰� 5�� int�� �迭�� �����ϰ� ����ڷκ��� 5���� ������
		�Է¹ް� ������ ������ ����ϴ� ���α׷��� �ۼ��϶�.
		1. �Էµ� ������ �ִ밪
		2. �Էµ� ������ �ּҰ�
		3. �Էµ� �������� ����

		���� : min/max�� �ʱⰪ ����, ÷�ڰ� �迭�� ũ�⸦ ���� �ʵ��� �Ѵ�.
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
	 //	printf("���ڿ� �Է� : ");	// �Է� �ȳ� �޽��� ���
	 //	gets(str);						// ��ĭ�� ������ ���ڿ� �Է�
	 //	puts("�Էµ� ���ڿ� : ");	//���ڿ� ��� ���
	 //	puts(str);		//�迭�� ����� ���ڿ� ���
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

	 //Q. p232 ��ҹ��� ��ȯ ���α׷�.
	 //	�޴� : 1. �빮�ڷ� ��ȯ, 2. �ҹ��ڷ� ��ȯ
	 //	1 �Է� > Be Happy!
	 //	2 ��� > BE HAPPY!
	 //
	 //	1 �Է� > Be Happy!
	 //	2 ��� > be happy!

	 //#define		_CRT_SECURE_NO_WARNINGS
	 //#include	<stdio.h>
	 //
	 //int	main(void)
	 //{
	 //	char str[80] = { 0 };
	 //	int n;
	 //
	 //	printf("1 �Է� : �빮�� ��ȯ\n2 �Է� : �ҹ��� ��ȯ\n");
	 //	scanf("%d", &n);
	 //	printf("���ڿ� �Է� : \n");
	 //	getchar();
	 //	//scanf("%*c"); ��ü ����
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
	 Q. ���� ���� �����ϴ� ��� A�� Z�� ���ϴ� ���α׷��� �ۼ��϶�.
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
	 //		printf("�� ���� �����ϴ� A, Z�� ����ϰڽ��ϴ�.\nN�� �Է��Ͻÿ�. (��, n�� ������ 0���� 9���� �Դϴ�.) : ");
	 //		scanf("%d", &n);
	 //		if (n >= 10 || n < 0)
	 //		{
	 //			printf("\n�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���\n\n");
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
//	printf("�����ǿ� ǥ���� ���ڿ��� �Է��Ͻÿ� : \n");
//	printf(">> ");
//	gets(str);
//	count = strlen(str);
//
//	while (1)
//	{
//		temp = _getch();
//		system("cls");
//		puts("�����ǿ� ǥ���� ���ڿ��� �Է��Ͻÿ�\n��, esc �Է½� ����");
//		printf(">> ");
//		if (temp == 27) //esc �Է½� ����.
//		{
//			break;
//		}
//		
//		printf("Hello");
//		Sleep(300);	//�и��� ������ ���(1000�и��� -> 1��)
//		system("cls");	//ȭ�鿡 ������ �����.
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
//	printf("���α׷� ����\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 15, total;	// ���� ����� �ʱ�ȭ
//	double avg;					// ����� ������ ����
//	int* pa;					// ������ ����
//	int* pb;					// ������ ����
//	int* pt = &total;			// ������ ����� �ʱ�ȭ
//	double* pg = &avg;			// double�� ������ ����� �ʱ�ȭ
//
//	pa = &a;					// ������ pa�� ���� a�� �ּ� ����
//	pb = &b;					// ������ pb�� ���� b�� �ּ� ����
//
//	*pt = *pa + *pb;			// a ���� b ���� ���� total�� ����
//	*pg = *pt / 2.0;			// total ���� 2�� ���� ���� avg�� ����
//
//	printf("�� ������ �� : %d, %d\n", *pa, *pb);
//	printf("�� ������ �� : %d\n", *pt);
//	printf("�� ������ ��� : %.1lf\n", *pg);
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
//	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
//	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
//	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
//
//	printf("char�� ������ �������� ũ�� : %d\n", sizeof(pc));
//	printf("char�� ������ �������� ũ�� : %d\n", sizeof(pi));
//	printf("char�� ������ �������� ũ�� : %d\n", sizeof(pd));
//
//	printf("char* �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
//	printf("int* �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));
//	printf("double* �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd));
//
//	return 0;
//}

/*
Q. int �� num1, num2 �� ����� ���ÿ�
10�� 20���� �ʱ�ȭ ���ְ�
int �� ������ ptr1, ptr2 �� ����,
�� num1 �� num2 �� �̿��ؼ�
num1 �� 10 ���� num2 �� 10 �����ϰ� �Ѵ�.
���� ptr1 �� ptr2 �� ����Ű�� ����� ���� �ٲ۴�.
���������� ptr1 �� ptr2 �� ����Ű��
������ ������ ����Ѵ�.
�׸��� �� ������ ����� ���� ����ؼ� Ȯ���Ѵ�.
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
 //void swap(int* pa, int* pb);				// �� ������ ���� �ٲٴ� �Լ��� ����
 //
 //int main(void)
 //{
 //	int a = 10, b = 20;						// ���� ����� �ʱ�ȭ
 //
 //	swap(&a, &b);						// a, b�� �ּҸ� �μ��� �ְ� �Լ� ȣ��
 //	printf("a : %d, b: %d\n", a, b);	// ���� a, b ���
 //
 //	return 0;
 //}
 //
 //void swap(int* pa , int* pb)	// �Ű������� ������ ����
 //{
 //	int temp;					// ��ȯ�� ���� �ӽ� ����
 //
 //	temp = *pa;					// temp�� pa�� ����Ű�� ������ �� ����
 //	*pa = *pb;					// pa�� ����Ű�� ������ pb�� ����Ű�� ������ �� ����
 //	*pb = temp;					// pb�� ����Ű�� ������ temp �� ����
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
 //	printf("�Ǽ��� 3�� �Է� : ");
 //	scanf("%lf%lf%lf", &max, &mid, &min);
 //	line_up(&max, &mid, &min);
 //	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);
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
 //	printf("�տ� �ִ� �迭 ����� �� ��� : ");
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
  Q. ������ ���ڿ� ������α׷��� �����͸� �̿��� �ڵ��
  �ٲ� ���ۼ� �ϵ��� �Ѵ�.
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
  //	printf("�����ǿ� ǥ���� ���ڿ��� �Է��Ͻÿ� : \n");
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
  //	printf("�����ǿ� ǥ���� ���ڿ��� �Է��Ͻÿ� : \n");
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
   Q. ���̰� 6�� int�� �迭 Arr�� �����ϰ� 1,2,3,4,5,6 ����
	  �ʱ�ȭ �� ������ �迭�� ����� ���� ������ 6,5,4,3,2,1��
	  �ǵ��� �����ϴ� ���α׷��� �ۼ��϶�.
	  ��, �迭�� �� �հ� �ǵڸ� ����Ű�� ������ ���� �ΰ���
	  �����ؼ� �̸� Ȱ���Ͽ� ����� ���� ������ �� �ٲ�� �Ѵ�.

	  ������ ���� �Է� �޾Ƽ� ������ ����ϴ� ���α׷��� �ۼ��϶�
	  ex)	�Է� : Hello
		  ��� : olleH
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
   //	printf("���ڿ� �Է� : ");
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
   //	printf("�ִ�, �ּ�, ������ ���� 5���� ������ �Է��Ͻÿ� : ");
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
   //	printf("�Էµ� ���� �� �ִ밪 : %d\n�Էµ� ���� �� �ּ� �� : %d\n�Էµ� ������ ���� : %d\n", max, min, sum);
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

   ���� ���� ����

   Q. ���̰� ���� �� �ܾ� ã��?

   Ű����� �Է��� �ܾ� �߿���

   ���̰� ���� �� �ܾ��� ���̸� ����ϼ���.

   �� �ٿ� �ϳ��� �ܾ �Է��ϸ� Ctrl + Z��

   ���� ������ �Է��� �ܾ� �߿���

   ���̰� ���� �� �ܾ��� ���̸� ����մϴ�.

   �迭�� ������� �ʰ� �ۼ��ϼ���.

   ?

   ������

   �Է� :
   apple
   kiwi
   strawberry
   mango
   ^Z

   ��� :
   ���� �� �ܾ��� ���� : 10
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
	//	printf("�ܾ���� �Է��ϼ��� : \n>> ");
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
	//	printf("\n���� �� �ܾ��� ���� : %d\n", max);
	//
	//	return 0;
	//}

	//p.318 12-1 ���ڿ��� ������
	//#include <stdio.h>
	//
	//int main(void)
	//{
	//	printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
	//	printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1);
	//	printf("ù ��° ���� : %c\n", *"apple");
	//	printf("�� ��° ���� : %c\n", *("apple" + 1));
	//	printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);
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
	//	printf("���� ���ڿ� : %s\n", str1);
	//	strcpy(str1, str2);
	//	printf("�ٲ� ���ڿ� : %s\n", str1);
	//
	//	strcpy(str1, ps1);
	//	printf("�ٲ� ���ڿ� : %s\n", str1);
	//
	//	strcpy(str1, ps2);
	//	printf("�ٲ� ���ڿ� : %s\n", str1);
	//
	//	strcpy(str1, "banana");
	//	printf("�ٲ� ���ڿ� : %s\n", str1);
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
	//char* my_strcpy(char* pa, char* ps);				// �Լ� ����
	//
	//int main(void)
	//{
	//	char str[80] = "strawberry";
	//
	//	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
	//	my_strcpy(str, "apple");					// ���ڿ� "apple" ����
	//	printf("�ٲ� �� ���ڿ� : %s\n", str);
	//	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));	// ��ȯ������ ���
	//
	//	return 0;
	//}
	//
	//char *my_strcpy(char* pd, char* ps)					//���� ���� ��(pd)�� ������ ��(ps)�� ������
	//{
	//	char* po = pd;		// pd ���� ���߿� ��ȯ�ϱ� ���� ����
	//
	//	while (*ps != '\0')	// ps�� ����Ű�� ���ڰ� �� ���ڰ� �ƴ� ����
	//	{
	//		*pd = *ps;		// ps�� ����Ű�� ���ڸ� pd�� ����Ű�� ��ġ�� ����
	//		pd++;			// ���� ���� ���� ��ġ�� ������ ����
	//		ps++;			// ������ ���� ������ ��ġ�� ������ ����
	//	}
	//	*pd = '\0';			// ���簡 ��� ���� �� ���� ���� ���� �� ���ڷ� ������
	//
	//	return po;			// ���簡 ���� ���� ������ ���� �ּ� ��ȯ
	//}


	/*
	 Q. "I am a boy. I am Happy!" ���ڿ��� �ִµ�
	 �� �� boy �� ��ġ �ּҸ� ����ϰ�
	 boy �� girl �� �ٲپ� ����ϵ��� �ϴ� �ڵ带
	 �ۼ��϶�.

	 ��°��)
		boy ��ġ �ּ� : 0FF2 C400
		�ٲ� ���ڿ� : "I am a girl. I am Happy!"
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
	 //	int score[2][3][4] = {		// 2�� �� ������ 4���� ���� ����
	 //		{ { 72, 80, 95, 60 }, { 68, 98, 83, 90 }, { 75, 72, 84, 90 } },
	 //		{ { 60, 85, 90, 88 }, { 95, 92, 88, 95 }, { 43, 72, 56, 75 } }
	 //	};
	 //
	 //	int i, j, k;										// �ݺ� ���� ����
	 //
	 //	for (i = 0; i < 2; i++)								// �� ����ŭ �ݺ�
	 //	{
	 //		printf("%d�� ���� : \n", i + 1);			// ���� �ٲ� ������ ���
	 //		for (j = 0; j < 3; j++)							// �伧 ����ŭ �ݺ�
	 //		{
	 //			for (k = 0; k < 4; k++)						// ���� ����ŭ �ݺ�
	 //			{
	 //				printf("%5d", score[i][j][k]);	// ���� ���
	 //			}
	 //			printf("\n");							// �� �л��� ������ ����ϰ� �� �ٲ�
	 //		}
	 //		printf("\n");
	 //	}
	 //
	 //	return 0;
	 //}

	 /*
	  Q. ��� ��ȯ
		 ������ ���� A ����� B ��İ� ���� ���°� �ǵ��� �϶�

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
 Q.	������ ���� �迭�� ���ڰ� ä�������� ���α׷���
	�ۼ��϶�. ( N x N�� ���θ� �ۼ��� ��)
	ex >	3 x 3 �� ���

			1 2 6
			3 5 7
			4 8 9
 */

 /*
  Q.	�߱�����
	 ������ ���ڸ� �Է� �޾Ƽ� ������ ����
	 ���ڰ� ������ �� ��ġ�� Ʋ���� ���� ���� ���
	 ���ڿ� ��ġ�� ������ ��Ʈ����ũ ���
	 ���ڿ� ��ġ�� ���� Ʋ���� �ƿ��� ����ϴ�
	 ���α׷��� �ۼ��϶�.
	 ������ ���̰� ��Ʈ����ũ ������ ������� �ʴ´�.
	 (�־����� ���� �Ǵ� �ԷµǴ� ���ڴ� �ߺ� �Ǿ �ȵȴ�.)

	 ex> ��ǻ�� 2 1 6 <- �������� �ȵ�.
	 1 > 8 3 5	=> OUT
	 2 > 6 5 9	=> 0S 1B
	 3 > 2 6 4	=> 1S 1B
	 4 > 2 1 6	=> ����
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
  //	while (1) // �ߺ��� ���� ���� ���� �����
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
  //		printf("���� 3���� �Է��ϼ���");
  //		scanf("%d%d%d", &player[0], &player[1], &player[2]);
  //
  //		if ((player[0] >= 10 && player[0] <= 0) || (player[1] >= 10 && player[1] <= 0) || player[2] >= 10 && player[2] <= 0)
  //		{
  //			printf("�ԷµǴ� ���� ���ڸ� �����߸� �մϴ�");
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
  //				printf("\nȨ�� !! ������ %d%d%d��(��) ���߼̽��ϴ� !!\n\n", ans[0], ans[1], ans[2]);
  //				break;
  //			}
  //		}
  //		BALL = 0;
  //		STRIKE = 0;
  //	}
  //
  //	return 0;
  //}

//Q.�迭�� ���ڸ� ������ ���� ������� ä��������
//���α׷��� �ۼ��϶�.
//�ð� �������� m xm �� 2���� �迭�� ���ڰ� ä�������� �Ѵ�.
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
//	printf("����	������	&����	*����	**����\n");
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
//	int(*pa)[4];		// int�� ���� 4���� �迭�� ����Ű�� �迭 ������
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
 Q. ������ ���� �ΰ��� int�� ������ ������
	���̰� 5�� int �� �迭�� �����Ѵ�.
		int* maxPtr ;
		int* minPtr ;
		int arr[5] ;
	MaxAndMin �̶� �Լ��� �����ϰ� �̸� ȣ���Ͽ�
	�� �迭�� �� �����͸� ������ �����Ѵ�.
	�� �Լ��� ȣ���� �Ϸ� �Ǹ�, ������ ���� maxPtr����
	���� ū ���� ����� �迭 ����� �ּҰ���,
	minPtr���� ���� ���� �迭 ����� �ּҰ��� ����Ǿ�� �Ѵ�.
	( ���� �����͸� �Ű������� Ȱ���� ��)
	��� ��� >
		arr �ּҰ���, �ִ�, �ּ��� �ּҰ�
		maxPtr, minPtr�� ���� �ּҿ� ����� ���� ����϶�.
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
 //		printf("�� ���� �迭�� ����Ͻðڽ��ϱ�? (�ִ� 100) : ");
 //		scanf("%d", &N);
 //		if (N <= 100 && N > 0)
 //		{
 //			break;
 //		}
 //		else
 //		{
 //			printf("�߸��� ���ڸ� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���\n\n");
 //			continue;
 //		}
 //	}
 //	printf("���� %d���� �Է����ּ��� : \n=> ", N);
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
 //	printf("arr�� �ּҰ� : %d\t\t�ִ밪�� �ּҰ� : %d\t�ּҰ��� �ּҰ� : %d\n", arr, *max, *min);
 //	printf("maxPtr�� ���� �� : %d\tminPtr�� ���� �� : %d\n", **max, **min);
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
 //void func(int (*fp)(int, int));			// �Լ� �����͸� �Ű������� ���� �Լ�
 //int sum(int a, int b);					// �� ������ ���ϴ� �Լ�
 //int mul(int a, int b);					// �� ������ ���ϴ� �Լ�
 //int max(int a, int b);					// �� ���� �߿� ū ���� ���ϴ� �Լ�
 //
 //int main(void)
 //{
 //	int sel;							// ���õ� �޴� ��ȣ�� ������ ����
 //
 //	printf("01 �� ������ ��\n");	// �޴� ���
 //	printf("02 �� ������ ��\n");
 //	printf("03 �� ���� �߿��� ū �� ���\n");
 //	printf("���ϴ� ������ �����ϼ��� : ");
 //	scanf("%d", &sel);			// �޴� ��ȣ �Է�
 //	switch (sel)
 //	{
 //	case 1: func(sum); break;			// 1�̸� func�� ���� ��� �߰�
 //	case 2: func(mul); break;			// 2�̸� func�� ���� ��� �߰�
 //	case 3: func(max); break;			// 3�̸� func�� ū �� ���ϴ� ��� �߰�
 //	}
 //
 //	return 0;
 //}
 //
 //void func(int (*fp)(int, int))
 //{
 //	int a, b;							// �� ������ ������ ����
 //	int res;							// �Լ��� ��ȯ���� ������ ����
 //
 //	printf("�� ������ ���� �Է��ϼ��� : ");
 //	scanf("%d%d", &a, &b);		// �� ���� �Է�
 //	res = fp(a, b);
 //	printf("������� : %d\n", res);	// ��ȯ �� ���
 //}
 //
 //int sum(int a, int b)					// ���� �Լ�
 //{
 //	return (a + b);
 //}
 //
 //int mul(int a, int b)					// ���� �Լ�
 //{
 //	return (a * b);
 //}
 //
 //int max(int a, int b)					// ū ���� ���ϴ� �Լ�
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
 //	printf("ù ��° ����� ���̿� Ű �Է� : ");
 //	scanf(" %d%lf", &f_Age, &f_Height);
 //	printf("�� ��° ����� ���̿� Ű �Է� : ");
 //	scanf(" %d%lf", &s_Age, &s_Height);
 //
 //	swap("int", &f_Age, &s_Age);
 //	swap("double", &f_Height, &s_Height);
 //
 //	printf("ù ��° ����� ���̿� Ű : %d��, %.1lfcm\n", f_Age, f_Height);
 //	printf("�� ��° ����� ���̿� Ű : %d��, %.1lfcm\n", s_Age, s_Height);
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
 //		printf("# �޸𸮰� �����մϴ�.\n");
 //		exit(1);
 //	}
 //	pd = (double*)malloc(sizeof(double));
 //
 //	*pi = 10;
 //	*pd = 3.4;
 //
 //	printf("���������� ��� : %d\n", *pi);
 //	printf("�Ǽ������� ��� : %.1lf\n", *pd);
 //
 //	free(pi);
 //	free(pd);
 //
 //	return 0;
 //}

 /*
  Q. ����ڷκ��� ���ڿ��� �Է� �޾Ƽ� �ܾ ������ ����ϴ�
	 ���α׷��� �ۼ��϶�.
	 ("Quit"�� �Էµ� �� ���� �ݺ� �ǵ��� �Ѵ�.)
	 �Է� > I am happy
	 ��� > happy am I

	 (�޸� �Ҵ�, ���� ���� ����)

	 sprintf ��� X
  */


  //#define		_CRT_SECURE_NO_WARNINGS
  //#include	<stdio.h>
  //#include	<stdlib.h>
  //
  //int main(void)
  //{
  //	int num = 0;
  //	printf("> ��� �Է� : ");
  //	scanf(" %d", &num);
  //
  //	int* pi;
  //	pi = (int*)calloc(num, sizeof(int));	// ���� �Ҵ� �� �ʱ�ȭ
  //
  //	if (pi == NULL)
  //	{
  //		printf("# �޸𸮰� �����մϴ�.\n");
  //		exit(1);
  //	}
  //
  //	for (int i = 2; i < num; i++)					// �Ҽ��̸� �ش� �ε����� -1 ����
  //	{
  //		for (int j = 2; j < i; j++)
  //		{
  //			if (i % j == 0)
  //			{
  //				pi[i] = -1;
  //				break;
  //			}
  //		}
  //		if (pi[i] != -1)							// �Ҽ��� �ƴϸ� �ش� �� ����
  //		{
  //			pi[i] = i;
  //		}
  //	}
  //
  //	printf("\n");
  //
  //	for (int i = 2; i < num; i++)
  //	{
  //		if (pi[i] == -1)							// �Ҽ��� X ���
  //		{
  //			printf("%5c", 'X');
  //		}
  //		else										// �Ҽ��� �ƴϸ� �ش� �� ���
  //		{
  //			printf("%5d", pi[i]);
  //		}
  //		if ((i - 1) % 5 == 0)						// 5�� ��������� �ٹٲ�
  //		{
  //			printf("\n");
  //		}
  //	}
  //	printf("\n");
  //
  //	free(pi);										// ���� �޸� ����
  //
  //	return 0;
  //}

  //#include <stdio.h>
  //
  //typedef struct student						//����ü ����
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
  //	printf("�й� : %d\n", s1.num);
  //	printf("���� : %.1lf\n", s1.grade);
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
  //	strcpy(yuni.name, "������");
  //	yuni.age = 17;
  //	yuni.height = 164.5;
  //
  //	yuni.intro = (char*)malloc(80);
  //	printf("�ڱ�Ұ� : ");
  //	gets(yuni.intro);
  //
  //	printf("�̸� : %s\n", yuni.name);
  //	printf("���� : %d\n", yuni.age);
  //	printf("Ű : %.1lf\n", yuni.height);
  //	printf("�ڱ�Ұ� : %s\n", yuni.intro);
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
  //	printf("�÷� �Է� : ");
  //	scanf(" %lf%lf", &(robot.left), &(robot.right));
  //	robot = exchange(robot);
  //	printf("�ٲ� �÷� : %.1lf %.1lf\n", robot.left, robot.right);
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
  //	printf("���� : %d\n", (*ps).kor);
  //	printf("���� : %d\n", ps->eng);
  //	printf("���� : %d\n", ps->math);
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
  //		{"ȫ�浿", 23, "111-1111", "�︪�� ����"},
  //		{"�̼���", 35, "222-2222", "���� ��õ��"},
  //		{"�庸��", 19, "333-3333", "�ϵ� û����"},
  //		{"������", 15, "444-4444", "�泲 õ��"},
  //		{"���߱�", 45, "555-5555", "Ȳ�ص� ����"}
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
  //typedef struct list									// �ڱ� ���� ����ü
  //{
  //	int num;										// �����͸� �����ϴ� ���
  //	struct list* next;								// ����ü �ڽ��� ����Ű�� ������ ���
  //} List;
  //
  //int main(void)
  //{
  //	List a = { 10, 0 }, b = { 20, 0 }, c = { 30,0 };	// ����ü ���� �ʱ�ȭ
  //	List* head = &a, * current;						// ��� ������ �ʱ�ȭ
  //
  //	a.next = &b;									// a�� ������ ����� b�� ����Ŵ
  //	b.next = &c;									// b�� ������ ����� a�� ����Ŵ
  //
  //	printf("head->num : %d\n", head->num);	// head�� ����Ű�� a�� num ��� ���
  //	printf("head->next->num : %d\n", head->next->num);	// head�� b�� num ��� ���
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
	  Q. �й�, �̸�, ����(��/��/��)�� �Է� ���� ��
	  �ִ� ����ü�� ����� ���� ���� �л��� ����
	  �����͸� �Է� �޾� ����ϴ� �ڵ带 �ۼ��϶�.
	  ���� ������ �����Ͽ� ����ϵ��� �Ѵ�.
	  - ���� 4���� �޴��� �����ϰ�, �� �޴� ���ý�
	  �۵��� ������ ����.
	  1. �Է� - �й�, �̸�, ���� ������ �Է�
	  2. ��� - ������ ���� ���ĵ� ���·� ���
	  3. �˻� - �̸����� �ش� �л��� ����, ������ ���
	  4. ����
	  ��,
		  1. ��ȣ �ߺ� �Ұ�, �̸��� �ߺ� ����
		  2. �˻�-> �̸��˻����� �ϰ� ���� ã�� ���� �켱���� ���
	  �������
		  1. �޸� �Ҵ� ���, �ڱ� ���� ����ü Ȱ��, �Է�/���/�˻��� ����
		  ���� �Լ��� �����Ѵ�.
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
   //		printf("�޸𸮰� �����մϴ�.");
   //		exit(1);
   //	}
   //	memset(pStudent, 0, sizeof(Student) * MaxStudent);
   //
   //	while (iExit == 0)
   //	{
   //		int iCase = 0;
   //
   //		printf("1. �Է�, 2. ���, 3. �˻�, 4. ���� \n");
   //		scanf(" %d", &iCase);
   //
   //		switch (iCase)
   //		{
   //		case 1://�Է�
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
   //		case 2://���
   //			PrintStudentGrade(&pStudent, iStudentCnt);
   //			break;
   //		case 3://�˻�
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
   //		printf("�й� : ");
   //		scanf("%d", &((*pstu + i)->iID));
   //
   //		if (CheckID(pstu, stunum, ((*pstu + i)->iID)))
   //		{
   //			printf("\t!!!!!�ߺ� �й�!!!!!\n");
   //			printf("�ٽ� �Է� �ٶ��ϴ�.\n\n");
   //			system("pause");
   //
   //			continue;
   //		}
   //
   //		printf("�̸� : ");
   //		scanf("%s", chNameTemp);
   //		strcpy((*(pstu + i))->chName, chNameTemp);
   //
   //		printf("����, ����, �������� : ");
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
   //	printf("ã�� �̸� �Է� : ");
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
//		// : ���� ���� ����
//		printf("file open - failure");
//		exit(0);
//	}
//
//	if (fpw == NULL)
//	{
//		// : ���� ���� ����
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
//		printf("�Է� ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");
//	if (ofp == NULL)
//	{
//		printf("��� ������ ���� ���߽��ϴ�.\n");
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
//		total = kor + eng + math;	// ���� ���
//		avg = total / 3.0;			// ��� ���
//		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);	// �̸�, ����, ��� ���
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
//		printf("������ ������ �ʾҽ��ϴ�.\n");
//		return 1;
//	}
//
//	bfp = fopen("b.txt", "r");
//	if (bfp == NULL)
//	{
//		printf("������ ������ �ʾҽ��ϴ�.\n");
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
Q1. 99.txt ������ �����, ���⿡ �������� �����ϵ���
	�Ѵ�. �׸��� fseek() �̿� ���ϴ� �������� ���븸
	ã�Ƽ� ����ϴ� ���α׷��� �ۼ��϶�.
	ex>	�� �� ? 2
		2 ��
		=================================
		2 x 1 = 2
		....
		2 x 9 = 18
		=================================

Q2. ���� ���� ���α׷� �����.
	������ ���ϸ�� ���� �� �����Ǵ� ���ϸ��� �Է¹޾Ƽ�
	������ ������ �����ϴ� ���α׷� �ۼ�.
	��, txt ���� �Ӹ� �ƴ϶� �̹��� ���� ��.. ��� ������
	���Ͽ� �� �����ϰ� ������ �� �־�� �Ѵ�.
	���� ���� ������ ������� ȭ�鿡 ǥ�����ֵ��� �ϰ�,
	�ѹ��� 4����Ʈ�� �����ϵ��� �Ѵ�.
	ex>
		���� ���� : source.txt
		��� ���� : dest.txt


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