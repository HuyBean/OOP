#ifndef EMPLOYEE
#define EMPLOYEE

#include "Object.h"

class Employee : public Object
{
    public:
    virtual int salary() = 0;
    virtual string toString() = 0;
};

#endif