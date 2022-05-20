#define	_CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//
//using namespace std;
//struct Pizza
//{
//	string sName;
//	double dDia;
//	double dWeight;
//};
//
//int main()
//{
//	Pizza infor;
//
//	cout << "피자 회사의 이름을 입력하시오.";
//	cin >> infor.sName;
//	cout << "피자의 지름을 입력하시오.";
//	cin >> infor.dDia;
//	cout << "피자의 중량을 입력하시오.";
//	cin >> infor.dWeight;
//
//	
//	cout << "피자 회사의 이름: " << infor.sName
//		<< "피자의 지름을 입력하시오: " << infor.dDia
//		<< "피자의 중량을 입력하시오: " << infor.dWeight;
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//struct Pizza
//{
//	string sName;
//	double dDia;
//	double dWeight;
//};
//
//int main()
//{
//	Pizza* ps = new Pizza;
//	cout << "피자 회사의 이름을 입력하시오.";
//	cin >> (*ps).sName;
//	cout << "피자의 지름을 입력하시오.";
//	cin >> (*ps).dDia;
//	cout << "피자의 중량을 입력하시오.";
//	cin >> (*ps).dWeight;
//
//	cout << "피자 회사의 이름: " << (*ps).sName << endl
//	<< "피자의 지름을 입력하시오: " << (*ps).dDia << "cm" << endl
//		<< "피자의 중량을 입력하시오: " << (*ps).dWeight << "g" << endl;
//	delete ps;
//
//	return 0;
//}

//Q2. 단어를 입력받아서 그 단어를 뒤집었을 때 원래의
//    단어와 같은지를 판단하는 프로그램을 작성하라.
//    ex) 단어를 입력하시오 : level
//        level은 회문입니다.
//        단어를 입력하시오 : animal
//        animal은 회문이 아닙니다.

//#include	<iostream>
//#include	<string>
//
//int main()
//{
//	using namespace std;
//	string word1;
//	string word2;
//
//	cout << "단어를 입력하시오 : ";
//	cin >> word1;
//	word2 = word1;
//
//	//문자열을 거꾸로 만들기
//	for (int i = word2.size() - 1; i >= 0; i--)
//	{
//		word2[i] = word1[word2.size() - 1 - i];
//	}
//	if (word1 == word2)
//	{
//		cout << word1 << "은 회문입니다." << endl;
//	}
//	else
//	{
//		cout << word1 << "은 회문이 아닙니다." << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	clock_t start = clock();
//	clock_t delay = cl
//}

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	int prices[5] = { 1, 3, 4, 5, 6 };
//
//	int sum = 0;
//	for (int i : prices)
//	{
//		sum += i;
//	}
//	cout << sum << endl;
//
//	return 0;
//}


//#include <iostream>
//
//int main()
//{
//	using namespace std;
//
//	char ch, ch2;;
//	cin.get(ch);
//	cin.get();
//	cin.get(ch).get();
//	ch = cin.get()
//	cin.get(ch).get(ch2);
//
//	return 0;
//}

//Q3. 1~10까지의 정수를 입력받아 다음 피라미드와
//    같은 형태로 출력하는 프로그램을 작성하라.
//    ex) 라인 숫자를 입력 : 5
//         1
//        212
//       32123
//      4321234
//     543212345

//#include <iostream>
//using namespace std;
//
//void pira(int iN);
//
//int main()
//{
//	cout << "숫자를 입력하세요" << endl;
//	int iN = 0;
//	cin >> iN;
//
//	pira(iN);
//
//	return 0;
//}
//
//void pira(int iN)
//{
//	for (int i = 0; i < iN; i++)
//	{
//		for (int j = 0; j < iN - i - 1; j++)
//		{
//			cout << " ";
//		}
//		for (int k = i + 1; k > 0; k--)
//		{
//			cout << k;
//		}
//		for (int l = 2; l < i + 2; l++)
//		{
//			cout << l;
//		}
//		if (i != iN - 1)
//		{
//			cout << "\n";
//		}
//	}
//}

//#include <iostream>
//
//using namespace std;
//
//struct CarModel
//{
//	char cName[128];
//	int iYear;
//};
//
//int main()
//{
//	int number = 0;
//
//	cout << "몇대의 차를 목록으로 관리하겠습니까? ";
//	cin >> number;
//	CarModel* ps = new CarModel[number];
//
//	for (int i = 0; i < number; i++)
//	{
//		cout << "자동차 #" << (i + 1) << ":" << endl;
//		cout << "제작업체: ";
//		cin >> (*(ps + i)).cName;
//		cout << "제작년도: ";
//		cin >> (*(ps + i)).iYear;
//	}
//
//	cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다." << endl;
//
//	for (int i = 0; i < number; i++)
//	{
//		cout << (*(ps + i)).iYear << "년형 " << (*(ps + i)).cName << endl;
//	}
//
//	return 0;
//}

#include <iostream>

using namespace std;
