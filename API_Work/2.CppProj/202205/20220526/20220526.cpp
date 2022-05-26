#define _CRT_SECURE_NO_WARNINGS
/*
 Q1. 선1 의 두점 (x1, y1) 과 (x2, y2) ,
     선2 의 두점 (x3, y3) 과 (x4, y4) 로 주어진
     두 선의 교차점을 구하는 프로그램을 작성하라

     크래머 공식을 이용하라
     ex > 점 4개 입력 : x1, y1, x2, y2, x3, y3, x4, y4
          2 2 5 -1.0 4.0 2.0 -1.0 -2.0
          교차점은 ( 2.88889, 1.11111 ) 이다.
 */

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct Point
//{
//    int x;
//    int y;
//};
//
//struct Line
//{
//    Point p1;
//    Point p2;
//    Point p3;
//};
//
//int main()
//{
//    double A, B, E;
//    double C, D, F;
//    double DE;
//    double X, Y;
//    double x1, y1, x2, y2, x3, y3, x4, y4;
//
//    cout << "점 4개 입력 : ";
//    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
//    A = y2 - y1;
//    B = x1 - x2;
//    E = (A * x1) + (B * y1);
//
//    C = y4 - y3;
//    D = x3 - x4;
//    F = (C * x3) + (D * y3);
//
//    DE = (A * D) - (B * C); // Determinat
//
//    if (DE == 0)
//    {
//        cout << "두선은 평행, 교차점 없음" << endl;
//    }
//    else
//    {
//        X = ((E * D) - (B * F)) / DE;
//        Y = ((A * F) - (E * C)) / DE;
//        cout << "교차점은 ( " << X << ", " << Y << " ) 이다." << endl;
//    }
//}
//
//int ccw(Point p1, Point p2, Point p3)
//{
//    int cross_product = (p2.x - p1.x) * (p3.y - p1.y) -
//        (p3.x - p1.x) * (p2.y - p1.y);
//    if (cross_product > 0)
//    {
//        return 1;
//    }
//    else if (cross_product < 0 )
//    {
//        return -1;
//    }
//    else
//    {
//        return 0;
//    }
//}

//#include <iostream>
//using namespace std;
//void swapr(int& a, int& b);
//void swapp(int* p, int* q);
//void swapv(int a, int b);
//int main()
//{
//    int wallet1 = 3000;
//    int wallet2 = 3500;
//
//    cout << "wlrkq 1 = " << wallet1 << "원\n";
//    cout << "지갑 2 = " << wallet2 << "원\n";
//
//    cout << "참조를 이용하여 내용들을 교환 : \n";
//    swapr(wallet1, wallet2);
//    cout << "지갑 1 = " << wallet1 << "원\n";
//    cout << "지갑 2 = " << wallet2 << "원\n";
//
//    cout << "참조를 이용하여 내용들을 교환 : \n";
//    swapp(wallet1, wallet2);
//    cout << "지갑 1 = " << wallet1 << "원\n";
//    cout << "지갑 2 = " << wallet2 << "원\n";
//
//    cout << "참조를 이용하여 내용들을 교환 : \n";
//    swapv(wallet1, wallet2);
//    cout << "지갑 1 = " << wallet1 << "원\n";
//    cout << "지갑 2 = " << wallet2 << "원\n";
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//string version1(const string& s1, const string& s2);
//const string& version2(string& s1, const string& s2);   //부수 효과 
//const string& version3(string& s1, const string& s2);   //나쁜 설계
//
//int main()
//{
//    string input;
//    string copy;
//    string result;
//
//    cout << "문자열을 입력하시오: ";
//    getline(cin, input);
//    copy = input;
//    cout << "입력한 문자열: " << input << endl;
//    result = version1(input, "***");
//    cout << "바뀐 문자열: " << result << endl;
//    cout << "원래 문자열: " << input << endl;
//
//    result = version2(input, "###");
//    cout << "바뀐 문자열: " << result << endl;
//    cout << "원래 문자열: " << input << endl;
//
//    cout << "원래 문자열 재설정\n";
//    input = copy;
//    result = version3(input, "@@@");
//    cout << "바뀐 문자열: " << result << endl;
//    cout << "원래 문자열: " << input << endl;
//
//    return 0;
//}
//
//string version1(const string& s1, const string& s2)
//{
//    string temp;
//
//    temp = s2 + s1 + s2;
//    return temp;
//}
//
//const string& version2(string& s1, const string& s2)
//{
//    s1 = s2 + s1 + s2;
//
//    return s1;
//}
//
//const string& version3(string& s1, const string& s2)
//{
//    string temp;
//
//    temp = s2 + s1 + s2;
//
//    return temp;
//}

