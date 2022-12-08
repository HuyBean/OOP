#ifndef IVALUE_CONVERTER
#define IVALUE_CONVERTER

#include "Entity/Object.h"

class IValueConverter: public Object
{
    public:
    virtual string convert(Object*) = 0;
};

#endif 