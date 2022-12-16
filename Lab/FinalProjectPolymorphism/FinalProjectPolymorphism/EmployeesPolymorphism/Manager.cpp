#include "Manager.h"


Manager::Manager()
{
    this->_employeeCount = 0;
    this->_paymentPerEmployee = 0;
    this->_baseSalary = 0;
}

Manager::Manager(int e, int p, int b)
{
    this->_employeeCount = e;
    this->_paymentPerEmployee = p;
    this->_baseSalary = b;
}

Manager::Manager(const Manager &Mn)
{
    this->_employeeCount = Mn._employeeCount;
    this->_paymentPerEmployee = Mn._paymentPerEmployee;
    this->_baseSalary = Mn._baseSalary;
}

Manager &Manager::operator=(const Manager &Mn)
{
    this->_employeeCount = Mn._employeeCount;
    this->_paymentPerEmployee = Mn._paymentPerEmployee;
    this->_baseSalary = Mn._baseSalary;
    return *this;
}

string Manager::salary()
{
    int sal = this->_employeeCount * this->_paymentPerEmployee + this->_baseSalary;
    Integer *a = new Integer(sal);
    IntegerToCurrencyConverter I;
    return I.convert(a);
}
string Manager::toString()
{
    return "Manager";
}