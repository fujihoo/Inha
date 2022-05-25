#define _CRT_SECURE_NO_WARNINGS
/*
 Q1. 삼각형의 3개의 점 (x1, y1), (x2, y2), (x3, y3)
     를 알고 있을 때 이 삼각형의 면적을 구하는
     프로그램을 작성하라.
     ex > 세점 입력 : 1.5 -3.4 4.6 5 9.5 -3.4
          삼각형의 면적 : 33.6
 */

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    double x1, y1, x2, y2, x3, y3;
//
//    cout << "세 점 입력: ";
//	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//    double base = ((x1 * y2) + (x2 * y3) + (x3 * y1) - ((y1 * x2) + (y2 * x3) + (y3 * x1)));
//    if (base >= 0)
//    {
//        cout << "삼각형의 면적: " << base / 2.0 << endl;
//    }
//    else
//    {
//        cout << "삼각형의 면적: " << -(base / 2.0) << endl;
//    }
//}

/*
 Q2. 게임에서 비밀번호에 어떤 법칙을 요구하는 경우가 있다.
     다음과 같이 비밀번호를 만들어야 한다고 하자
     1. 비밀번호는 적어도 8개의 문자여야 한다.
     2. 비밀번호는 문자와 숫자로만 구성되어야한다.
     3. 비밀번호는 적어도 두개의 숫자가 포함되어야 한다.
     사용자가 비밀번호를 입력했을 때,
     위 법칙에 맞으면 "valid password"를
     그렇지 않으면 "Invalid password"를 출력하는
     프로그램을 작성하라.
 */

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char password[128];
//    int cnt1 = 0;
//    int cnt2 = 0;
//    cout << "만들고자 하는 비밀번호를 입력하세요: ";
//	cin >> password;
//    if (strlen(password) >= 8)
//    {
//        for (int i = 0; i < strlen(password); i++)
//        {
//	        if((password[i] >= '0' && password[i] <= '9')
//                || (password[i] >= 'A' && password[i] <= 'Z')
//                || (password[i] >= 'a' && password[i] <= 'z'))
//	        {
//		        if (password[i] >= '0' && password[i] <= '9')
//		        {
//                    cnt1++;
//		        }
//                if ((password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= 'a' && password[i] <= 'z'))
//                {
//                    cnt2++;
//                }
//	        }
//            else
//            {
//                cout << "invalid password" << endl;
//                return 0;
//            }
//        }
//        if (cnt1 >= 2 && cnt2 >= 2)
//        {
//            cout << "valid password" << endl;
//        }
//        else
//        {
//            cout << "invalid password" << endl;
//        }
//    }
//    else
//    {
//        cout << "invalid password" << endl;
//    }
//    return 0;
//}

// arrobj.cpp -- C++11의 array 객체에 대한 기능
//#include <iostream>
//#include <array>
//#include <string>
//
//using namespace std;
//// 상수(constant) 데이터
//
//const int Seasons = 4;
//const array<string, Seasons> Sname = { "Spring", "Summer", "Fall", "Winter" };
//
//// array 객체를 수정하는 기능
//void fill(array<double, Seasons> *pa);
//
//// 수정하지 않고 객체를 사용하는 기능
//void show(array<double, Seasons> da);
//
//int main()
//{
//    array<double, Seasons> expenses;
//    fill(&expenses);
//    show(expenses);
//    return 0;
//}
//
//void fill(array<double, Seasons> *pa)
//{
//	for (int i = 0; i < Seasons; i++)
//	{
//        cout << Sname[i] << "에 소용되는 비용: ";
//        cin >> (*pa)[i];
//	}
//}
//
//void show(array<double, Seasons> da)
//{
//    double total = 0.0;
//    cout << "\n계절별이용\n";
//    for (int i = 0; i < Seasons; i++)
//    {
//        cout << Sname[i] << " : S" << da[i] << endl;
//        total += da[i];
//    }
//    cout << "총 비용 : S" << total << endl;
//}

// recur.cpp -- 함수의 재귀 호출
//#include <iostream>
//void countdown(int n);
//
//int main()
//{
//    countdown(4);
//
//    return 0;
//}
//
//void countdown(int n)
//{
//    using namespace std;
//    cout << "카운트 다운 ... " << n << endl;
//    if (n > 0)
//    {
//        countdown(n - 1);
//    }
//    cout << n << ": Kaboom!\n";
//}

