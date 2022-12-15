#include "Shape.h"

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float radius)
    {
        this->radius = radius;
    }

    float area()
    {
        return 3.14 * radius * radius;
    }

    float perimeter()
    {
        return 2 * 3.14 * radius;
    }

    string toString()
    {
        string res = "";
        
        string str1 = to_string(this->radius);

        str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
        str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);
        res += "Circle r=" + str1;
        return res;
    }
};