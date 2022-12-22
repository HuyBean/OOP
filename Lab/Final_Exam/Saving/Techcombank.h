#ifndef TECHOMBANK
#define TECHCOMBANK

#include "Bank.h"

class Techcombank : public Bank
{
public:
    Techcombank()
    {
        this->term = 0;
        this->month = 0;
        this->deposit = 0;
        this->_name = "Techcombank";
    }
    Techcombank(vector<double> inter)
    {
        this->_name = "Techcombank";
        this->_interest = inter;
    }
    Techcombank(vector<double> inter, int ter, int mon, double depo)
    {
        this->_name = "Techcombank";
        this->_interest = inter;
        this->term = ter;
        this->month = mon;
        this->deposit = depo;
    }
    string toString()
    {
        return "Techcombank";
    }
};

#endif