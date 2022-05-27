/*
 Q1. 두 직사각형에 대해 중심점이 x 좌표, y 좌표 값, 폭, 높이를
     입력 받아 두 번째 직사각형이 첫 번째 직사각형의 내부에 있는지
     첫 번쨰 직사각형과 겹치는지를 결정하는 프로그램을 작성하라.
     ex >
     첫 번째 사각형 x, y, width, height 입력 : 1 2 3 5.5
     첫 번째 사각형 x, y, width, height 입력 : 3 4 4.5 5
     두 번째 사각형은 첫 번째 사각형과 겹쳤다.
 */

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//struct rectangular
//{
//    double x;
//    double y;
//    double width;
//    double height;
//};
//
//int checkio(rectangular* rec1, rectangular* rec2);
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//    rectangular rec1, rec2;
//
//    cout << "첫 번째 사각형 x, y, width, height 입력: ";
//    cin >> rec1.x >> rec1.y >> rec1.width >> rec1.height;
//    cout << "두 번째 사각형 x, y, width, height 입력: ";
//    cin >> rec2.x >> rec2.y >> rec2.width >> rec2.height;
//
//    if (checkio(&rec1, &rec2) == 0)
//    {
//        cout << "첫 번째 사각형은 두 번째 사각형 내부에 있다." << "\n";
//        return 0;
//    }
//    else if (checkio(&rec1, &rec2) == 1)
//    {
//        cout << "첫 번째 사각형은 두 번째 사각형 외부에 있다." << "\n";
//        return 0;
//    }
//    else if (checkio(&rec1, &rec2) == 2)
//    {
//        cout << "첫 번째 사각형은 두 번째 사각형은 만나지 않는다." << "\n";
//        return 0;
//    }
//    else
//    {
//        cout << "두 사각형은 만난다." << "\n";
//    	return 0;
//    }
//}
//
//int checkio(rectangular* rec1, rectangular* rec2)
//{
//    if (((2*rec1->x - rec1->width) > (2*rec2->x - rec2->width)) && ((2*rec1->x + rec1->width) < (2*rec2->x + rec2->width)) &&
//        ((2 * rec1->y - rec1->height) > (2 * rec2->y - rec2->height)) && ((2 * rec1->y + rec1->height) < (2 * rec2->y + rec2->height)))
//    {
//        return 0;
//    }
//    else if (((2 * rec2->x - rec2->width) > (2 * rec1->x - rec1->width)) && ((2 * rec2->x + rec2->width) < (2 * rec1->x + rec1->width)) &&
//        ((2 * rec2->y - rec2->height) > (2 * rec1->y - rec1->height)) && ((2 * rec2->y + rec2->height) < (2 * rec1->y + rec1->height)))
//    {
//        return 1;
//    }
//    else if ((pow(rec1->width + rec2->width ,2) + pow(rec1->height + rec2->height, 2)) <(pow(2*rec1->x - 2*rec2->x, 2) + pow(2*rec1->y - 2*rec2->y, 2)))
//    {
//        return 2;
//    }
//    else
//    {
//        return 3;
//    }
//}

/*
 Q2. 두개의 원에 대해 중심점 좌표와 반지름을 입력 받아
     두 번째 원이 첫 번째 원의 내부에 있는지
     첫 번째 원과 겹치는지를 결정하는 프로그램을 작성하라.
     ex >
     첫 번째 원 x, y, r : 0.5 5.1 13
     두 번째 원 x, y, r : 1 1.7 4.5
     두 번째 원은 첫 번째 원의 내부에 있다.
 */

