#include "ProductEmployee.h"

ProductEmployee::ProductEmployee(int p, float pay)
{
    this->product = p;
    this->payment = pay;
}
string ProductEmployee::salary()
{
    float sal = this->product * this->payment;
    string res = convert(sal);
    return res;
}