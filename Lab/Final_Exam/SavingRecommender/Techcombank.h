#ifndef TECHOMBANK
#define TECHCOMBANK

#include "Bank.h"

class Techcombank : public Bank
{
public:
    Techcombank();
    Techcombank(vector<double> inter);
    Techcombank(vector<double> inter, int ter, int mon, double depo);
    string toString();
};

#endif