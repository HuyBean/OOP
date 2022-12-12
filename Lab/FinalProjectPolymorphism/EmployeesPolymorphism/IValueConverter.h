#ifndef IVALUE_CONVERTER
#define IVALUE_CONVERTER

#include "Object.h"

class IValueConverter: public Object
{
    public:
    virtual string convert(Object*) = 0;
};

#endif 