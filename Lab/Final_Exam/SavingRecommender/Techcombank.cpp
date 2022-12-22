#include "Techcombank.h"

Techcombank::Techcombank()
{
    this->term = 0;
    this->month = 0;
    this->deposit = 0;
    this->_name = "Techcombank";
}
Techcombank::Techcombank(vector<double> inter)
{
    this->_name = "Techcombank";
    this->_interest = inter;
}
Techcombank::Techcombank(vector<double> inter, int ter, int mon, double depo)
{
    this->_name = "Techcombank";
    this->_interest = inter;
    this->term = ter;
    this->month = mon;
    this->deposit = depo;
}
string Techcombank::toString()
{
    return "Techcombank";
}