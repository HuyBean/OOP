#ifndef REPLACE_PARSER
#define REPLACE_PARSER

#include "IParsable.h"
#include "Replace.h"
#include "Utils.h"
#include <sstream>

class ReplaceParser : public IParsable
{
private:
    Replace Rpl;

public:
    ReplaceParser();
    string parsedObjectName();
    IRule *parse(string token);
    string toString();
};

#endif