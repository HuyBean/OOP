#include "Rectangle.h"

Rectangle::Rectangle(float width, float length)
{
    this->length = length;
    this->width = width;
}

float Rectangle::area()
{
    return length * width;
}

float Rectangle::perimeter()
{
    return (length + width) * 2;
}

string Rectangle::toString()
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