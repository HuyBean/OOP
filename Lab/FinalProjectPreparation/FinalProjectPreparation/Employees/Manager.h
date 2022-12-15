#include "Employee.h"

class Manager : public Employee
{
private:
    int managed;
    float payment;

public:
    Manager(int p, float pay)
    {
        this->managed = p;
        this->payment = pay;
    }
    string salary()
    {
        float sal = this->managed * 500.000 + this->payment;
        string res = convert(sal);
        return res;
    }
};