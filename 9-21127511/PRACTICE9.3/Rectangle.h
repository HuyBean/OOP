#ifndef RECTANGLE_LAND
#define RECTANGLE_LAND

#include "Land.h"

class Rectangle : public Land
{
private:
    double _height;
    double _width;

public:
    double area()
    {
        return this->_height * this->_width;
    }
    double price()
    {
        return Land::price();
    }
    void input()
    {
        Land::input();
        cout << "\nInput height: ";
        cin >> this->_height;
        cout << "\nInput width: ";
        cin >> this->_width;
    }
};
#endif