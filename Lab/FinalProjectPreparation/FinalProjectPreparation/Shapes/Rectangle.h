#include "Shape.h"

class Rectangle : public Shape
{
private:
    float length;
    float width;

public:
    Rectangle(float width, float length);
    float area();
    float perimeter();
    string toString();
};