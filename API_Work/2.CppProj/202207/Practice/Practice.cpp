#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

// �������� ������ �򰥷� �ٽ� ����

//void Activated(char* name);
//
//int main()
//{
//	using namespace std;
//	char a[20] = { 0 };
//	char* name = a;
//	cin >> name;
//	Activated(name);
//
//}
//
//void Activated(char* name)
//{
//	char* Name = new char[strlen(name) + 1];
//	strcpy(Name, name);
//	Name[strlen(name)] = '\0';
//}

//int main()
//{
//	using namespace std;
//	int* p = NULL;
//	int num = 15;
//
//	p = &num;
//
//	cout << &num << "\n";
//	cout << p << "\n";
//	cout << *p << "\n";
//
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int* p = NULL;
//	int num = 15;
//
//	p = &num;
//	cout << "������ p�� ����Ű�� �� : " << p << "\n";
//	cout << "num�� �� : " << num << "\n";
//
//	*p += 5;
//	cout << "������ p�� ����Ű�� �� : " << p << "\n";
//	cout << "num�� �� : " << num << "\n";
//
//	(*p)++;
//	cout << "������ p�� ����Ű�� �� : " << p << "\n";
//	cout << "num�� �� : " << num << "\n";
//
//	*p = *(p++);
//	cout << "������ p�� ����Ű�� �� : " << p << "\n";
//	cout << "num�� �� : " << num << "\n";
//
//	return 0;
//}

//void pointerPlus(int* num);
//void numPlus(int num);
//
//int main()
//{
//	using namespace std;
//	int num = 15;
//	cout << "num�� �� : " << num << "\n";
//
//	numPlus(num);
//	cout << "numPlus ��� �� : " << num << "\n";
//
//	pointerPlus(&num);
//	cout << "pointerPlus ��� �� : " << num << "\n";
//
//	return 0;
//}
//
//void pointerPlus(int* num)
//{
//	*num += 5;
//}
//
//void numPlus(int num)
//{
//	num += 5;
//}

//int main()
//{
	/*int num = 10;
	int* ptr1 = &num;
	const int* ptr2 = &num;

	*ptr1 = 20;
	num = 30;

	*ptr2 = 40;

	return 0;*/

	//	int num1 = 10, num2 = 20;
	//	int* ptr1 = &num1;
	//	int* const ptr2 = &num1;
	//
	//	ptr1 = &num2;
	//
	//	*ptr2 = 30;
	//	ptr2 = &num2;
	//
	//	return 0;
	//}

	//typedef struct
	//{
	//	int s_id;
	//	int age;
	//}Student;
	//
	//int main()
	//{
	//	using namespace std;
	//	Student goorm;
	//	Student* ptr;
	//
	//	ptr = &goorm;
	//
	//	(*ptr).s_id = 1004;
	//	//ptr->s_id = 1004
	//	(*ptr).age = 20;
	//	//ptr->age = 20;
	//
	//	cout << "groom�� �й�: " << goorm.s_id << ", ����: " << goorm.age << "\n";
	//
	//	return 0;
	//}

	// ��ø ����ü
	//typedef struct
	//{
	//	char name[15];
	//	int age;
	//}Teacher;
	//
	//typedef struct
	//{
	//	char namep[15];
	//	int age;
	//	Teacher teacher;
	//}Student;
	//
	//int main()
	//{
	//	using namespace std;
	//	Student Student;
	//	Teacher Teacher;
	//
	//	Student.teacher.age = 30;
	//	Teacher.age = 40;
	//
	//	return 0;
	//}

	// �ڱ� ���� ����ü
	//typedef struct
	//{
	//	char name[15];
	//	int age;
	//	struct Student* ptr;
	//}Student;

// call by value;

