/*
Q2. ������ �����ϴ� Rectangle2D Ŭ������ �����϶�.
    - ���簢���� �߽��� ��Ÿ���� x,y �ΰ��� double ������ �ʵ�,
      �̿� ���� get ����Լ��� set �Լ�, �簢���� ���� x��� y�࿡
      ������ ������ �����Ѵ�.
    - double ������ �ʵ� width,  height�� �̿� ���� get ��� �Լ��� set�Լ�
    - (x,y)�� (0,0), width �� height�� ��� 1�� �⺻ ���簢���� �����ϴ�
      �μ� ���� ������
    - ������ x, y, width, height�� ���簢���� �����ϴ� ������
    - ���簢���� ������ ��ȯ�ϴ� getArea() ��� �Լ�
    - ���簢���� �ѷ��� ��ȯ�ϴ� getPerimeter() ��� �Լ�
    - ������ ��(x,y)�� ������ ���簢���� ���ο� ���� ���, true�� ��ȯ�ϴ�
      contains(double x, double y) ����Լ�
    - ������ ���簢���� ������ ���簢�� ���ο� ���� ���, true�� ��ȯ�ϴ�
      contains(const Rectangle2D& r) ����Լ�
    - ������ ���簢���� ������ ���簢���� ��ø�Ǵ� ���, true�� ��ȯ�ϴ�
      overlaps(const Rectangle2D& r) ����Լ�
    Ŭ������ ���� UML ���̾�׷��� �׸���, Ŭ������ �����Ͽ���.
    ������ Rectangle2D ��ü r1(2, 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2),
    r3(3, 5, 2.3, 5.4)�� �����ϰ�, r1�� ������ �ѷ��� ȭ�鿡 ����ϸ�,
    r1.contains(3,3), r1.contains(r2), r1.overkaos(r3)�� ����� ȭ�鿡
    ����ϴ� �׽�Ʈ ���α׷��� �ۼ��϶�.
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