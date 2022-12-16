#include "Circle.h"

Circle::Circle()
{
    this->_radius = 0;
}
Circle::Circle(double r)
{
    this->_radius = r;
}
Circle::Circle(const Circle &C)
{
    this->_radius = C._radius;
}
double Circle::area()
{
    return this->_radius * this->_radius * 3.141592653;
}
double Circle::perimeter()
{
    return this->_radius * 3.141592653 * 2;
}
string Circle::toString()
{
    stringstream ss;
    int set = 0;
    if (this->_radius != (int)this->_radius)
    {
        set = 2;
    }
    ss << "Circle r= " << fixed << setprecision(set) << this->_radius;
    return ss.str();
}