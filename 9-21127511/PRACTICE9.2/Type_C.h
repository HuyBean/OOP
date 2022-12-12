#ifndef TYPE_C
#define TYPE_C

#include "Room.h"

class Type_C : public Room
{
public:
    void input()
    {
        cout << "Input information for room Type C: \n";
        Room::input();
        this->_unit = 100;
    }
    double rentingPrice()
    {
        double price = Room::rentingPrice();
        return price;
    }
};
#endif