#ifndef RECTANGLE
#define RECTANGLE

#include "IShape.h"
// #include "IParsable.h"

class Rectangle : public IShape
{
private:
    double _width;
    double _height;

public:
    Rectangle();
    Rectangle(double w, double h);
    Rectangle(const Rectangle &R);
    double area();
    double perimeter();
    string toString();
};

#endif