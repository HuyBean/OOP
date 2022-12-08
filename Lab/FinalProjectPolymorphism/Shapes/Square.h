#pragma 1
#include "IShape.h"
// #include "IParsable.h"

class Square : public IShape
{
private:
    double _a;

public:
    Square()
    {
        this->_a = 0;
    }
    Square(double a)
    {
        this->_a = a;
    }
    Square(const Square &S)
    {
        this->_a = S._a;
    }
    double area()
    {
        return this->_a * this->_a;
    }
    double perimeter()
    {
        return this->_a * 4;
    }
    string toString()
    {
        string res = "Square a=";
        return res += to_string(this->_a);
    }
};