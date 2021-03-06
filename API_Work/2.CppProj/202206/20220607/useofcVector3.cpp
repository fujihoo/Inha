/*
Q.벡터 연산을 구현하시오

1. u = (-1, 3, 2)이고 v = (3, -4, 1)이라고 할 때
   다음 계산을 수행하라.
   (a) u + v
   (b) u - v
   (c) 3u + 2v
   (d) -2u + v

2. u = (-1,3,2)이고 v = (3, -4, 1)이라고 할 때 u와 v를 정규화하라.

3. 다음 벡터들 사이의 각을 구하라.
   (a) u = ( 1, 1, 1), v = ( 2, 3, 4)
   (b) u = ( 1, 1, 0), v = (-2, 2, 0)
   (c) u = (-1,-1,-1), v = ( 3, 1, 0)

4. 어떤 좌표계를 기준으로 점 A = (0,0,0), B = (0,1,3), C = (5,1,0)이
   하나의 삼각형을 정의한다고 하자. 이 삼각형의 수직인 벡터를 구하라.
*/

#include "cVector3.h"

using namespace std;

int main()
{	
	cVector3 vec1(-1, 3, 2);
	cVector3 vec2(3, -4, 1);

	cout << "Q1.(a)\t" << "u + v = (x, y, z)" << vec1 + vec2;
	cout << "Q1.(b)\t" << "u - v = (x, y, z)" << vec1 - vec2;
	cout << "Q1.(c)\t" << "3u + 2v = (x, y, z)" << (vec1 * 3) + (vec2 * 2);
	cout << "Q1.(d)\t" << "-2u + v = (x, y, z)" << (-2 * vec1) + vec2;

	cout << "Q2.\t" << "u = (-1, 3, 2)이고 v = (3, -4, 1)일 때 " << 


	return 0;
}