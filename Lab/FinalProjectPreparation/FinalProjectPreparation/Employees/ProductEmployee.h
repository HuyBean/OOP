#include "Employee.h"

class ProductEmployee : public Employee
{
private:
    int product;
    float payment;

public:
    ProductEmployee(int p, float pay)
    {
        this->product = p;
        this->payment = pay;
    }
    string salary()
    {
        float sal = this->product * this->payment;
        string res = convert(sal);
        return res;
    }
};