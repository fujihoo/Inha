#include <iostream>
#include <vector>
#include <algorithm>

int solution(int l, std::vector<int> v);

int main()
{
	std::vector<int> v = { 15, 5, 3, 7, 9, 14, 0 };
	std::cout << solution(15, v) << "\n";
}

int solution(int l, std::vector<int> v)
{
	sort(v.begin(), v.end());
	std::vector<int> v2;

	for (size_t i = 0; i < v.size() - 1; i++)
	{
		v2.push_back(v[i + 1] - v[i]);
	}
	sort(v2.begin(), v2.end());

	return (v2.back() + 1) / 2;
}
//int main()
//{
//	int l = 0;
//	int v[1000] = { NULL };
//	int v2[999] = { NULL };
//
//	cin >> l;
//	for (int i = 0; i < l; i++)
//	{
//		cin >> v[i];
//	}
//	sort(v, v + l);
//
//	for (int i = 0; i < l - 1; i++)
//	{
//		v2[i] = v[i + 1] - v[i];
//	}
//	sort(v2, v2 + (l-1));
//
//	cout << v2[l-2] << "\n";
//	
//	return 0;
//}