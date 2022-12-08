#ifndef ISHAPE_H
#define ISHAPE_H
#include "Object.h"

class IShape : public Object
{
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual string toString() = 0;
};

#endif // ISHAPE_H