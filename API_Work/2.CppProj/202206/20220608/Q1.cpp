#define _CRT_SECURE_NO_WARRIORS
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

class circle2D
{
private:
    double x, y, radius;
public:
    circle2D() { x = 0, y = 0, radius = 1; };
    ~circle2D() {};
    circle2D(double px, double py, double r) { x = px, y = py, radius = r; };
    double getX() { return x; };
    double getY() { return y; };
    double getR() { return radius; };
    double getArea() { return M_PI * radius * radius; }
    double getPerimeter() { return M_PI * radius * 2; };
    bool contains(double x, double y) { return sqrt(pow(this->x - x, 2) + pow(this->y - y, 2)) <= radius; };
    bool contains(const circle2D& circle) { return sqrt(pow(this->x - circle.x, 2) + pow(this->y - circle.y, 2)) <= radius; };
    bool overlaps(const circle2D& circle);
};

bool circle2D::overlaps(const circle2D& circle)
{
    double distance = sqrt(pow(this->x - circle.x, 2) + pow(this->y - circle.y, 2));
    return (distance < this->radius + circle.radius) && !contains(circle);
}

int main()
{
    using namespace std;
    circle2D c1(2, 2, 5.5), c2(2, 2, 5.5), c3(4, 5, 10.5);
    cout << "c1" << "(" << c1.getX() << "," << c1.getY() << ") => 반지름 : " << c1.getR() << '\n';
    cout << "c2" << "(" << c2.getX() << "," << c2.getY() << ") => 반지름 : " << c2.getR() << '\n';
    cout << "c3" << "(" << c3.getX() << "," << c3.getY() << ") => 반지름 : " << c3.getR() << "\n\n";

    cout << "c1의 면적 : " << c1.getArea() << '\n' << "c1의 둘레: " << c1.getPerimeter() << "\n\n";
    cout << "c1에 (3,3) 포함 여부: ";
    c1.contains(3, 3) ? cout << "TRUE" : cout << "FALSE"; cout << '\n';
    cout << "c1에 c2 포함 여부: ";
    c1.contains(c2) ? cout << "TRUE" : cout << "FALSE"; cout << '\n';
    cout << "c1과 c3의 중첩 여부 : ";
    c1.overlaps(c3) ? cout << "TRUE" : cout << "FALSE"; cout << '\n';

    return 0;
}