#ifndef VIETCOMBANK
#define VIETCOMBANK

#include "Bank.h"

class Vietcombank : public Bank
{
public:
    Vietcombank()
    {
        this->term = 0;
        this->month = 0;
        this->deposit = 0;
        this->_name = "Vietcombank";
    }
    Vietcombank(vector<double> inter)
    {
        this->_name = "Vietcombank";
        this->_interest = inter;
    }
    Vietcombank(vector<double> inter, int ter, int mon, double depo)
    {
        this->_name = "Vietcombank";
        this->_interest = inter;
        this->term = ter;
        this->month = mon;
        this->deposit = depo;
    }
    string toString()
    {
        return "Vietcombank";
    }
};

#endif