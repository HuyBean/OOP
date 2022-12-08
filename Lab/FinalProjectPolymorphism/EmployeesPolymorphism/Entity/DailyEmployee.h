#ifndef DAILY_EMPLOYEE
#define DAILY_EMPLOYEE

#include "Employee.h"

class DailyEmployee : public Employee
{
private:
    int _dayCount;
    int _paymentPerDay;

public:
    int salary()
    {
        return this->_dayCount * this->_paymentPerDay;
    }
    string toString()
    {
        return "Daily employee";
    }
};

#endif