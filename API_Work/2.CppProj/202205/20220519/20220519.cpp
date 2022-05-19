#define	_CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//
//int main()
//{
//	using namespace std;
//	int aa[10];
//	int a = sizeof aa;
//	int year;
//
//	const int SIZE = 20;
//	/*char str1[SIZE] = { 'a', 'p', 'p', 'l', 'e', '\0' };
//	char str2[SIZE] = "apple";*/
//	char str1[SIZE];
//
//	//cin >> str2;
//	/*cin.getline(str2, SIZE);
//	cin,get(str2, SIZE);
//	cin.get();
//	cout << str2 << endl;*/
//	//cin.clear();
//	cin >> year;
//	cin.ignore();
//	cin.getline(str1, SIZE);
//	cout << year << endl;
//	cout << str1 << endl;
//
//	//strcpy(str2, str1);
//
//	
//
//	return 0;
//}

// instr2.cpp -- getline() 함수로 한 행을 읽는다
//#include <iostream>
//int main()
//{
//	using namespace std;
//	const int Arsize = 20;
//	char name[Arsize];
//	char dessert[Arsize];
//	cout << "이름을 입력하십시오: \n";
//	cin.getline(name, Arsize);			// 개행 문자가 있는 곳 까지 읽는다.
//	cout << "좋아하는 디저트를 입력하십시오 : \n";
//	cin.getline(dessert, Arsize);
//	cout << "맛있는 " << dessert;
//	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
//	return 0;
//}

// numstr.cpp -- 수피 입력 뒤에 오는 문자열 입력
//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	cout << "지금 사시는 아파트에 언제 입주하셨습니까?\n";
//	int year;
//	cin >> year;
//	cin.get();
//	//cin.clear(); 아래에 cin.getline이 나오면 버퍼 안비워짐!
//	cout << "사시는 도시를 말씀해 주시겠습니까?\n";
//	char address[80];
//	cin.getline(address, 80);
//	cout << "아파트 입주 연도: " << year << endl;
//	cout << "도시: " << address << endl;
//	cout << "등록이 완료되었습니다!\n";
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	using namespace std;
//
//	/*string str1;
//	string str2 = "apple";
//	str1 += str2;
//	str1 += "pie";
//	cout << str1 << endl;
//
//	return 0;*/
//	string s1 = "penguin";
//	string s2, s3;
//
//	cout << "string 객체를 string 객체에 대입할 수 있다: s2 = s1\n";
//	s2 = s1;
//	cout << "s2 = \"buzzard\"\n";
//	s2 = "buzzard";
//	cout << "s2: " << s2 << endl;
//	cout << "string 객체들을 결합할 수 있다: s2 = s1 + s2\n";
//	s3 = s1 + s2;
//	cout << "s3: " << s3 << endl;
//	cout << "string 객체들을 추가할 수 있다. \n";
//	s1 += s2;
//	cout << "s1 += s2 --> s1 = " << s1 << endl;
//	s2 += " for day";
//	cout << "s2 += \" for a day\" --> s2 = " << s2 << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//struct inflatable
//{
//	char name[20];
//	float volume = 0.0f;
//	double price = 0.0f;
//};
//
//int main()
//{
//	using namespace std;
//	inflatable t1;
//	t1[0].name = "dasfsasd";
//
//	struct // 쓰고 버릴 용도
//	{
//		int x, y;
//	} Pos;
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	using namespace std;
//	int updates = 6;
//	int* p_updates = new int[6];
//
//	p_updates = &updates;
//	*p_updates = 7;
//
//	cout << updates << endl;
//
//	//free(p_updates);
//	delete p_updates;
//
//	return 0;
//}

// use_new.cpp -- new 연산자 사용하기
//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	int nights = 1001;
//	int* pt = new int;
//	*pt = 1001;
//
//	cout << "nights의 값 = ";
//	cout << nights << ": 메모리의 위치 " << &nights << endl;
//	cout << "int 형";
//	cout << "값 = " << *pt << ": 메모리의 위치" << pt << endl;
//
//	double* pd = new double;	// double형을 저장할 메모리를 대입
//	*pd = 1000001.0;			// 그 메모리에 double 형 값을 저장
//
//	cout << "double 형";
//	cout << "값 = " << *pd << ": 메모리 위치 = " << pd << endl;
//	cout << "포인터 pd의 메모리 위치: " << &pd << endl;
//	cout << "pt의 크기 = " << sizeof(pt);
//	cout << ": *pt의 크기 = " << sizeof(*pt) << endl;
//	cout << "pd의 크기 = " << sizeof pd;
//	cout << ": *pd의 크기" << sizeof(*pd) << endl;
//
//	return 0;
//}

// ptrstr.cpp -- 문자열을 지시하는 포인터의 사용

