#ifndef MANAGER
#define MANAGER

#include "Employee.h"

class Manager : public Employee
{
private:
    int _employeeCount;
    int _paymentPerEmployee;
    int _baseSalary;

public:
    Manager()
    {
        this->_employeeCount = 0;
        this->_paymentPerEmployee = 0;
        this->_baseSalary = 0;
    }

    Manager(int e, int p, int b)
    {
        this->_employeeCount = e;
        this->_paymentPerEmployee = p;
        this->_baseSalary = b;
    }

    Manager(const Manager &Mn)
    {
        this->_employeeCount = Mn._employeeCount;
        this->_paymentPerEmployee = Mn._paymentPerEmployee;
        this->_baseSalary = Mn._baseSalary;
    }

    Manager &operator=(const Manager &Mn)
    {
        this->_employeeCount = Mn._employeeCount;
        this->_paymentPerEmployee = Mn._paymentPerEmployee;
        this->_baseSalary = Mn._baseSalary;
        return *this;
    }

    string salary()
    {
        int sal = this->_employeeCount * this->_paymentPerEmployee + this->_baseSalary;
        Integer *a = new Integer(sal);
        IntegerToCurrencyConverter I;
        return I.convert(a);
    }
    string toString()
    {
        return "Manager";
    }
};

#endif