#include "Rectangle.h"

Rectangle::Rectangle()
{
    this->_width = 0;
    this->_height = 0;
}
Rectangle::Rectangle(double w, double h)
{
    this->_width = w;
    this->_height = h;
}
Rectangle::Rectangle(const Rectangle &R)
{
    this->_width = R._width;
    this->_height = R._height;
}
double Rectangle::area()
{
    return this->_height * this->_width;
}
double Rectangle::perimeter()
{
    return (this->_height + this->_width) * 2;
}
string Rectangle::toString()
{
    stringstream ss;
    int set = 0;
    if (this->_width != (int)this->_width)
    {
        set = 2;
    }
    ss << "Rectangle w=" << fixed << setprecision(set) << this->_width;
    set = 0;
    if (this->_height != (int)this->_height)
    {
        set = 2;
    }
    ss << setprecision(set) << ", h =" << this->_height;
    return ss.str();
}