// newplace.cpp -- 위치 지정 new를 사용한다
//#include <iostream>
//#include <new>
//const int BUF = 512;
//const int N = 5;
//char buffer[BUF];
//int main()
//{
//    using namespace std;
//
//    double* pd1, * pd2;
//    int i;
//    cout << "new와 위치 지정 new의 첫 번째 호출: \n";
//    pd1 = new double[N];
//    pd2 = new (buffer) double[N];
//
//    for (i = 0; i < N; i++)
//    {
//        pd2[i] = pd1[i] = 1000 + 20.0 * i;
//    }
//    cout << "메모리 주소: \n" << pd1 << "   : 힙;"
//        << "\t" << (void*)buffer << "   :정적;" << "\n";
//    cout << "메모리 내용: \n";
//    for (i = 0; i < N; i++)
//    {
//        cout << &pd1[i] << "에 " << pd1[i] << ";\t";
//        cout << &pd2[i] << "에 " << pd2[i] << "\t\n";
//    }
//
//    cout << "\nnew와 위치 지정 new의 두 번째 호출: \n";
//    double* pd3, * pd4;
//    pd3 = new double[N];
//    pd4 = new (buffer) double[N];
//    for (i = 0; i < N; i++)
//    {
//        pd4[i] = pd3[i] = 1000 + 40.0 * i;
//    }
//    cout << "메모리 내용:\n";
//    for (i = 0; i < N; i++)
//    {
//        cout << &pd3[i] << "에 " << pd3[i] << ";\t";
//        cout << &pd4[i] << "에 " << pd4[i] << "\t\n";
//    }
//
//    cout << "\nnew와 위치 지정 new의 세 번째 호출: \n";
//    delete[] pd1;
//    pd1 = new double[N];
//    pd2 = new (buffer + N * sizeof(double)) double[N];
//    for (i = 0; i < N; i++)
//    {
//        pd2[i] = pd1[i] = 1000 + 60.0 * i;
//    }
//    cout << "메모리 내용: \n";
//    for (i = 0; i < N; i++)
//    {
//        cout << &pd1[i] << "에 " << pd1[i] << ";\t";
//        cout << &pd2[i] << "에 " << pd2[i] << ";\t\n";
//    }
//    delete[] pd1;
//    delete[] pd3;
//}

/*
 Q3 . 동전을 백만 번 던지는 것을 시뮬에이션하고
      앞면과 뒷면의 수를 출력하는 프로그램을 작성하라.
      다음과 같이 각 앞뒤가 몇 %씩 나오는지 계산해 출력하라
      ex>
          100    번째일 때 .. 앞면 00% 뒷면 00%
          1000   번째일 때 .. 앞면 00% 뒷면 00%
          ....
          100000 번째일 떄 .. 앞면 00% 뒷면 00%
          1000000번째일 떄 .. 앞면 00% 뒷면 00%
 */

//#include <iostream>
//#include <cstdlib>
//
//int main()
//{
//    using namespace std;
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    double cnt_front = 0, cnt_back = 0;
//
//    srand((unsigned int)time(NULL));
//
//    for (int i = 0; i < 1000000; i++)
//    {
//        int num = rand();
//        int _bool = num % 2;
//        if (_bool == 0)
//        {
//            cnt_front++;
//        }
//        else
//        {
//            cnt_back++;
//        }
//
//        if (cnt_front + cnt_back == 100)
//        {
//            cout << i + 1 << "\t번째일 때 .. 앞면 " << (cnt_front / (cnt_front + cnt_back)) * 100 << "% " << "뒷면 " << (cnt_back / (cnt_front + cnt_back)) * 100 << "\n";
//        }
//        if (cnt_front + cnt_back == 1000)
//        {
//            cout << i + 1 << "\t번째일 때 .. 앞면 " << (cnt_front / (cnt_front + cnt_back)) * 100 << "% " << "뒷면 " << (cnt_back / (cnt_front + cnt_back)) * 100 << "\n";
//        }
//        if (cnt_front + cnt_back == 100000)
//        {
//            cout << i + 1 << "\t번째일 때 .. 앞면 " << (cnt_front / (cnt_front + cnt_back)) * 100 << "% " << "뒷면 " << (cnt_back / (cnt_front + cnt_back)) * 100 << "\n";
//        }
//        if (cnt_front + cnt_back == 1000000)
//        {
//            cout << i+1 << "\t번째일 때 .. 앞면 " << (cnt_front / (cnt_front + cnt_back)) * 100 << "% " << "뒷면 " << (cnt_back / (cnt_front + cnt_back)) * 100 << "\n";
//        }
//    }
//    return 0;
//}

/*
 Q4. 아이템 목록이 다음과 같을 때
        등급      아이템     확률          아이템     확률
        ---------------------------------------------------
        5star     A-Item     1%
        ---------------------------------------------------
        4star     B-Item     3%            C-Item     3%
        ---------------------------------------------------
        3star     D-Item     5%            E-Item     5%
				  F-Item     5%
		---------------------------------------------------
		2star     G-Item     10%           H-Item     10%
			      I-Item     10%           J-Item     10%
		---------------------------------------------------
		1star     K-Item     38%
		---------------------------------------------------
	각 아이템이 지정된 확률에 맞게 정확히 나올 수 있도록 프로그램을 작성하시오.
	ex > 횟수  ? 100       A:1    , B:3   , C:3   , D:5   ...............
		 횟수  ? 1000      A:10   , B:30  , C:30  , D:50  ...............
 */