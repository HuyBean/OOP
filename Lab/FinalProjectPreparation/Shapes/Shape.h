#ifndef SHAPE
#define SHAPE
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
    virtual string toString()
    {
        string res = "Shape";
        return res;
    }
};
#endif