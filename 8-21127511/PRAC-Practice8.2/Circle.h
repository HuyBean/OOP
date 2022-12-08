#include "Shape.h"
#pragma 1


class Circle : public Shape
{
private:
    Point center;
    float radius;

public:
    Circle()
    {
        center = Point(0, 0);
        this->radius = 0;
    }
    Circle(Point cente, float rad)
    {
        this->center = cente;
        this->radius = rad;
    }
    void printInfo()
    {
        cout << "\nCircle: \n\tCenter: " << this->center << "\n\tRadius: " << this->radius;
    }
};

