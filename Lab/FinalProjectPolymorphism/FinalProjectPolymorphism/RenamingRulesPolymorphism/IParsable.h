#ifndef IPARSABLE_RENAME
#define IPARSABLE_RENAME

#include "Object.h"
#include "IRule.h"

class IParsable : public Object
{
public:
    virtual IRule *parse(string token) = 0;
    virtual string toString() = 0;
    virtual string parsedObjectName() = 0;
};

#endif