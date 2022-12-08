#ifndef IPARSABLE
#define IPARSABLE

#include "Entity/Object.h"

class IParsable : public Object
{
public:
    virtual Object *parse(string token) = 0;
    virtual string toString() = 0;
    virtual string parsedObjectName() = 0;
};
#endif