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
    int salary()
    {
        return this->_dayCount * this->_paymentPerDay;
    }
    string toString()
    {
        return "Manager";
    }
};
#endif