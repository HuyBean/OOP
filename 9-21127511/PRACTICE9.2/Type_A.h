#ifndef TYPE_A
#define TYPE_A

#include "Room.h"

enum Service
{
    Buffet = 50,
    Motorbike = 50,
    Pool = 20,
    Massage = 50,
    Gym = 40
};

class Type_A : public Room
{
private:
    double additionalFees;

public:
    void input()
    {
        cout << "Input information for room Type A: \n";
        Room::input();
        this->additionalFees = 0;
        this->_unit = 300;
        char keyboard;
        cout << "\nWould you like to choose additional services?";
        cout << "\n\tMorning Buffet\n[Y]Yes\n[N]No\n";
        cin >> keyboard;
        if (keyboard == 'Y')
        {
            this->additionalFees += Buffet;
        }
        cout << "\n\tRenting motorbike\n[Y]Yes\n[N]No\n";
        cin >> keyboard;
        if (keyboard == 'Y')
        {
            this->additionalFees += Motorbike;
        }
        cout << "\n\tSwimming pool\n[Y]Yes\n[N]No\n";
        cin >> keyboard;
        if (keyboard == 'Y')
        {
            this->additionalFees += Pool;
        }
        cout << "\n\tMassage service\n[Y]Yes\n[N]No\n";
        cin >> keyboard;
        if (keyboard == 'Y')
        {
            this->additionalFees += Massage;
        }
        cout << "\n\tGym club\n[Y]Yes\n[N]No\n";
        cin >> keyboard;
        if (keyboard == 'Y')
        {
            this->additionalFees += Gym;
        }
    }
    double rentingPrice()
    {
        double price = Room::rentingPrice();
        if (this->_dayrent > 9)
        {
            price = this->_unit * 9 + ((this->_dayrent - 9) * this->_unit * 90.0 / 100);
            return price + this->additionalFees;
        }
        return price + this->additionalFees;
    }
};

#endif