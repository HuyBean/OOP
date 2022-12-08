#ifndef PRODUCT_EMPLOYEE
#define PRODUCT_EMPLOYEE

#include "Employee.h"

class ProductEmployee : public Employee
{
private:
    int _productCount;
    int _paymentPerProduct;

public:
    int salary()
    {
        return this->_productCount * this->_paymentPerProduct;
    }
        string toString()
    {
        return "Product employee";
    }
};
#endif