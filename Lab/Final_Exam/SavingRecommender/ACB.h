#ifndef ACB_BANK
#define ACB_BANK
#include "Bank.h"

class ACB : public Bank
{
public:
    ACB();
    ACB(vector<double> inter);
    ACB(vector<double> inter, int ter, int mon, double depo);
    string toString();
};

#endif