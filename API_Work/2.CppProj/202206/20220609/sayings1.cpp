// sayings1.cpp -- Ȯ�� ������ String  Ŭ������ ����Ѵ�.
// string1.cpp�� �Բ� ������ �Ѵ�.

#include <iostream>
#include "String1.h"
const int ArSize = 10;
const int Maxlen = 81;
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	String name;
	cout << "�ȳ��Ͻʴϱ�? ������ ��� �ǽʴϱ�?\n>>";
	cin >> name;

	cout << name << " ��! ������ ���� �Ӵ� " << ArSize
		<< "���� �Է��� �ֽʽÿ�(�������� Enter): \n";
	String saying[ArSize];
	char temp[Maxlen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, Maxlen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			saying[i] == temp;
	}
	int total = i;
	if (total > 0)
	{

		cout << "(������ ���� �Ӵ���� �Է��Ͽ����ϴ�.)\n";
		for (i = 0; i < total; i++)
			cout << saying[i][0] << ": " << saying[i] << endl;

		int shortest = 0;
		int first = 0;
		for (i = 1; i < total; i++)
		{
			if (saying[i].length() < saying[shortest].length())
				shortest = i;
			if (saying[i] < saying[first])
				first = i;
		}
		cout << "���� ª�� �Ӵ�: \n" << saying[shortest] << endl;
		cout << "���� ������ ���� �տ� ���� �Ӵ�: \n" << saying[first] << endl;
		cout << "�� ���α׷��� " << String::HowMany() << "���� String ��ü�� ����Ͽ����ϴ�. �̻�! \n";
	}
	else
		cout << "�Է±��� ! �̻�.\n";
	return 0;
}