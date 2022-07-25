#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

// 포인터의 개념이 헷갈려 다시 공부

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
//	cout << "포인터 p가 가리키는 값 : " << p << "\n";
//	cout << "num의 값 : " << num << "\n";
//
//	*p += 5;
//	cout << "포인터 p가 가리키는 값 : " << p << "\n";
//	cout << "num의 값 : " << num << "\n";
//
//	(*p)++;
//	cout << "포인터 p가 가리키는 값 : " << p << "\n";
//	cout << "num의 값 : " << num << "\n";
//
//	*p = *(p++);
//	cout << "포인터 p가 가리키는 값 : " << p << "\n";
//	cout << "num의 값 : " << num << "\n";
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
//	cout << "num의 값 : " << num << "\n";
//
//	numPlus(num);
//	cout << "numPlus 사용 후 : " << num << "\n";
//
//	pointerPlus(&num);
//	cout << "pointerPlus 사용 후 : " << num << "\n";
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
	//	cout << "groom의 학번: " << goorm.s_id << ", 나이: " << goorm.age << "\n";
	//
	//	return 0;
	//}

	// 중첩 구조체
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

	// 자기 참조 구조체
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
//	cout << "학번 : " << s.s_id << ", 나이 : " << s.age << "\n";
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
//	cout << "학번 : " << s.s_id << ", 나이 : " << s.age << "\n";
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
//	cout << "학번 : " << (*s).s_id << ", 나이 : " << (*s).age << "\n";
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
//	cout << "학번 : " << s.s_id << ", 나이 : " << s.age << "\n";
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int* iptr;
//	int n = 5;
//
//	iptr = (int*)malloc(n * sizeof(int));	// 메모리 할당
//	if (iptr == NULL)
//	{
//		cout << "Memory allocation error.\n";
//		exit(0);
//	}
//
//	cout << "포인터 변수 크기: " << sizeof(iptr) << "\n";
//	cout << "메모리 크기: " << _msize(iptr);
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
//	iptr = (int*)calloc(n, sizeof(int));	// 메모리 할당
//	if (iptr == NULL)
//	{
//		cout << "Memory allocation error.\n";
//		exit(0);
//	}
//
//	cout << "포인터 변수 크기: " << sizeof(iptr) << "\n";
//	cout << "메모리 크기: " << _msize(iptr);
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
//	iptr = (int*)calloc(n, sizeof(int));	// 메모리 할당
//	if (iptr == NULL)
//	{
//		cout << "Memory allocation error.\n";
//		exit(0);
//	}
//
//	cout << "메모리 크기: " << _msize(iptr);
//
//	iptr2 = (int*)realloc(iptr, 10 * sizeof(int));
//	if (iptr == NULL)
//	{
//		cout << "Memory allocation error.\n";
//		exit(0);
//	}
//
//	cout << "메모리 크기: " << _msize(iptr);
//
//	free(iptr);
//
//	return 0;
//}

//int main()
//{
//	using namespace std;
//
//	// 1바이트만큼 heap에 공간 할당
//	char* pchar = new char;
//	*pchar = 'a';
//	cout << "메모리주소: " << (void*)pchar << "값: " << *pchar << "\n";
//	cout << "heap 크기: " << sizeof(*pchar) << "\n";
//	delete pchar;
//
//	// 4바이트만큼 heap에 공간 할당
//	int* pnum = new int;
//	*pnum = 3;
//	cout << "메모리주소: " << pnum << "값: " << *pnum << "\n";
//	cout << "heap 크기: " << sizeof(*pnum) << "\n";
//
//	// 4바이트만큼 heap에 공간 할당
//	float *pfloat = new float;
//	*pfloat = 3.14;
//	cout << "메모리주소: " << pfloat << "값: " << *pfloat << "\n";
//	cout << "heap 크기: " << sizeof(*pfloat) << "\n";
//
//	// 8바이트만큼 heap에 공간 할당
//	double* pdouble = new double;
//	*pdouble = 3.141592;
//	cout << "메모리주소: " << pdouble << "값: " << *pdouble << "\n";
//	cout << "heap 크기: " << sizeof(*pdouble) << "\n";
//
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int* pnum = new int[2];
//	delete[] pnum;	// 배열의 경우에는 이렇게 대괄호를 표시해 전체를 해제해줘야한다.
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
//	int* pary1 = new int[3]{};		// 0으로 초기화
//	cout << "pary1[0]:\t" << pary1[0] << endl;
//	delete[] pary1;
//
//	int* pary2{ new int[3] {} };	// 0으로 초기화
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


// 생성자가 만들어졌다는 것은 객체가 생성 됐다는 뜻
//class Test
//{
//public:
//	Test()
//	{
//		std::cout << "Test 생성자 호출됨!\n";
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
//		cout << "Test 생성자 호출됨 num1:\t" << num1 << endl;
//	}
//	Test(int num1) : num1(num1)
//	{
//		cout << "Test 생성자 호출됨 num1:\t" << num1 << endl;
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
//		cout << "기상!" << endl;
//	}
//	void sleep()
//	{
//		cout << "취침!" << endl;
//	}
//	void eat()
//	{
//		cout << "식사!" << endl;
//	}
//	void study()
//	{
//		cout << "공부!" << endl;
//	}
//	void showInfo()
//	{
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//		cout << "취미: " << hobby << endl;
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
//		cout << "소속 학교: " << school << endl;
//	}
//};
//
//int main()
//{
//	Student stu(18, "김철수", "프로그래밍", "씨플플고등학교");
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
//		// A를 상속 받았기 때문에 부모 클래스의 add라는 메소드를 사용할 수 있음.
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
//		std::cout << "이 동물의 food		: " << food << std::endl;
//		std::cout << "이 동물의 weight	: " << weight << std::endl;
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
//	Base() : ps("기반") { std::cout << "기반 클래스" << std::endl; }
//	
//	void what() { std::cout << ps << std::endl; }
//};
//
//class Derived : public Base
//{
//private:
//	std::string cs;
//public:
//	Derived() : Base(), cs("파생")
//	{
//		std::cout << "파생 클래스" << std::endl;
//		what();
//		ps = "바꾸기";
//	}
//	void what() { std::cout << cs << std::endl; }
//};
//
//int main()
//{
//	std::cout << " === 기반 클래스 생성 === " << std::endl;
//	Base p;
//	std::cout << 
//
//	std::cout << " === 파생 클래스 생성 === " << std::endl;
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
//	Base() : s("기반") { std::cout << "기반 클래스" << std::endl; }
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
//	Derived() : s("파생"), Base() { std::cout << "파생 클래스" << std::endl; }
//	void what() { std::cout << s << std::endl; }
//};
//
//int main()
//{
//	Base p;
//	Derived c;
//
//	std::cout << "=== 포인터 버전 ===" << std::endl;
//	Base* p_c = &c;
//	p_c->what();
//
//	return 0;
//}

// 구조체부터 객체지향프로그래밍의 기초를 튼튼히 하자!!

#include <iostream>
#include <Windows.h>