//typedef struct
//{
//	int s_id;
//	int age;
//}	Student;
//
//void print_student(Student s)
//{
//	using namespace std;
//	s.s_id = 2000;
//	s.age = 25;
//
//	cout << "�й� : " << s.s_id << ", ���� : " << s.age << "\n";
//}
//
//int main()
//{
//	using namespace std;
//	Student s;
//
//	s.s_id = 1000;
//	s.age = 20;
//
//	print_student(s);
//
//	cout << "�й� : " << s.s_id << ", ���� : " << s.age << "\n";
//	return 0;
//}

// call by address(call by value)
//typedef struct
//{
//	int s_id;
//	int age;
//}	Student;
//
//void print_student(Student* s)
//{
//	using namespace std;
//	(*s).s_id = 2000;
//	(*s).age = 25;
//
//	cout << "�й� : " << (*s).s_id << ", ���� : " << (*s).age << "\n";
//}
//
//int main()
//{
//	using namespace std;
//	Student s;
//
//	s.s_id = 1000;
//	s.age = 20;
//
//	print_student(&s);
//
//	cout << "�й� : " << s.s_id << ", ���� : " << s.age << "\n";
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int* iptr;
//	int n = 5;
//
//	iptr = (int*)malloc(n * sizeof(int));	// �޸� �Ҵ�
//	if (iptr == NULL)
//	{
//		cout << "Memory allocation error.\n";
//		exit(0);
//	}
//
//	cout << "������ ���� ũ��: " << sizeof(iptr) << "\n";
//	cout << "�޸� ũ��: " << _msize(iptr);
//
//	free(iptr);
//
//	return 0;
//}
//
//int main()
//{
//	using namespace std;
//	int* iptr;
//	int n = 5;
//
//	iptr = (int*)calloc(n, sizeof(int));	// �޸� �Ҵ�
//	if (iptr == NULL)
//	{
//		cout << "Memory allocation error.\n";
//		exit(0);
//	}
//
//	cout << "������ ���� ũ��: " << sizeof(iptr) << "\n";
//	cout << "�޸� ũ��: " << _msize(iptr);
//
//	free(iptr);
//
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int* iptr, * iptr2;
//	int n = 5;
//
//	iptr = (int*)calloc(n, sizeof(int));	// �޸� �Ҵ�
//	if (iptr == NULL)
//	{
//		cout << "Memory allocation error.\n";
//		exit(0);
//	}
//
//	cout << "�޸� ũ��: " << _msize(iptr);
//
//	iptr2 = (int*)realloc(iptr, 10 * sizeof(int));
//	if (iptr == NULL)
//	{
//		cout << "Memory allocation error.\n";
//		exit(0);
//	}
//
//	cout << "�޸� ũ��: " << _msize(iptr);
//
//	free(iptr);
//
//	return 0;
//}

