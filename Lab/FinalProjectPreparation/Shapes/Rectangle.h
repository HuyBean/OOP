#include "Shape.h"

class Rectangle : public Shape
{
private:
    float length;
    float width;

public:
    Rectangle(float width, float length)
    {
        this->length = length;
        this->width = width;
    }

    float area()
    {
        return length * width;
    }

    float perimeter()
    {
        return (length + width) * 2;
    }

    string toString()
    {
        string res = "";
        string str1 = to_string(this->width);
        str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
        str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);

        string str2 = to_string(this->length);
        str2.erase(str2.find_last_not_of('0') + 1, std::string::npos);
        str2.erase(str2.find_last_not_of('.') + 1, std::string::npos);
        res += "Rectangle w=" + str1 + ", h=" + str2;
        return res;
    }
};