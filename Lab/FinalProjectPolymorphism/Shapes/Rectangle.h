#pragma 1
#include "IShape.h"
// #include "IParsable.h"

class Rectangle : public IShape
{
private:
    double _width;
    double _height;

public:
    Rectangle()
    {
        this->_width = 0;
        this->_height = 0;
    }
    Rectangle(double w, double h)
    {
        this->_width = w;
        this->_height = h;
    }
    Rectangle(const Rectangle &R)
    {
        this->_width = R._width;
        this->_height = R._height;
    }
    double area()
    {
        return this->_height * this->_width;
    }
    double perimeter()
    {
        return (this->_height + this->_width) * 2;
    }
    string toString()
    {
        string res = "Rectangle w=";
        return res += to_string(this->_width) + ", h=" + to_string(this->_height);
    }
};