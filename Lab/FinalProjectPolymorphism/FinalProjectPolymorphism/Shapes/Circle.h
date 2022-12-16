#ifndef CIRCLE
#define CIRCLE
#include "IShape.h"
// #include "IParsable.h"

class Circle : public IShape
{
private:
    double _radius;

public:
    Circle();
    Circle(double r);
    Circle(const Circle &C);
    double area();
    double perimeter();
    string toString();
};

#endif