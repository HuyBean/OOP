#ifndef HOTEL
#define HOTEL

#include "Type_A.h"
#include "Type_B.h"
#include "Type_C.h"

class Hotel
{
private:
    vector<Room *> roomList;

public:
    void inputRoomList()
    {
        int number;
        int type = 0;
        cout << "Input number of Room: \n";
        cin >> number;
        this->roomList.resize(number);
        for (int i = 0; i < number; i++)
        {
            cout << "Select type of Room: \n[1] Type-A\n[2] Type-B\n[3] Type-C\n";
            cin >> type;
            Room *tmp;
            if (type == 1)
            {
                tmp = new Type_A;
            }
            else if (type == 2)
            {
                tmp = new Type_B;
            }
            else if (type == 3)
            {
                tmp = new Type_C;
            }
            tmp->input();
            roomList[i] = tmp;
        }
    }
    double calcTotalPrice()
    {
        double sum = 0;
        for (int i = 0; i < this->roomList.size(); i++)
        {
            sum += roomList[i]->rentingPrice();
        }
        return sum;
    }
};
#endif