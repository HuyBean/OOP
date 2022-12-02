#pragma 1
#include "Shape.h"

class Rectangle : public Shape
{
private:
    Point top_left;
    Point bottom_right;

public:
    Rectangle()
    {
        top_left = Point(0, 0);
        bottom_right = Point(0, 0);
    }
    Rectangle(Point topleft, Point bottomright)
    {
        top_left = topleft;
        bottom_right = bottomright;
    }
    void printInfo()
    {
        cout << "\nRectangle: \n\tTop left: " << this->top_left << "\n\tBottom Right: " << this->bottom_right;
    }
};