//int main()
//{
//	using namespace std;
//
//	// 1����Ʈ��ŭ heap�� ���� �Ҵ�
//	char* pchar = new char;
//	*pchar = 'a';
//	cout << "�޸��ּ�: " << (void*)pchar << "��: " << *pchar << "\n";
//	cout << "heap ũ��: " << sizeof(*pchar) << "\n";
//	delete pchar;
//
//	// 4����Ʈ��ŭ heap�� ���� �Ҵ�
//	int* pnum = new int;
//	*pnum = 3;
//	cout << "�޸��ּ�: " << pnum << "��: " << *pnum << "\n";
//	cout << "heap ũ��: " << sizeof(*pnum) << "\n";
//
//	// 4����Ʈ��ŭ heap�� ���� �Ҵ�
//	float *pfloat = new float;
//	*pfloat = 3.14;
//	cout << "�޸��ּ�: " << pfloat << "��: " << *pfloat << "\n";
//	cout << "heap ũ��: " << sizeof(*pfloat) << "\n";
//
//	// 8����Ʈ��ŭ heap�� ���� �Ҵ�
//	double* pdouble = new double;
//	*pdouble = 3.141592;
//	cout << "�޸��ּ�: " << pdouble << "��: " << *pdouble << "\n";
//	cout << "heap ũ��: " << sizeof(*pdouble) << "\n";
//
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int* pnum = new int[2];
//	delete[] pnum;	// �迭�� ��쿡�� �̷��� ���ȣ�� ǥ���� ��ü�� ����������Ѵ�.
//
//	int num = 3;
//	float* pfloat = nullptr;
//	pfloat = new float[num];
//	
//	for (int i = 0; i < num; i++)
//	{
//		pfloat[i] = i + 1.1;
//		cout << "pfloat[" << i << "] : " << pfloat[i] << " ";
//	}
//	cout << "\n";
//	delete[] pfloat;
//
//	double* pdouble{ new double[5] };
//	delete[] pdouble;
//
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int* pnum = new int(10);
//	cout << "*pnum:\t\t" << *pnum << endl;
//	delete pnum;
//
//	float* pfloat = new float(75.25);
//	cout << "*pfloat:\t" << *pfloat << endl;
//	delete pfloat;
//
//	int* pary1 = new int[3]{};		// 0���� �ʱ�ȭ
//	cout << "pary1[0]:\t" << pary1[0] << endl;
//	delete[] pary1;
//
//	int* pary2{ new int[3] {} };	// 0���� �ʱ�ȭ
//	delete[] pary2;
//
//	char* pary3 = new char[20]{ "Hello, World!" };
//	cout << "part3:\t\t" << pary3 << endl;
//	delete[] pary3;
//
//	int* pary4{ new int[5]{1, 2, 3, 4, 5} };
//	delete[] pary4;
//
//	int num = 6;
//	auto* pary5{ new float[num] { 1.1, 2.2, 3.3, 4.4} };
//	for (int i = 0; i < num; i++)
//	{
//		cout << "pary5[" << i << "]:\t" << pary5[i] << " ";
//	}
//	cout << endl;
//	delete[] pary5;
//
//	return 0;
//}


// �����ڰ� ��������ٴ� ���� ��ü�� ���� �ƴٴ� ��
//class Test
//{
//public:
//	Test()
//	{
//		std::cout << "Test ������ ȣ���!\n";
//	}
//};
//
//int main()
//{
//	Test* ptest = new Test;
//	delete ptest;
//	return 0;
//}

//using namespace std;
//
//class Test
//{
//	int num1;
//public:
//	Test() : num1(3)
//	{
//		cout << "Test ������ ȣ��� num1:\t" << num1 << endl;
//	}
//	Test(int num1) : num1(num1)
//	{
//		cout << "Test ������ ȣ��� num1:\t" << num1 << endl;
//	}
//};
//
//int main()
//{
//	Test* ptest1 = new Test;
//	Test* ptest2 = new Test(10);
//	delete ptest1;
//	delete ptest2;
//	
//	return 0;
//}

//using namespace std;
//
//class Human
//{
//private:
//	int age;
//	char name[10];
//	char hobby[20];
//public:
//	Human(int _age, char* _name, char* _hobby) : age(_age)
//	{
//		strcpy(name, _name);
//		strcpy(hobby, _hobby);
//	}
//	void getup()
//	{
//		cout << "���!" << endl;
//	}
//	void sleep()
//	{
//		cout << "��ħ!" << endl;
//	}
//	void eat()
//	{
//		cout << "�Ļ�!" << endl;
//	}
//	void study()
//	{
//		cout << "����!" << endl;
//	}
//	void showInfo()
//	{
//		cout << "�̸�: " << name << endl;
//		cout << "����: " << age << endl;
//		cout << "���: " << hobby << endl;
//	}
//};
//
//class Student : public Human
//{
//private:
//	char school[30];
//public:
//	Student(int _age, char* _name, char* _hobby, char* _school) : Human(_age, _name, _hobby)
//	{
//		strcpy(school, _school);
//	}
//	void schoolInfo()
//	{
//		showInfo();
//		cout << "�Ҽ� �б�: " << school << endl;
//	}
//};
//
//int main()
//{
//	Student stu(18, "��ö��", "���α׷���", "�����ð���б�");
//
//	stu.schoolInfo();
//	stu.getup();
//	stu.eat();
//	stu.study();
//	stu.sleep();
//
//	return 0;
//}

