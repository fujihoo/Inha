//#include <iostream>
//#include <istream>
//#include <ostream>
//#include "헤더.h"

//void MyFunc();

//int main()
//{
//    using namespace std;
//    
//    cout << "Hello World!\n" << "dkafd" << endl;
//    printf("Hello World!\n");
//
//    TTTT();
//
//    return 0;
//
//    cout.setf(ios_base::fixed, ios_base::floatfield);
//}
//void TTTT()
//{
//    using namespace std;
//
//    cout << "Hi\n";
//}

//int main()
//{
//	using namespace std;
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	float tree = 3;
//	int guess = 3.9832;
//	int debt = 7.2E12;
//	cout << "tree = " << tree << endl;
//	cout << "guess =" << guess << endl;
//	cout << "debt = " << debt << endl;
//	return 0;
//}

/* Q1.키를 정수형 센티미터 단위로 묻고 그 값을 미터와 센티미터 단위로 변환하는
	  간단한 프로그램을 작성하라. 입력해야 할 곳을 사용자에게 지시하기 위해
	  밑줄 문자를 사용하고 환산 인수로 const 기호 상수를 사용하라. */

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	int height;
//
//	cout << "당신의 키는? :___cm\b\b\b\b\b";
//	cin >> height;
//
//	const int transfer = 100;
//
//	cout << "키 : " << height / transfer << "m " << height % transfer << "cm" << endl;
//
//
//	return 0;
//}

/* Q2. 위도를 도각, 분각, 초각, 단위로 요청하여. 10진수 형식으로 출력하는 프로그램을
	   작성하라. 1분각은 60초각이다. 1도각 은 60분각이다. 이들을 기호 상수로 표현하라.
	   각각의 입력 값을 위해 별개의 변수를 사용해야 한다. 실행 예는 다음과 같아야 한다. */

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	int degree, minute, second;
//	double finalangle;
//
//	cout << "위도를 도, 분, 초 단위로 입력하시오: " << endl;
//	cout << "먼저, 도각을 입력하시오: ";
//	cin >> degree;
//	cout << "다음에, 분각을 입력하시오: ";
//	cin >> minute;
//	cout << "끝으로, 초각을 입력하시오 : ";
//	cin >> second;
//
//	finalangle = degree + (minute / 60.0) + (second / 3600.0);
//	cout << degree << "도, " << minute << "분, " << second << "초 =" << finalangle;
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	long long All, USA;
//
//	cout << "세계 인구수를 입력하시오: " << endl;
//	cin >> All;
//	cout << "미국의 인구수를 입력하시오: " << endl;
//	cin >> USA;
//	cout << "세계 인구수에서 미국이 차지하는 비중은 " << ((double)USA / (double)All) * 100 << "%이다." << endl;
//}