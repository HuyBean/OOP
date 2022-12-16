#include "Square.h"

Square::Square()
{
    this->_a = 0;
}
Square::Square(double a)
{
    this->_a = a;
}
Square::Square(const Square &S)
{
    this->_a = S._a;
}
double Square::area()
{
    return this->_a * this->_a;
}
double Square::perimeter()
{
    return this->_a * 4;
}
string Square::toString()
{
    stringstream ss;
    int set = 0;
    if (this->_a != (int)this->_a)
    {
        set = 2;
    }
    ss << "Square a= " << fixed << setprecision(set) << this->_a;
    return ss.str();
}