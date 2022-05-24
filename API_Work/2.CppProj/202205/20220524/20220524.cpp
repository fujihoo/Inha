#define	_CRT_SECURE_NO_WARNINGS
/*
 Q1. 비행기의 가속도 a와 이륙속도 v가 주어졌을 때,
	 비행기가 이륙하기 위한 최소 활주 길이를 계산하는 프로그램을
	 작성하라.
		 길이 = v^2 / 2a

	 사용자에게 m/s 단위로 v와 m/s^2 단위로 a를 입력하도록
	 알려주고, 최소 활주 길이를 출력하는 프로그램을 작성.
		 ex > Speed and Accelation : 60 3.5
			  Minimum runway length : 514.286
 */

 //#include <iostream>
 //
 //using namespace std;
 //
 //int main()
 //{
 //    double Speed = 0, Accelation = 0, Runway_length = 0;
 //    cout << "What is Speed and Accelation? : ";
 //    cin >> Speed >> Accelation;
 //    Runway_length = ((Speed) * (Speed)) / (2 * Accelation);
 //    cout << "Minimum runway length : " << Runway_length;
 //
 //    return 0;
 //}

 /*
  Q2. 두점 (x1, y1), (x2, y2)를 입력 받아 이 두점 사이의 거리를
	  출력하는 프로그램을 작성하라.
	  거리 계산 공식은
		  SQUARE ROOT( (x2-x1)^2 + (y2-y1)^2) )
		  ex > x1, y1 : 1.5  -3.4
			   x2, y2 : 4 5
			   Distance : 8.7641
  */

  //#include <iostream>
  //#include <cmath>
  //
  //using namespace std;
  //
  //int main()
  //{
  //    double x1 = 0, y1 = 0, x2 = 0, y2 = 0, Distance = 0;
  //    cout << "x1, y1 : ";
  //    cin >> x1 >> y1;
  //    cout << "x2, y2 : ";
  //    cin >> x2 >> y2;
  //    Distance = ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1));
  //    cout << sqrt(Distance) << endl;
  //
  //    return 0;
  //}

  //#include <iostream>
  //#include <cctype>
  //
  //int main()
  //{
  //    using namespace std;
  //    cout << "분석할 텍스트를 입력하시오. "
  //        "입력의 끝을 @으로 표시하십시오. " << endl;
  //    char ch;
  //    int whitespace = 0;
  //    int digits = 0;
  //    int chars = 0;
  //    int punct = 0;
  //    int others = 0;
  //
  //    cin.get(ch);
  //    while (ch != '@')
  //    {
  //	    if (isalpha(ch))
  //	    {
  //            chars++;
  //	    }
  //        else if (isspace(ch))
  //        {
  //            whitespace++;
  //        }
  //        else if (isdigit(ch))
  //        {
  //            digits++;
  //        }
  //        else if (ispunct(ch))
  //        {
  //            punct++;
  //        }
  //        else
  //        {
  //            others++;
  //        }
  //        cin.get(ch);
  //    }
  //    cout << "알파벳 문자 " << chars << ", "
  //        << "화이트스페이스 " << whitespace << ", "
  //        << "숫자 " << digits << ", "
  //        << "구두점 " << punct << ", "
  //        << "기타 " << others << endl;
  //    return 0;
  //}

  // outfile.cpp -- 파일에 쓰기
  //#include <iostream>                     
  //#include <fstream>                          // 파일 I/O를 위해
  //using namespace std;
  //
  //int main()
  //{
  //    char automobile[50];
  //    int year;
  //    double a_price;
  //    double d_price;
  //
  //    ofstream outFile;                       // 출력을 위한 객체 생성
  //    outFile.open("carinfo.txt");       // 파일에 연결
  //
  //    cout << "자동차 메이커와 차종을 입력하시오: ";
  //    cin.getline(automobile, 50);
  //    cout << "연식을 입력하시오: ";
  //    cin >> year;
  //    cout << "구입 가격을 입력하시오: ";
  //    cin >> a_price;
  //    d_price = 0.913 * a_price;
  //
  //    // cout으로 스크린에 정보를 디스플레이
  //
  //    cout << fixed;
  //    cout.precision(2);
  //    cout.setf(ios_base::showpoint);
  //    cout << "메이커와 차종: " << automobile << endl;
  //    cout << "연식: " << year << endl;
  //    cout << "구입 가격 $" << a_price << endl;
  //    cout << "현재 가격 $" << d_price << endl;
  //
  //    // cout 대신 outFile을 사용하여 똑같은 일을 처리할 수 있다
  //
  //    outFile << fixed;
  //    outFile.precision(2);
  //    outFile.setf(ios_base::showpoint);
  //    outFile << "메이커와 차종: " << automobile << endl;
  //    outFile << "연식: " << year << endl;
  //    outFile << "구입 가격 $" << a_price << endl;
  //    outFile << "현재 가격 $" << d_price << endl;
  //
  //    outFile.close();
  //
  //    return 0;
  //}

  // sumafile.cpp -- 배열 매개변수를 사용하는 함수
  //#include <iostream>
  //#include <fstream>              // 파일 I/O 지원
  //#include <cstdlib>              // exit() 지원
  //const int SIZE = 60;
  //
  //int main()
  //{
  //    using namespace std;
  //    char filename[SIZE];
  //    ifstream inFile; ;          // 파일 입력을 처리하기 위한 객체
  //    cout << "데이터 파일의 이름을 입력하시오: ";
  //    cin.getline(filename, SIZE);
  //    inFile.open(filename);      // inFile을 파일에 연결한다
  //    if (!inFile.is_open())      // 파일을 여는데 실패하면
  //    {
  //        cout << filename << " 파일을 열 수 없습니다." << endl;
  //        cout << "프로그램을 종료합니다." << endl;
  //        exit(EXIT_FAILURE);
  //    }
  //    double value;
  //    double sum = 0.0;
  //    int count = 0;              // 읽은 항목의 개수
  //
  //    inFile >> value;            // 첫 번째 값을 얻는다
  //    while (inFile.good())       // 입력이 양호하고 EOF가 아닌 동안
  //    {
  //        ++count;                // 항목 개수 하나 추가
  //        sum += value;           // 누계를 계산한다
  //        inFile >> value;        // 다음 값을 얻는다
  //    }
  //    if (inFile.eof())
  //    {
  //        cout << "파일 끝에 도달했습니다." << endl;
  //    }
  //    else if
  //}

  /*
   Q3. p.368 4번
	   a. 회원등록 -> 저장
	   b. 실명으로 열람
	   c. 직함으로 열람
	   ..
	   Q. 종료
   */

