//// writie.cpp -- cout.write()를 사용한다
//#include <iostream>
//#include <cstring>
//
//int main()
//{
//	using std::cout;
//	using std::endl;
//	const char* state1 = "Florida";
//	const char* state2 = "Kansas";
//	const char* state3 = "Euphoria";
//	int len = std::strlen(state2);
//	cout << "루프 인덱스 증가: \n";
//	int i;
//	for (i = 1; i <= len; i++)
//	{
//		cout.write(state2, i);
//		cout << endl;
//	}
//
//// 연이어 출력한다.
//	cout << "루프 인덱스 감소:\n";
//	for (i = len; i > 0; i--)
//	{
//		cout.write(state2, i) << endl;
//	}
//
//// 문자열 길이를 초과한다
//	cout << "문자열 길이 초과:\n";
//	cout.write(state2, len + 5) << endl;
//
//	return 0;
//}

//// check_it.cpp -- 적절한 입력인지 확인한다
//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	cout << "수를 입력하십시오: ";
//
//	int sum = 0;
//	int input;
//	while (cin >> input)
//	{
//		sum += input;
//		cout << input << "\n";
//	}
//	
//	cout << "마지막으로 입력한 값 = " << input << endl;
//	cout << "합계 = " << sum << endl;
//	return 0;
//}

//// fileio.cpp -- 파일에 저장한다
//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main()
//{
//	using namespace std;
//	string filename;
//
//	cout << "새 파일을 위한 이름을 입력하십시오: ";
//	cin >> filename;
//
//// 새 파일을 위한 출력 스트림 객체를 fout이라는 이름으로 생성한다.
//	ofstream fout(filename.c_str());
//
//	fout << "비밀 번호 노출에 주의하십시오.\n";			// 파일에 기록한다
//	cout << "비밀 번호를 입력하십시오: ";				// 화면에 출력한다
//	float secret;
//	cin >> secret;
//	fout << "귀하의 비밀 번호는 " << secret << "입니다.\n";
//	fout.close();
//
//// 새 파일을 위한 입력 스트림 객체를 fin이라는 이름으로 생성한다
//	ifstream fin(filename.c_str());
//	cout << filename << " 파일의 내용은 다음과 같습니다.:\n";
//	char ch;
//	while (fin.get(ch))
//		cout << ch;
//	cout << "프로그램을 종료합니다.\n";
//	fin.close();
//	
//	return 0;
//}

// random.cpp -- 2진 파일에 임의 접근
#include <iostream>								// 대부분의 시스템에서 필요 없다
#include <fstream>
#include <iomanip>
#include <cstdlib>								// 또는 stdlib.h exit()를 사용하기위해

const int LIM = 20;
struct planet
{
	char name[LIM];								// 행성의 이름
	double population;							// 행성의 인구
	double g;									// 행성의 중력가속도
};

const char* file = "planet.dat";
inline void eatline() { while (std::cin.get() != "\n") continue; }

int main()
{
	using namespace std;
	planet pl;
	cout << fixed;

// 초기의 내용을 화면에 표시한다
	fstream finout;								// 읽기/쓰기 스트림
	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
	// 주: 어떤 컴파일러는 | ios_base::binary를 생략할 것을 요구한다.
	int ct = 0;
	if (finout.is_open())
	{
		finout.seekg(0);						// 시작 위치로 간다
		cout << file << " 파일의 현재 내용은 다음과 같ㅎ습니다.:\n";
		while (finout.read((char*)&pl, sizeof pl))
		{
			cout << ct++ << ": " << setw(LIM) << pl.name << ": "
				<< setprecision(0) << setw(12) << pl.population
				<< setprecision(2) << setw(6) << pl.g << endl;
		}
		if (finout.eof())
			finout.clear();						// eof 플래그를 해제한다.
		else
		{
			cerr << file << " 파일을 읽다가 에러 발생.\n";
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		cerr << file << " 파일을 열 수 없습니다. 종료.\n";
		exit(EXIT_FAILURE);
	}

// 레코드를 수정한다
	cout << "수정할 레코드 번호를 입력하십시오: ";
	long rec;
	cin >> rec;
	eatline();									// 개행 문자를 없앤다
	if (rec < 0 || rec >= ct)
	{
		cerr << "잘못된 레코드 번호입니다. 종료.\n";
		exit(EXIT_FAILURE);
	}
	streampos place = rec * sizeof pl;			// strampos형으로 변한다.
	finout.seekg(place);						// 임의 접근
	if (finout.fail())
	{
		cerr << "레코드를 찾다가 에러 발생.\n";
		exit(EXIT_FAILURE);
	}
	finout.read((char*)&pl, sizeof pl);
	cout << "현재 레코드의 내용:\n";
	cout << rec << ": " << setw(LIM) << pl.name << ": "
		<< setprecision(0) << setw(12) << pl.population
		<< setprecision(2) << setw(6) << pl.g << endl;
	if (finout.eof())
		finout.clear();

	cout << "행성의 이름을 입력하십시오: ";
	cin.get(pl.name, LIM);
	eatline();
	cout << "행성의 인구를 입력하십시오: ";
	cin >> pl.population;
	cout << "행성의 중력가속도를 입력하십시오: ";
	cin >> pl.g;
	finout.seekp(place);
	finout.write((char*)&pl, sizeof pl) << flush;
	if (finout.fail())
	{
		cerr << "쓰다가 에러 발생.\n";
		exit(EXIT_FAILURE);
	}

// 개정된 파일을 화면에 표시한다
	ct = 0;
	finout.seekg(0);							// 파일의 시작 위치로 간다
	cout << file << " 파일의 개정"
}