#include "Vietcombank.h"

Vietcombank::Vietcombank()
{
    this->term = 0;
    this->month = 0;
    this->deposit = 0;
    this->_name = "Vietcombank";
}
Vietcombank::Vietcombank(vector<double> inter)
{
    this->_name = "Vietcombank";
    this->_interest = inter;
}
Vietcombank::Vietcombank(vector<double> inter, int ter, int mon, double depo)
{
    this->_name = "Vietcombank";
    this->_interest = inter;
    this->term = ter;
    this->month = mon;
    this->deposit = depo;
}
string Vietcombank::toString()
{
    return "Vietcombank";
}