#include <iostream>
#include <fstream>
using namespace std;

const int strsize = 100;

struct bop
{
	char fullname[strsize];         // 실명
	char title[strsize];            // 직함
	char bopname[strsize];          // BOP 아이디
	int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{

	// Benevolent Order of Programmers 회원 구조체

	bop customer[5] =
	{
		{"Wimp Macho", "junior Programmer", "MIPS", 1},
		{"Raki Rhodes", "senior Programmer", "SIMP", 2},
		{"Celina Laiter", "super junior Programmer", "MOPS", 3},
		{"Happy Hipman", "super senior Programmer", "MLOP", 2},
		{"Pat Hand", "junior Programmer", "MESE", 1},
	};

	ofstream fout("customerinfo.txt");
	if (fout.fail())
	{
		cout << "파일을 찾을 수 없음" << endl;
		exit(100);
	}

	char choice;
	cout << "a. 실명으로 열람\t" << "b. 직함으로 열람\n" << "c. BOP 아이디로 열람\t"
		<< "d. 회원이 지정한 것으로 열람\n" << "q. 종료\n";

	while (1)
	{
		cout << "원하는 것을 선택하십시오: ";
		cin >> choice;
		switch (choice)
		{
		case 'a': for (int i = 0; i < 5; i++)
		{
			cout << customer[i].fullname << endl;
			fout << customer[i].fullname << endl;
		}
				break;
		case 'b': for (int i = 0; i < 5; i++)
		{
			cout << customer[i].title << endl;
			fout << customer[i].title << endl;
		}
				break;
		case 'c': for (int i = 0; i < 5; i++)
		{
			cout << customer[i].bopname << endl;
			fout << customer[i].bopname << endl;
		}
				break;
		case 'd': for (int i = 0; i < 5; i++)
			/*cout << customer[i][(customer[i].preference) - 1];*/
			switch (customer[i].preference)
			{
			case 1:
			{
				cout << customer[i].fullname << endl;
				fout << customer[i].fullname << endl;
			}
			break;
			case 2:
			{
				cout << customer[i].title << endl;
				fout << customer[i].title << endl;
			}
			break;
			case 3:
			{
				cout << customer[i].bopname << endl;
				fout << customer[i].bopname << endl;

			}
			break;
			default: cout << "그것은 선택할 수 없습니다." << endl;
				break;
			}
				break;
		case 'q': break;
		default: cout << "그것은 선택할 수 없습니다." << endl;
		}
		if (choice == 'q')
		{
			break;
		}
	}
	fout.close();
	return 0;
}