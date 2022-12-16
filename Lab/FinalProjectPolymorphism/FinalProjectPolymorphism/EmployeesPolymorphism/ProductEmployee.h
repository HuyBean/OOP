#ifndef PRODUCT_EMPLOYEE
#define PRODUCT_EMPLOYEE

#include "Employee.h"

class ProductEmployee : public Employee
{
private:
    int _productCount;
    int _paymentPerProduct;

public:
    ProductEmployee();
    ProductEmployee(int pd, int pm);
    ProductEmployee(const ProductEmployee &PE);
    ProductEmployee &operator=(ProductEmployee PE);
    string salary();
    string toString();
};

#endif