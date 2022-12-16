#include "Shape.h"

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float radius);
    float area();
    float perimeter();
    string toString();
};