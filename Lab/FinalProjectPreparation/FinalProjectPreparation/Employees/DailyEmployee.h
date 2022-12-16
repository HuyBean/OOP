#include "Employee.h"

class DailyEmployee: public Employee
{
private:
    int day;
    float payment;

public:
    DailyEmployee(int d, float p);
    string salary();
};