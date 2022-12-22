#include "ACB.h"

ACB::ACB()
{
    this->term = 0;
    this->month = 0;
    this->deposit = 0;
    this->_name = "ACB";
}
ACB::ACB(vector<double> inter)
{
    this->_name = "ACB";
    this->_interest = inter;
}
ACB::ACB(vector<double> inter, int ter, int mon, double depo)
{
    this->_name = "ACB";
    this->_interest = inter;
    this->term = ter;
    this->month = mon;
    this->deposit = depo;
}
string ACB::toString()
{
    return "ACB";
}