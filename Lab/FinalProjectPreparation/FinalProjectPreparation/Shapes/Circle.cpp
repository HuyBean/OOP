#include "Circle.h"

Circle::Circle(float radius)
{
    this->radius = radius;
}

float Circle::area()
{
    return 3.14 * radius * radius;
}

float Circle::perimeter()
{
    return 2 * 3.14 * radius;
}

string Circle::toString()
{
    string res = "";

    string str1 = to_string(this->radius);

    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);
    res += "Circle r=" + str1;
    return res;
}