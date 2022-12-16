#include "Manager.h"

Manager::Manager(int p, float pay)
{
    this->managed = p;
    this->payment = pay;
}
string Manager::salary()
{
    float sal = this->managed * 500.000 + this->payment;
    string res = convert(sal);
    return res;
}