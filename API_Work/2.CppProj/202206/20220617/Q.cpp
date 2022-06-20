/*
Q1. 용량이 큰 파일을 작은 용량으로 분할해서
	작은 단위의 파일로 나누는 유틸리티 프로그램을 작성하라
	사용자로부터 소스 파일명을 입력 받은 후,
	가각 분할된 작은 파일의 바이트 값을 입력받아야 한다.

	ex > Enter file name : test.zip
	     Enter file size : 1024

		 -> File test.zip.01
		 -> File test.zip.02
		 .......
		 Split Done.

Q2. 사용자로부터 소스 파일의 개수, 소스 파일의 이름,
	목적 파일의 이름을 입력 받아 새로운 하나의 파일로
	파일들을 조합하는 프로그램을 작성하라.

	ex > Enter file number : 2
	     Enter source file : test.zip.01
		 Enter source file : test.zip.02
		 Enter target file : tes.zip
		 ....
		 combine Done.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void File_Merge();
void File_Seperate();

int main()
{

	string filename;

	cout << "새 파일을 위해 이름을 입력하십시오.";
	cin >> filename;

	ofstream fout(filename.c_str());


}

void File_Merge()
{
	int FileNumber = 0;
	int FileSize = 0;
	string current_file_data;

	cout << "합칠 파일들의 개수를 입력해주세요: ";
	cin >> FileNumber;
	cin.ignore();	// cin을 사용한 이후 getline을 쓰면 개행문자까지 같이 읽으므로 개행문자는 무시해주시기

	for (int i = 0; i < FileNumber; i++)
	{
		string FileName;
		cout << i + 1 << "번째 합칠 파일의 이름을 입력해주세요: ";
		getline(cin, FileName);

		fstream Fio;
		Fio.open(FileName, ios_base::in | ios_base::binary);
		if (!Fio.is_open())
		{
			cout << "존재하는 파일 이름이 아닙니다. 프로그램을 종료합니다.\n";
			exit(EXIT_FAILURE);
		}
		Fio.seekg(0);
		while (!Fio.eof())	// 파일 끝까지 읽다가 Filesize와 같으면 새로 열어서 저장
		{
			char temp_c = Fio.get();
			current_file_data += temp_c;
		}
		current_file_data.pop_back();	// 마지막 커서 위치 제거해주기
		Fio.close();
	}

	cout << "완성된 파일의 이름을 입력해주세요: ";
	string completeName;
	getline(cin, completeName);
	ofstream SplitFile(completeName, ios_base::binary);
	SplitFile << current_file_data;

	SplitFile.close();
}

void File_Seperate()
{
	fstream Fio;
	string FileName;
	int FileSize = 0;
	
	cout << "파일 이름을 입력해주세요: ";
	cin >> FileName;

	Fio.open(FileName, ios_base::in | ios_base::binary);
	if (!Fio.is_open())
	{
		cout << "존재하는 파일 이름이 아닙니다. 프로그램을 종료합니다.\n";
		exit(EXIT_FAILURE);
	}
	Fio.seekg(0, ios::end);	// 파일 커서를 끝으로 이동시켜주고

	int FileMaxsize = (int)Fio.tellg(); // 해당 위치 값 저장 ( == 현재 파일의 최대 크기)

	Fio.seekg(0);	// 커서 이동

	cout << "분할할 크기를 입력해주세요: ";
	cin >> FileSize;

	int i = 1;
	string current_file_data;
	while (!Fio.eof())	// 파일 끝까지 읽다가 FileSize와 같으면 새로 열어서 저장
	{
		
	}
}