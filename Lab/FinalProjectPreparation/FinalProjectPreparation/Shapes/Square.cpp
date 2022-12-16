#include "Square.h"

Square::Square(float ed)
{
    edge = ed;
}

float Square::area()
{
    return edge * edge;
}

float Square::perimeter()
{
    return edge * 4;
}

string Square::toString()
{
    string res = "";
    string str1 = to_string(this->edge);
    str1.erase(str1.find_last_not_of('0') + 1, std::string::npos);
    str1.erase(str1.find_last_not_of('.') + 1, std::string::npos);
    res += "Square a=" + str1;
    return res;
}