//#include <iostream>
//#include <cstring>
//
//int main()
//{
//	using namespace std;
//	char animal[20] = "bear";		// animal에 bear가 들어 있다.
//	const char* bird = "wren";		// bird에 문자열의 주소가 들어 있다.
//	char* ps;						// 초기화되지 않았다.
//
//	cout << animal << " and ";		// bear를 출려한다.
//	cout << bird << "\n";			// wren을 출력한다.
//	//	cout << ps << "\n"			// 쓰레기를 출력하거나 먹통이 될 수 있다.
//
//	cout << "동물의 종류를 입력하십시오: ";
//	cin >> animal;
//	// cin >> ps; 절대로 해서는 안 될 엄청난 실수이다.
//	// ps가 대입된 공간으 ㄹ지시하고 있지 않다.
//
//	ps = animal;					// ps를 문자열을 지시하도록 설정한다.
//	cout << ps << "s!\n";			// 맞다, animal을 사용하는 것과 동등
//	cout << "strcpy() 사용 전:\n";
//	cout << (int*)animal << ": " << animal << endl;
//	cout << (int*)ps << ": " << ps << endl;
//
//	ps = new char[strlen(animal) + 1];	// 새 메모리를 대입한다.
//	strcpy(ps, animal);
//	cout << "strcpy() 사용 후: \n";
//	cout << (int*)animal << ": " << animal << endl;
//	cout << (int*)ps << ": " << ps << endl;
//	delete[] ps;
//	return 0;
//}

// delete.cpp -- delete 연산자 사용
//#include <iostream>
//#include <cstring>		// 또는 string.h
//using namespace std;
//char* getname(void);	// 함수 원형
//int main()
//{
//	char* name;			// 포인터를 만들지만 메모리는 대입하지 않는다.
//
//	name = getname();	// 문자열의 주소를 name에 대입한다.
//	cout << (int*)name << ": " << name << "\n";
//	delete[] name;		// 메모리를 해제한다.
//
//	name = getname();	// 해제한 메모리를 다시 사용한다.
//	cout << (int*)name << ": " << name << "\n";
//	delete[] name;		// 메모리를 다시 해제한다.
//	return 0;
//}
//
//char* getname()			// 새 문자열을 가리키는 포인터를 리턴한다.
//{
//	char temp[80];		// 임시 배열
//	cout << "이름을 입력하십시오: ";
//	cin >> temp;
//	char* pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);	// 문자열을 더 작은 공간으로 복사한다.
//
//	return pn;			// 함수가 종료될 떄 임시 배열인 temp는 소멸한다.
//}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <array>
//
//
//int main()
//{
//	using namespace std;
//	string str;
//
//	int a[10];
//
//	vector<int> vec;
//	array<int, 10> arr;
//
//
//
//	vec[0] = 11;
//	vec.push_back(12);
//	vec.push_back(13);
//
//
//
//	return 0;
//}

// mixtypes.cpp -- 일종의 형태 혼합
//#include <iostream>
//
//struct antarctica_years_end
//{
//	int year;
//	/* some really interesting data, etc. */
//};
//
//int main()
//{
//	using namespace std;
//	antarctica_years_end s01, s02, s03;
//	s01.year = 1998;
//	antarctica_years_end* pa = &s02;
//	pa->year = 1999;
//	antarctica_years_end trio[3];		// 3개 구조의 배열
//	trio[0].year = 2003;
//	cout << trio->year << endl;
//	const antarctica_years_end* arp[3] = { &s01, &s02, &s03 };
//	cout << arp[1]->year << endl;
//	const antarctica_years_end** ppa = arp;
//	auto ppb = arp;		// C++11 자동형태추측
//	// 또는 const antarctica_years_end** ppb = arp를 사용한다;
//	cout << (*ppa)->year << endl;
//	cout << (*(ppb + 1))->year << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//struct CandyBar
//{
//	string Name;
//	double Weight;
//	int Calories;
//};
//
//int main()
//{
//	CandyBar Snack[3] = { { "Mocha Munch", 2.3, 350 }, { "Protein Bar", 2.5, 440 }, { "Mocha Bar", 3.0, 550 } };
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "이름: " << Snack[i].Name << endl;
//		cout << "무게: " << Snack[i].Weight << endl;
//		cout << "칼로리: " << Snack[i].Calories << endl;
//	}
//}

#include <iostream>
#include <string>

using namespace std;
struct CandyBar
{
	string Name;
	double Weight;
	int Calories;
};

int main()
{
	CandyBar* ps = new CandyBar;
	for (int i = 0; i < 3; i++)
	{
		cout << "이름을 입력하세요: ";
		cin >> (*ps).Name;
		cout << "이름: " << (*ps).Name << endl;
		cout << "무게를 입력하세요: ";
		cin >> (*ps).Weight;
		cout << "무게: " << (*ps).Weight << endl;
		cout << "칼로리를 입력하세요: ";
		cin >> (*ps).Calories;
		cout << "칼로리: " << (*ps).Calories << endl;
	}
	delete ps;
	return 0;
}