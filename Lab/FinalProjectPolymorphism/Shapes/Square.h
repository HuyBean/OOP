#pragma once
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
        stringstream ss;
        int set = 0;
        if (this->_a != (int)this->_a)
        {
            set = 2;
        }
        ss << "Square a= " << fixed << setprecision(set) << this->_a;
        return ss.str();
    }
};