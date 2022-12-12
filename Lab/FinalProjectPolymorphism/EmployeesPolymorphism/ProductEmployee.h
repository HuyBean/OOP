#ifndef PRODUCT_EMPLOYEE
#define PRODUCT_EMPLOYEE

#include "Employee.h"

class ProductEmployee : public Employee
{
private:
    int _productCount;
    int _paymentPerProduct;

public:
    ProductEmployee()
    {
        this->_productCount = 0;
        this->_paymentPerProduct = 0;
    }

    ProductEmployee(int pd, int pm)
    {
        this->_productCount = pd;
        this->_paymentPerProduct = pm;
    }

    ProductEmployee(const ProductEmployee &PE)
    {
        this->_productCount = PE._productCount;
        this->_paymentPerProduct = PE._paymentPerProduct;
    }

    ProductEmployee &operator=(ProductEmployee PE)
    {
        this->_productCount = PE._productCount;
        this->_paymentPerProduct = PE._paymentPerProduct;
        return *this;
    }

    string salary()
    {
        int sal = this->_productCount * this->_paymentPerProduct;
        Integer *a = new Integer(sal);
        IntegerToCurrencyConverter I;
        return I.convert(a);
    }
    string toString()
    {
        return "Product employee";
    }
};

#endif