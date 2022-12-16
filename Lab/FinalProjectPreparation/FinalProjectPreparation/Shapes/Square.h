#include "Shape.h"

class Square : public Shape
{
private:
    float edge;

public:
    Square(float ed);
    float area();
    float perimeter();
    string toString();
};