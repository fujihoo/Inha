#define _CRT_SECURE_NO_WARRIORS
/*
 Q1. 다음과 같은 형태로 출력하는 프로그램을 작성하라
     n을 입력 받아 n^2 형태의 값들로 다음과 같이
     만들도록 한다.
     ex >  n = 3
                          1
                       1  2  1
                    1  2  4  2  1
                 1  2  4  8  4  2  1
 */

//#include <iostream>
//
//void pira(int iN);
//
//int main()
//{
//    using namespace std;
//    int iN = 0;
//
//	cout << "N 값을 입력하시오: ";
//    cin >> iN;
//    pira(iN + 1);
//
//    return 0;
//}
//
//void pira(int iN)
//{
//    using namespace std;
//	for (int i = 0; i < iN; i++)
//	{
//        for (int j = 0; j < iN - i -1; j++)
//        {
//            cout << " ";
//        }
//        for (int k = 0; k < i; k++)
//        {
//            cout << pow(2, k);
//        }
//        for (int l = i; l >= 0; l--)
//        {
//            cout << pow(2, l);
//        }
//        if (i != iN - 1 )
//        {
//            cout << "\n";
//        }
//	}
//}

// usetime0.cpp -- Time 클래스의 첫 번째 드래프트 버전을 사용한다.
// usetime0.cpp와 my time0.cpp를 함께 컴파일 한다.