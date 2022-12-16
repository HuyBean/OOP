#ifndef DAILY_EMPLOYEE
#define DAILY_EMPLOYEE

#include "Employee.h"

class DailyEmployee : public Employee
{
private:
    int _dayCount;
    int _paymentPerDay;

public:
    DailyEmployee();
    DailyEmployee(int d, int p);
    DailyEmployee(const DailyEmployee &DE);
    DailyEmployee &operator=(DailyEmployee DE);
    string salary();
    string toString();
};

#endif