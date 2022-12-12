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
        stringstream ss;
        int set = 0;
        if(this->_radius != (int) this->_radius)
        {
            set = 2;
        }
        ss << "Circle r= "<<fixed<<setprecision(set)<<this->_radius;
        return ss.str();
    }
};