/*
 void Swap(int &a, int b)
 {
  int temp = a;
   a= b;
   b= temp;
 }

 main()

 {
 Swap ( a, b)
 }
 
 */


// twoswap.cpp -- 특수화는 템플릿을 무시한다.
//#include <iostream>
//template <typename T> void Swap(T& a, T& b);
//
//struct job
//{
//    char name[40];
//    double salary;
//    int floor;
//};
//
//// 명시적 특수화
//template <> void Swap<job>(job& j1, job& j2);
//void show(job& j);
//
//int main()
//{
//    using namespace std;
//    cout.precision(2);
//    cout.setf(ios::fixed, ios::floatfield);
//    int i = 10, j = 20;
//    cout << "i, j = " << i << ", " << j << ".\n";
//    cout << "컴파일러가 생성한 int형 교환기를 사용하면\n";
//    Swap(i, j);
//    cout << "이제 i, j = " << i << ", " << j << ".\n";
//
//    job sue = { "Susan Yaffee", 73000.60, 7 };
//    job sidney = { "Sidney Taffee", 78060.72, 9 };
//    cout << "job 교환 전 :\n";
//    show(sue);
//    show(sidney);
//    Swap(sue, sidney);
//    cout << "job 교환 후: \n";
//    show(sue);
//    show(sidney);
//    // cin.get();
//    return 0;
//}
//
//template <typename T> void Swap(T& a, T& b)
//{
//    T temp;
//    temp = a;
//    a = b;
//    b = temp;
//}
//
//// job 구조체의 salary와 floor 멤버만 교환한다.
//
//template <> void Swap<job>(job &j1, job &j2)
//{
//    double t1;
//    int t2;
//    t1 = j1.salary;
//    j1.salary = j2.salary;
//    j2.salary = t1;
//    t2 = j1.salary;
//	j1.floor = j2.floor;
//    j2.floor = t2;
//}
//
//void show(job& j)
//{
//    using namespace std;
//    cout << j.name << ": (" << j.floor << "층에 거주) "
//        << "$" << j.salary << endl;
//}

//#include <iostream>
//using namespace std;
//template <typename T> T max5(T element[]);
//
//int main()
//{
//	int element[5];
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> element[i];
//	}
//	double element2[5];
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> element2[i];
//	}
//
//	cout << max5(element) << '\n' << max5(element2) << endl;
//
//	return 0;
//}
//
//template <typename T> T max5(T element[])
//{
//	T max = element[0];
//	for (int i = 1; i < 5; i++)
//	{
//		if (element[i] > max)
//		{
//			max = element[i];
//		}
//	}
//	return max;
//}

//#include <iostream>
//using namespace std;
//template <typename T> T Max(T element[], int num);
//
//int main()
//{
//	int num = 0;
//	int element1[6];
//	double element2[4];
//
//	for (int i = 0; i < 6; i++)
//	{
//		cin >> element1[i];
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> element2[i];
//	}
//
//	cout << Max(element1, 6) << "\n" << Max(element2, 4) << endl;
//}
//
//template <typename T> T Max(T element[], int num)
//{
//	T max = element[0];
//	for (int i = 1; i < num; i++)
//	{
//		if (element[i] > max)
//		{
//			max = element[i];
//		}
//	}
//	return max;
//}

#include <iostream>
using namespace std;
template <typename T> T Max(T element[], int num);
template <> char* Max<char*>(char* element[], int num);

int main()
{
	int element1[6];
	double element2[4];
	char* element3[5];

	for(int i = 0; i < 5; ++i)
	{
		element3[i] = new char[128];
		memset(element3[i], 0, 128);
	}
	cout << "최대 값을 구할 정수 6개를 입력하시오: ";
	for (int i = 0; i < 6; i++)
	{
		cin >> element1[i];
	}
	cout << "최대 값을 실수 4개를 입력하시오: ";
	for (int i = 0; i < 4; i++)
	{
		cin >> element2[i];
	}
	cout << "문자열 5개를 입력하시오: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> element3[i];
	}
	cout << Max(element1, 6) << "\n" << Max(element2, 4) << endl;
	printf("%p", Max(element3, 5));

	//cout << Max(element3, 5) << endl;

	for (int i = 0; i < 5; ++i)
	{
		delete[] element3[i];
		element3[i] = nullptr;
	}
	return 0;
}

template <typename T> T Max(T element[], int num)
{
	T max = element[0];
	for (int i = 1; i < num; i++)
	{
		if (element[i] > max)
		{
			max = element[i];
		}
	}
	return max;
}

template <> char* Max<char*>(char* element3[], int num)
{
	int max = strlen(element3[0]);
	int index = 0;
	for (int i = 1; i < num; i++)
	{
		if (strlen((element3[i])) > max)
		{
			max = strlen((element3[i]));
			index = i;
		}
	}
	return (element3[index]);
}