//using namespace std;
//
//class A
//{
//private:
//	int a;
//	int b;
//public:
//	A(int _a, int _b)
//	{
//		a = _a;
//		b = _b;
//	}
//	int add()
//	{
//		return a + b;
//	}
//};
//
//class B : A
//{
//public :
//	B(int _a, int _b) : A(_a, _b) {}
//	void printResult()
//	{
//		// A�� ��� �޾ұ� ������ �θ� Ŭ������ add��� �޼ҵ带 ����� �� ����.
//		cout << add();
//	}
//};
//
//int main()
//{
//	B b(1, 2);
//	b.printResult();
//
//	return 0;
//}

//using namespace std;
//
//class A
//{
//private:
//	int a;
//	int b;
//public:
//	void setA(int _a)
//	{
//		if (_a > 50)
//		{
//			_a = 50;
//		}
//		a = _a;
//	}
//	void setB(int _b)
//	{
//		if (_b > 100)
//		{
//			_b = 100;
//		}
//		b = _b;
//	}
//	int getA()
//	{
//		return a;
//	}
//	int getB()
//	{
//		return b;
//	}
//};
//
//class B : public A
//{
//public:
//	void setAB(int a, int b)
//	{
//		setA(a);
//		setB(b);
//	}
//	void printResult()
//	{
//		cout << getA() + getB();
//	}
//};
//
//int main()
//{
//	B b;
//	b.setAB(100, 200);
//	b.printResult();
//
//	return 0;
//}

//class Animal
//{
//private:
//	int food;
//	int weight;
//
//public:
//	void set_animal(int _food, int _weight)
//	{
//		food = _food;
//		weight = _weight;
//	}
//	void increase_food(int inc)
//	{
//		food += inc;
//		weight += (inc / 3);
//	}
//	void view_stat()
//	{
//		std::cout << "�� ������ food		: " << food << std::endl;
//		std::cout << "�� ������ weight	: " << weight << std::endl;
//	}
//};
//
//int main()
//{
//	Animal animal;
//	animal.set_animal(100, 50);
//	animal.increase_food(30);
//
//	animal.view_stat();
//
//	return 0;
//}

//class Base
//{
//public:
//	std::string ps;
//
//
//	Base() : ps("���") { std::cout << "��� Ŭ����" << std::endl; }
//	
//	void what() { std::cout << ps << std::endl; }
//};
//
//class Derived : public Base
//{
//private:
//	std::string cs;
//public:
//	Derived() : Base(), cs("�Ļ�")
//	{
//		std::cout << "�Ļ� Ŭ����" << std::endl;
//		what();
//		ps = "�ٲٱ�";
//	}
//	void what() { std::cout << cs << std::endl; }
//};
//
//int main()
//{
//	std::cout << " === ��� Ŭ���� ���� === " << std::endl;
//	Base p;
//	std::cout << 
//
//	std::cout << " === �Ļ� Ŭ���� ���� === " << std::endl;
//	Derived c;
//	c.
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//class Base
//{
//private:
//	std::string s;
//
//public:
//	Base() : s("���") { std::cout << "��� Ŭ����" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//class Derived : public Base
//{
//private:
//	std::string s;
//
//public:
//	Derived() : s("�Ļ�"), Base() { std::cout << "�Ļ� Ŭ����" << std::endl; }
//	void what() { std::cout << s << std::endl; }
//};
//
//int main()
//{
//	Base p;
//	Derived c;
//
//	std::cout << "=== ������ ���� ===" << std::endl;
//	Base* p_c = &c;
//	p_c->what();
//
//	return 0;
//}

// ����ü���� ��ü�������α׷����� ���ʸ� ưư�� ����!!

#include <iostream>
#include <Windows.h>

