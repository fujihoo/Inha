/*
Q1. �뷮�� ū ������ ���� �뷮���� �����ؼ�
	���� ������ ���Ϸ� ������ ��ƿ��Ƽ ���α׷��� �ۼ��϶�
	����ڷκ��� �ҽ� ���ϸ��� �Է� ���� ��,
	���� ���ҵ� ���� ������ ����Ʈ ���� �Է¹޾ƾ� �Ѵ�.

	ex > Enter file name : test.zip
	     Enter file size : 1024

		 -> File test.zip.01
		 -> File test.zip.02
		 .......
		 Split Done.

Q2. ����ڷκ��� �ҽ� ������ ����, �ҽ� ������ �̸�,
	���� ������ �̸��� �Է� �޾� ���ο� �ϳ��� ���Ϸ�
	���ϵ��� �����ϴ� ���α׷��� �ۼ��϶�.

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

	cout << "�� ������ ���� �̸��� �Է��Ͻʽÿ�.";
	cin >> filename;

	ofstream fout(filename.c_str());


}

void File_Merge()
{
	int FileNumber = 0;
	int FileSize = 0;
	string current_file_data;

	cout << "��ĥ ���ϵ��� ������ �Է����ּ���: ";
	cin >> FileNumber;
	cin.ignore();	// cin�� ����� ���� getline�� ���� ���๮�ڱ��� ���� �����Ƿ� ���๮�ڴ� �������ֽñ�

	for (int i = 0; i < FileNumber; i++)
	{
		string FileName;
		cout << i + 1 << "��° ��ĥ ������ �̸��� �Է����ּ���: ";
		getline(cin, FileName);

		fstream Fio;
		Fio.open(FileName, ios_base::in | ios_base::binary);
		if (!Fio.is_open())
		{
			cout << "�����ϴ� ���� �̸��� �ƴմϴ�. ���α׷��� �����մϴ�.\n";
			exit(EXIT_FAILURE);
		}
		Fio.seekg(0);
		while (!Fio.eof())	// ���� ������ �дٰ� Filesize�� ������ ���� ��� ����
		{
			char temp_c = Fio.get();
			current_file_data += temp_c;
		}
		current_file_data.pop_back();	// ������ Ŀ�� ��ġ �������ֱ�
		Fio.close();
	}

	cout << "�ϼ��� ������ �̸��� �Է����ּ���: ";
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
	
	cout << "���� �̸��� �Է����ּ���: ";
	cin >> FileName;

	Fio.open(FileName, ios_base::in | ios_base::binary);
	if (!Fio.is_open())
	{
		cout << "�����ϴ� ���� �̸��� �ƴմϴ�. ���α׷��� �����մϴ�.\n";
		exit(EXIT_FAILURE);
	}
	Fio.seekg(0, ios::end);	// ���� Ŀ���� ������ �̵������ְ�

	int FileMaxsize = (int)Fio.tellg(); // �ش� ��ġ �� ���� ( == ���� ������ �ִ� ũ��)

	Fio.seekg(0);	// Ŀ�� �̵�

	cout << "������ ũ�⸦ �Է����ּ���: ";
	cin >> FileSize;

	int i = 1;
	string current_file_data;
	while (!Fio.eof())	// ���� ������ �дٰ� FileSize�� ������ ���� ��� ����
	{
		
	}
}