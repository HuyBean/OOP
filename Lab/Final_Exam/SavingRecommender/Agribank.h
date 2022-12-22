#ifndef AGRIBANK
#define AGRIBANK
#include "Bank.h"

class Agribank : public Bank
{
public:
    Agribank();
    Agribank(vector<double> inter);
    Agribank(vector<double> inter, int ter, int mon, double depo);
    string toString();
};

#endif