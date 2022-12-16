#ifndef SQUARE
#define SQUARE

#include "IShape.h"
// #include "IParsable.h"

class Square : public IShape
{
private:
    double _a;

public:
    Square();
    Square(double a);
    Square(const Square &S);
    double area();
    double perimeter();
    string toString();
};

#endif