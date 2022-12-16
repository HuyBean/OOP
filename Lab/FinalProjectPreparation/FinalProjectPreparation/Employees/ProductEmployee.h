#include "Employee.h"

class ProductEmployee : public Employee
{
private:
    int product;
    float payment;

public:
    ProductEmployee(int p, float pay);
    string salary();
};