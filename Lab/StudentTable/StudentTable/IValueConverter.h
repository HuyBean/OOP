#ifndef IVALUE_CONVERTER
#define IVALUE_CONVERTER

#include "Object.h"

class IValueConverter : public Object
{
public:
    virtual string convert(shared_ptr<Object>) = 0;
    string toString();
};

#endif