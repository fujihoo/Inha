#include "cVector3.h"
//int main()
//{
//	using namespace std;
//	
//	cVector3 vec1(1, 0, 0);
//	cVector3 vec2(0, 1, 0);
//	cVector3 vec3 = cVector3::Cross(vec1, vec2);
//
//	cout << cVector3::Cross(vec1, vec2);
//
//}

cVector3::cVector3()
{

}

cVector3::~cVector3()
{
}

cVector3::cVector3(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

bool cVector3::operator==(cVector3& vec)
{
	if (x == vec.x && y == vec.y && z == vec.z)
	{
		return 1;
	}
}

bool cVector3::operator!=(cVector3& vec)
{
	if (x == vec.x && y == vec.y && z == vec.z)
	{
		return 0;
	}
}

cVector3 cVector3::operator+(cVector3 vec)
{
	cVector3 temp (x + vec.x, y + vec.y, z + vec.z);
	return temp;
}

cVector3 cVector3::operator-(cVector3 vec)
{
	cVector3 temp(x - vec.x, y - vec.y, z - vec.z);
	return temp;
}

cVector3 cVector3::operator*(double d)
{
	cVector3 temp(x * d, y * d, z * d);
	return temp;
}

cVector3 cVector3::operator/(double d)
{
	cVector3 temp(x / d, y / d, z / d);
	return temp;
}

double cVector3::Length()
{
	double temp = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	return temp;
}

cVector3 cVector3::Normalize()
{
	double Length = this->Length();
	cVector3 temp(x / Length, y / Length, z / Length);
	return temp;
}

double cVector3::Dot(cVector3& v1, cVector3& v2)
{
	double temp = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
	return temp;
}

cVector3 cVector3::Cross(cVector3& v1, cVector3& v2)
{
	cVector3 temp(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x);
	return temp;
}

double cVector3::Angle(cVector3& v1, cVector3& v2)
{
	cVector3 v1normal = v1.Normalize();
	cVector3 v2normal = v2.Normalize();
	double _Dot = Dot(v1normal, v2normal);
	double temp1 = acos(_Dot);
	double temp = temp1 * (180 / M_PI);
	return temp;
}

cVector3 operator*(double n, cVector3& a)
{
	return a * n;
}

std::ostream& operator<<(std::ostream& os, const cVector3& v)
{
	os << "(x,y,z) = (" << v.x << ", " << v.y << ", " << v.z << ")";
	return os;
}