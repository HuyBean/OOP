#include "DailyEmployee.h"

DailyEmployee::DailyEmployee()
{
    this->_dayCount = 0;
    this->_paymentPerDay = 0;
}

DailyEmployee::DailyEmployee(int d, int p)
{
    this->_dayCount = d;
    this->_paymentPerDay = p;
}

DailyEmployee::DailyEmployee(const DailyEmployee &DE)
{
    this->_dayCount = DE._paymentPerDay;
    this->_paymentPerDay = DE._paymentPerDay;
}

DailyEmployee &DailyEmployee::operator=(DailyEmployee DE)
{
    this->_dayCount = DE._paymentPerDay;
    this->_paymentPerDay = DE._paymentPerDay;
    return *this;
}

string DailyEmployee::salary()
{

    int sal = this->_dayCount * this->_paymentPerDay;
    Integer *a = new Integer(sal);
    IntegerToCurrencyConverter I;
    return I.convert(a);
}
string DailyEmployee::toString()
{
    return "Daily employee";
}