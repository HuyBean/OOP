#ifndef ONE_SPACE_ONLY_PARSER
#define ONE_SPACE_ONLY_PARSER

#include "IParsable.h"
#include "OneSpaceOnly.h"

class OneSpaceOnlyParser : public IParsable
{
private:
    OneSpaceOnly OSO;

public:
    OneSpaceOnlyParser();
    string parsedObjectName();
    IRule *parse(string name);
    string toString();
};

#endif