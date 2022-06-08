/*
Q2. 다음을 포함하는 Rectangle2D 클래스를 정의하라.
    - 직사각형의 중심을 나타내는 x,y 두개의 double 데이터 필드,
      이에 대한 get 상수함수와 set 함수, 사각형의 변은 x축과 y축에
      평행인 것으로 가정한다.
    - double 데이터 필드 width,  height와 이에 대한 get 상수 함수와 set함수
    - (x,y)는 (0,0), width 와 height는 모두 1인 기본 직사각형을 생성하는
      인수 없는 생성자
    - 지정된 x, y, width, height로 직사각형을 생성하는 생성자
    - 직사각형의 면적을 반환하는 getArea() 상수 함수
    - 직사각형의 둘레를 반환하는 getPerimeter() 상수 함수
    - 지정된 점(x,y)가 생성된 직사각형의 내부에 있을 경우, true를 반환하는
      contains(double x, double y) 상수함수
    - 지정된 직사각형이 생성된 직사각형 내부에 있을 경우, true를 반환하는
      contains(const Rectangle2D& r) 상수함수
    - 지정된 직사각형이 생성된 직사각형과 중첩되는 경우, true를 반환하는
      overlaps(const Rectangle2D& r) 상수함수
    클래스에 대한 UML 다이어그램을 그리고, 클래스를 구현하여라.
    세개의 Rectangle2D 객체 r1(2, 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2),
    r3(3, 5, 2.3, 5.4)를 생성하고, r1의 면적과 둘레를 화면에 출력하며,
    r1.contains(3,3), r1.contains(r2), r1.overkaos(r3)의 결과를 화면에
    출력하는 테스트 프로그램을 작성하라.
*/

#define _CRT_SECURE_NO_WARRIORS
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

class Rectangle2D
{
private:
    double x, y, width, height;
public:
    Rectangle2D() { x = 0, y = 0, width = 1, height = 1; };
    ~Rectangle2D() {};
    Rectangle2D(double px, double py, double w, double h) { x = px, y = py, width = w, height = h; };
    double getX() { return x; };
    double getY() { return y; };
    double getW() { return width; };
    double geth() { return height; };
    double getArea() { return width * height; };
    double getPerimeter() { return (2 * width) + (2 * height); };
    bool contains(double x, double y)
    {
        return (x <= (this->x - (this->width) / 2.0) && x >= (this->x + (this->width) / 2.0) && y <= (this->y - (this->height) / 2.0) && y <= (this->y - (this->height) / 2.0));
    };
    bool contains(const Rectangle2D& rectangle) {}
};