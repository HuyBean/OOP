#ifndef ONE_SPACE_ONLY_PARSER
#define ONE_SPACE_ONLY_PARSER

#include "IParsable.h"
#include "OneSpaceOnly.h"

class OneSpaceOnlyParser : public IParsable
{
private:
    OneSpaceOnly OSO;

public:
    OneSpaceOnlyParser()
    {
        OSO = OneSpaceOnly();
    }
    string parsedObjectName()
    {
        return "OneSpaceOnly";
    }
    IRule *parse(string name)
    {
        OneSpaceOnly * One = new OneSpaceOnly();
        return One;
    }
    string toString()
    {
        return "OneSpaceOnly";
    }
};

#endif