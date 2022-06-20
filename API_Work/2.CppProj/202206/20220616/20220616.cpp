// smartptrs.cpp -- 세 개의 스마트 포인터들을 사용
// C++11 shared_ptr과 unique_ptr 클래스를 지원해야 함
//#include <iostream>
//#include <string>
//#include <memory>
//
//class Report
//{
//private:
//	std::string str;
//public:
//	Report(const std::string s) : str(s) { std::cout << "객체가 생성되었습니다!\n"; }
//	~Report() { std::cout << "객체가 삭제되었습니다!\n"; }
//	void comment() const { std::cout << str << "\n"; }
//};
//
//int main()
//{
//	{
//		std::auto_ptr<Report> ps(new Report("auto_ptr"));
//		ps->comment();	// 멤버 함수를 적용하기 위해 ->를 사용
//	}
//	{
//		std::shared_ptr<Report> ps(new Report("shared_ptr"));
//		ps->comment();
//	}
//	{
//		std::unique_ptr<Report> ps(new Report("unique_ptr"));
//		ps->comment();
//	}
//	return 0;
//}

//for (vector<int>::iterator it = vec1. begin();
//	it != vec1.end();
//	it++)

//// vec2.cpp -- 메서드와 이터레이터
//#include <iostream>
//#include <string>
//#include <vector>
//
//struct Review {
//	std::string title;
//	int rating;
//};
//bool FillReview(Review& rr);
//void ShowReview(const Review& rr);
//
//int main()
//{
//	using std::cout;
//	using std::vector;
//	vector<Review> books;
//	Review temp;
//	while (FillReview(temp))
//		books.push_back(temp);
//	int num = books.size();
//	if (num > 0)
//	{
//		cout << "감사합니다. 당신은 다음과 같이 입력하셨습니다.\n"
//			<< "등급\t제목\n";
//		for (int i = 0; i < num; i++)
//			ShowReview(books[i]);
//		cout << "한번 더 출력한다:\n"
//			<< "등급\t제목\n";
//		vector<Review>::iterator pr;
//		for (pr = books.begin(); pr != books.end(); pr++)
//			ShowReview(*pr);
//		vector<Review> oldlist(books);	//복사 생성자를 사용한다.
//		if (num > 3)
//		{
//			// 원소 2개를 삭제한다
//			books.erase(books.begin() + 1, books.begin() + 3);
//			cout << "삭제한 후: \n";
//			for (pr = books.begin(); pr != books.end(); pr++)
//				ShowReview(*pr);
//			// 원소 1개를 삽입한다.
//			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
//			cout << "삽입한 후: \n";
//			for (pr = books.begin(); pr != books.end(); pr++)
//				ShowReview(*pr);
//		}
//		books.swap(oldlist);
//		cout << "oldlist와 book를 교환한 후: \n";
//		for (pr = books.begin(); pr != books.end(); pr++)
//			ShowReview(*pr);
//	}
//	else
//		cout << "입력한 것이 없어, 얻은 것이 없습니다.\n";
//	return 0;
//}
//
//bool FillReview(Review& rr)
//{
//	std::cout << "책 제목을 입력하십시오(끝내려면 quit를 입력): ";
//	std::getline(std::cin, rr.title);
//	if (rr.title == "quit")
//		return false;
//	std::cout << "책 등급(0-10)을 입력하십시오: ";
//	std::cin >> rr.rating;
//	if (!std::cin)
//		return false;
//	//남은 입력줄을 제거한다
//	while (std::cin.get() != '\n')
//		continue;
//	return true;
//}
//
//void ShowReview(const Review& rr)
//{
//	std::cout << rr.rating << "\t" << rr.title << "\n";
//}

//srand(clock());
//random_shuffle(vec1.begin), vec1.end());

//// copyit.cpp -- copy()와 이터레이터를 사용한다
//#include <iostream>
//#include <iterator>
//#include <vector>
//
//int main()
//{
//	using namespace std;
//	
//	int casts[10] = { 6,7,2,9,4,11,8,7,10,5 };
//	vector<int> dice(10);
//	// 배열에서 벡터로 복사한다
//	copy(casts, casts + 10, dice.begin());
//	cout << "주사위를 던져라!\n";
//	// ostream 이터레이터를 생성한다
//	ostream_iterator<int, char> out_iter(cout, " ");
//	// 벡터에서 출력 스트림으로 복사한다
//	copy(dice.begin(), dice.end(), out_iter);
//	cout << endl;
//	cout << "역방향 이터레이터의 암시적 사용: \n";
//	copy(dice.rbegin(), dice.rend(), out_iter);
//	cout << endl;
//	cout << "역방향 이터레이터의 명시적 사용: \n";
//	vector<int>::reverse_iterator ri;
//	for (ri = dice.rbegin(); ri != dice.rend(); ++ri)
//		cout << *ri << ' ';
//	cout << endl;
//
//	return 0;
//}

// inserts.cpp -- copy()와 삽입 이터레이터들을 사용한다.
//#include <iostream>
//#include <string>
//#include <iterator>
//#include <vector>
//#include <algorithm>
//
//void output(const std::string& s) { std::cout << s << " "; }
//
//int main()
//{
//	using namespace std;
//	string s1[4] = { "fine", "fish", "fashion", "fate" };
//	string s2[2] = { "busy", "bats" };
//	string s3[2] = { "silly", "singers" };
//	vector<string> words(4);
//	copy(s1, s1 + 4, words.begin());
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//
//	// 익명의 back_insert_iterator 객체를 생성한다
//	copy(s2, s2 + 2, back_insert_iterator<vector<string>>(words));
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//
//	// 익명의 insert_iterator 객체를 생성한다
//	copy(s3, s3 + 2, insert_iterator<vector<string>>(words, words.begin()));
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//	return 0;
//}