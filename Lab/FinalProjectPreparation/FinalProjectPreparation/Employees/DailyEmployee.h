#include "Employee.h"

class DailyEmployee: public Employee
{
private:
    int day;
    float payment;

public:
    DailyEmployee(int d, float p)
    {
        this->day = d;
        this->payment = p;
    }
    string salary()
    {
        float sal = this->day * this->payment;
        string res = convert(sal);
        return res;
    }
};