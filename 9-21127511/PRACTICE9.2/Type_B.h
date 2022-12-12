#ifndef TYPE_B
#define TYPE_B

#include "Room.h"

class Type_B : public Room
{
public:
    void input()
    {
        cout << "Input information for room Type B: \n";
        Room::input();
        this->_unit = 200;
    }
    double rentingPrice()
    {
        double price = Room::rentingPrice();
        if (this->_dayrent > 9)
        {
            price = this->_unit * 9 + ((this->_dayrent - 9) * this->_unit * 10.0 / 100);
        }
        return price;
    }
};

#endif