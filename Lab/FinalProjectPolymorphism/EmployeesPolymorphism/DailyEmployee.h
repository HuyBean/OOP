#ifndef DAILY_EMPLOYEE
#define DAILY_EMPLOYEE

#include "Employee.h"

class DailyEmployee : public Employee
{
private:
    int _dayCount;
    int _paymentPerDay;

public:
    DailyEmployee()
    {
        this->_dayCount = 0;
        this->_paymentPerDay = 0;
    }

    DailyEmployee(int d, int p)
    {
        this->_dayCount = d;
        this->_paymentPerDay = p;
    }

    DailyEmployee(const DailyEmployee &DE)
    {
        this->_dayCount = DE._paymentPerDay;
        this->_paymentPerDay = DE._paymentPerDay;
    }

    DailyEmployee &operator=(DailyEmployee DE)
    {
        this->_dayCount = DE._paymentPerDay;
        this->_paymentPerDay = DE._paymentPerDay;
        return *this;
    }

    string salary()
    {

        int sal = this->_dayCount * this->_paymentPerDay;
        Integer *a = new Integer(sal);
        IntegerToCurrencyConverter I;
        return I.convert(a);
        
    }
    string toString()
    {
        return "Daily employee";
    }
};

#endif