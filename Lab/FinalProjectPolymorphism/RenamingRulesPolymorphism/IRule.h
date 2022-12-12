#ifndef IRULE
#define IRULE

#include "Object.h"

class IRule : public Object
{
public:
    virtual string rename(string name) = 0;
    virtual string toString() = 0;
};

#endif