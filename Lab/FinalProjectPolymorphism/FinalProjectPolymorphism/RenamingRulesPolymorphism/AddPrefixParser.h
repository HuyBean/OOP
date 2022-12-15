#ifndef ADD_PREFIX_PARSER
#define ADD_PREFIX_PARSER

#include "IParsable.h"
#include "AddPrefix.h"

class AddPrefixParser : public IParsable
{
private:
    AddPrefix AP;

public:
    AddPrefixParser()
    {
        AP = AddPrefix();
    }
    string parsedObjectName()
    {
        return "AddPrefix";
    }
    IRule* parse(string token)
    {
        AddPrefix * ap = new AddPrefix(token);
        return ap;
    }
    string toString()
    {
        return "AddPrefix";
    }
};

#endif