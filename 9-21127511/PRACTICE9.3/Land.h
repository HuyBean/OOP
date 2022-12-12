#ifndef LAND
#define LAND

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Land
{
private:
    string _code;
    double _price;

public:
    virtual void input()
    {
        cout << "\nInput code land: ";
        cin >> this->_code;
        cout << "\nInput price land per square meter: ";
        cin >> this->_price;
    }
    virtual double area() = 0;
    virtual double price()
    {
        return area() * _price;
    }
};

#endif