#ifndef ROOM
#define ROOM
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Room
{
public:
    int _dayrent = 0;
    int _unit = 0;
    virtual double rentingPrice()
    {
        double price = _dayrent * _unit;
        return price;
    }
    virtual void input()
    {
        cout << "Input renting day: ";
        cin >> _dayrent;
    }
};
#endif