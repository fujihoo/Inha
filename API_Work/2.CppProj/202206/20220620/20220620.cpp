/*
Q1. Encoding
	파일 내의 모든 바이트에 임의수를 더하도록 파일을 부호화 하라.
	사용자가 입력 파일 이름과 출력 파일 이름을 입력하면
	입력 파일의 암호화된 버전을 출력 파일로 저장하는 프로그램을
	작성하라.
		ex> Input source filename : source.txt
			Input Encoding filename : encoding.txt
	더해진 임의수를 encoding.txt의 맨 앞에 기입하도록 한다.

Q2. Decoding
	암호화된 파일을 복호화 하는 프로그램을 작성하라.
	사용자가 입력 파일 이름과 출력 파일 이름을 입력하면
	입력파일의 암호가 풀린 버전을 출력파일에 저장하라.
		ex> Input source filename : encoidng.txt
			Input Encoding filename : dest.txt
	맨 앞에 더해진 임의수를 읽어 decoding 하도록 한다.
*/

#include <iostream>
#include <fstream>

using namespace std;

void encoding();

void decoding();

int main()
{
	encoding();
	decoding();

	return 0;
}

void encoding()
{
	char n;
	int num;

	cout << "임의의 수: ";
	cin >> num;

	n = (char)num;

	string filename;
	string encode;
	cout << "파일 이름: ";
	cin >> filename;

	cout << "encoding 될 파일 이름: ";
	cin >> encode;

	if stream fin(filename.c_s)
}

void decoding()
{

}
