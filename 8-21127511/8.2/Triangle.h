#include "Shape.h"
#pragma 1

class Triangle : public Shape
{
private:
    Point P_1;
    Point P_2;
    Point P_3;

public:
    Triangle()
    {
        P_1 = Point(0, 0);
        P_2 = Point(0, 0);
        P_3 = Point(0, 0);
    }
    Triangle(Point one, Point two, Point three)
    {
        this->P_1 = one;
        this->P_2 = two;
        this->P_3 = three;
    }
    void printInfo()
    {
        cout << "\nTriangle: \n\tPoint 1: " << this->P_1 << "\n\tPoint 2: " << this->P_2 << "\n\tPoint 3: " << this->P_3;
    }
};
