#include "IShape.h"
// #include "IParsable.h"

class Circle : public IShape
{
private:
    double _radius;

public:
    Circle()
    {
        this->_radius = 0;
    }
    Circle(double r)
    {
        this->_radius = r;
    }
    Circle(const Circle &C)
    {
        this->_radius = C._radius;
    }
    double area()
    {
        return this->_radius * this->_radius * 3.141592653;
    }
    double perimeter()
    {
        return this->_radius * 3.141592653 * 2;
    }
    string toString()
    {
        string res = "Circle r=";
        return res += to_string(this->_radius);
    }
};