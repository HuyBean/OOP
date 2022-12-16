#include "DailyEmployee.h"

DailyEmployee::DailyEmployee(int d, float p)
{
    this->day = d;
    this->payment = p;
}
string DailyEmployee::salary()
{
    float sal = this->day * this->payment;
    string res = convert(sal);
    return res;
}