// error4.cpp -- ���� Ŭ�������� ����Ѵ�.
#include <iostream>
#include <math.h>
#include "exc_mean.h"
// �Լ� ����
double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b) throw(bad_gmean);
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;
	
	cout << "�� ���� �Է��Ͻʽÿ�: ";
	while (cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
			cout << x << ", " << y << "�� ��ȭ����� "
				<< z << "�Դϴ�.\n";
			cout << x << ", " << y << "�� ��������� "
				<< gmean(x, y) << "�Դϴ�.\n";
			cout << "�ٸ� �� ���� �Է��Ͻʽÿ�(�������� q): ";
		}
		catch (bad_hmean& bg)
		{
			bg.mesg();
			cout << "�ٽ� �Ͻʽÿ�.\n";
			continue;
		}
		catch (bad_gmean& hg)
		{
			cout << hg.mesg();
			cout << "Values ujsed: " << hg.v1 << ", "
				<< hg.v2 << endl;
			cout << "�˼��մϴ�. �� �̻� ������ �� �����ϴ�.\n";
			break;
		}
	}
	cout << "���α׷��� �����մϴ�. \n";
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
	{
		throw bad_hmean(a, b);
	}
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a * b);
}