// fun_ptr.cpp -- 함수를 지시하는 포인터
//#include <iostream>
//double gildong(int);
//double moonsoo(int);
//
//// 두 번째 매개변수 int형을 매개변수로 취하는
//// double형 함수를 지시하는 포인터이다
//
//void estimate(int lines, double (*pf) (int));
//
//int main()
//{
//    using namespace std;
//    int code;
//
//    cout << "필요한 코드의 행 수를 입력하십시오: ";
//    cin >> code;
//    cout << "홍길동의 시간 예상: \n";
//    estimate(code, gildong);
//    cout << "박문수의 시간 예상: \n";
//    estimate(code, moonsoo);
//
//    return 0;
//}
//
//double gildong(int lns)
//{
//    return 0.05 * lns;
//}
//
//double moonsoo(int lns)
//{
//    return 0.03 * lns + 0.0004 * lns * lns;
//}
//
//void estimate(int lines, double (*pf) (int))
//{
//    using namespace std;
//    cout << lines << "행을 작성하는 데 ";
//    cout << (*pf) (lines) << "시간이 걸립니다.\n";
//}

// arfupt.cpp - 함수 포인터를 가지는 배열
//#include <iostream>
//// 표현식은 다르지만, 동일한 함수이다.
//const double* f1(const double ar[], int n);
//const double* f2(const double[], int);
//const double* f3(const double*, int);
//
//int main()
//{
//    using namespace std;
//    double av[3] = { 1112.3, 1542.6, 2227.9 };
//
//    // 함수를 가리킨다
//    const double* (*p1) (const double*, int) = f1;
//    auto p2 = f2; // C++11 자동 형 변환
//    // C++11 이전 버전을 사용할 경우 아래 구문으로 대체한다.
//    // const double *(*p2) (const double *, int) = f2;
//    cout << "함수 포인터:\n";
//    cout << "주소 값\n";
//    cout << (*p1) (av, 3) << ": " << *(*p1) (av, 3) << endl;
//    cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
//
//    // 포인터들의 배열 pa
//    // auto는 리스트 초기화에 사용할 수 없다
//    const double
//}

/*
 Q3. 점(x, y)를 입력 받아 그 점이 (x0, y0)을 중심으로 하고
     반지름 r인 원의 내부에 존재하는지 검사하는 프로그램을
     작성하라
        ex >
        input => r = 10, x0 = 0, y0 = 0, x = 5, y = 5
        output => 점 (4, 5)는 중점이 (0,0)이고 반지름 10인
                  원 안에 있습니다.
     점이 내부에 존재하는지 검사하는 함수를 만들고,
     점(x, y), (x0, y0)를 인자로 넘겨줄 때 포인터 구조체를
     이용해서 만들어야 한다.
 */

#include <iostream>
using namespace std;
struct coordinate
{
    double r;
    double x0;
    double y0;
    double x;
    double y;
};

void exist_in_circle(coordinate* circle1);

int main()
{
    coordinate circle1 = { 0.0, 0.0, 0.0, 0.0, 0.0 };
    cout << "r, x0, y0, x, y를 입력하시오" << endl;
    cin >> circle1.r >> circle1.x0 >> circle1.y0 >> circle1.x >> circle1.y;

    exist_in_circle(&circle1);

    return 0;
}

void exist_in_circle(coordinate* circle1)
{
    double r = circle1->r;
    double x0 = circle1->x0;
    double y0 = circle1->y0;
	double x = circle1->x;
	double y = circle1->y;

    if (sqrt((pow(x - x0, 2) + pow(y - y0, 2))) <= r)
    {
        cout << "점 (" << x << "," << y << ")는 중점이(" << x0 << "," << y0 << ")이고 반지름 " << r << "인 원 안에 있습니다." << endl;
    }
    else
    {
        cout << "점 (" << x << "," << y << ")는 중점이(" << x0 << "," << y0 << ")이고 반지름 " << r << "인 원 밖에 있습니다." << endl;
    }
}