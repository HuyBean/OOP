#include "Employee.h"

class Manager : public Employee
{
private:
    int managed;
    float payment;

public:
    Manager(int p, float pay);
    string salary();
};