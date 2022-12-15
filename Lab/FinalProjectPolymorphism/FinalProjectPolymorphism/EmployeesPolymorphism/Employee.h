#ifndef EMPLOYEE
#define EMPLOYEE

#include "Object.h"
#include "IntegerToCurrencyConverter.h"

class Employee : public Object
{
    public:
    virtual string salary() = 0;
    virtual string toString() = 0;
};

#endif