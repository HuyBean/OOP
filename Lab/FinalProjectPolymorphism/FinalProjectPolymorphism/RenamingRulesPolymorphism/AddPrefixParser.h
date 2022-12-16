#ifndef ADD_PREFIX_PARSER
#define ADD_PREFIX_PARSER

#include "IParsable.h"
#include "AddPrefix.h"

class AddPrefixParser : public IParsable
{
private:
    AddPrefix AP;

public:
    AddPrefixParser();
    string parsedObjectName();
    IRule* parse(string token);
    string toString();
};

#endif