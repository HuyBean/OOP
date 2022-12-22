#ifndef VIETCOMBANK
#define VIETCOMBANK

#include "Bank.h"

class Vietcombank : public Bank
{
public:
    Vietcombank();
    Vietcombank(vector<double> inter);
    Vietcombank(vector<double> inter, int ter, int mon, double depo);
    string toString();
};

#endif