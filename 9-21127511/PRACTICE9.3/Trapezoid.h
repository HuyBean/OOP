#ifndef TRAPEZOID_LAND
#define TRAPEZOID_LAND

#include "Land.h"

class Trapezoid : public Land
{
private:
    double parallel_1;
    double parallel_2;
    double height;

public:
    double area()
    {
        return (this->parallel_1 + this->parallel_2) * this->height * 1.0 / 2.0;
    }
    double price()
    {
        return Land::price() * 95.0 / 100;
    }
    void input()
    {
        Land::input();
        cout << "\nInput parallel size 1: ";
        cin >> this->parallel_1;
        cout << "\nInput parallel size 2: ";
        cin >> this->parallel_2;
        cout << "\nInput height: ";
        cin >> this->height;
    }
};
#endif