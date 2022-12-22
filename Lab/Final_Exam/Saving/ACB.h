#ifndef ACB_BANK
#define ACB_BANK
#include "Bank.h"

class ACB : public Bank
{
public:
        ACB()
    {
        this->term = 0;
        this->month = 0;
        this->deposit = 0;
        this->_name = "ACB";
    }
    ACB(vector<double> inter)
    {
        this->_name = "ACB";
        this->_interest = inter;
    }
    ACB(vector<double> inter, int ter, int mon, double depo)
    {
        this->_name = "ACB";
        this->_interest = inter;
        this->term = ter;
        this->month = mon;
        this->deposit = depo;
    }
    string toString()
    {
        return "ACB";
    }
};

#endif