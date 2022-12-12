#ifndef COMPANY_LAND
#define COMPANY_LAND

#include "Rectangle.h"
#include "Trapezoid.h"

class Company
{
private:
    vector<Land *> landList;

public:
    void inputLandList()
    {
        int number;
        int type = 0;
        cout << "Input number of Land: \n";
        cin >> number;
        this->landList.resize(number);
        for (int i = 0; i < number; i++)
        {
            cout << "Select type of Land: \n[1] Rectangle\n[2] Trapezoid\n";
            cin >> type;
            Land *tmp;
            if (type == 1)
            {
                tmp = new Rectangle;
            }
            else if (type == 2)
            {
                tmp = new Trapezoid;
            }
            tmp->input();
            landList[i] = tmp;
        }
    }
    double calcTotalArea()
    {
        double sum = 0;
        for (int i = 0; i < landList.size(); i++)
        {
            sum += landList[i]->area();
        }
        return sum;
    }
    double calcPriceAllLand()
    {
        double sum = 0;
        for (int i = 0; i < landList.size(); i++)
        {
            sum += landList[i]->price();
        }
        return sum;
    }
};

#endif