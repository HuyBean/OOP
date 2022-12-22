#include "Agribank.h"

Agribank::Agribank()
{
    this->term = 0;
    this->month = 0;
    this->deposit = 0;
    this->_name = "Agribank";
}
Agribank::Agribank(vector<double> inter)
{
    this->_name = "Agribank";
    this->_interest = inter;
}
Agribank::Agribank(vector<double> inter, int ter, int mon, double depo)
{
    this->_name = "Agribank";
    this->_interest = inter;
    this->term = ter;
    this->month = mon;
    this->deposit = depo;
}
string Agribank::toString()
{
    return "Agribank";
}