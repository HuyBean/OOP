#ifndef ONE_SPACE_ONLY
#define ONE_SPACE_ONLY

#include "IRule.h"

class OneSpaceOnly : public IRule
{
private:
public:
    OneSpaceOnly();
    string toString();
    string rename(string name);
};

#endif