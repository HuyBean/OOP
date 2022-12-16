#include "ProductEmployee.h"

ProductEmployee::ProductEmployee()
{
    this->_productCount = 0;
    this->_paymentPerProduct = 0;
}

ProductEmployee::ProductEmployee(int pd, int pm)
{
    this->_productCount = pd;
    this->_paymentPerProduct = pm;
}

ProductEmployee::ProductEmployee(const ProductEmployee &PE)
{
    this->_productCount = PE._productCount;
    this->_paymentPerProduct = PE._paymentPerProduct;
}

ProductEmployee &ProductEmployee::operator=(ProductEmployee PE)
{
    this->_productCount = PE._productCount;
    this->_paymentPerProduct = PE._paymentPerProduct;
    return *this;
}

string ProductEmployee::salary()
{
    int sal = this->_productCount * this->_paymentPerProduct;
    Integer *a = new Integer(sal);
    IntegerToCurrencyConverter I;
    return I.convert(a);
}
string ProductEmployee::toString()
{
    return "Product employee";
}