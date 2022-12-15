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
    ReplaceParser()
    {
        Rpl = Replace();
    }
    string parsedObjectName()
    {
        return "Replace";
    }
    IRule *parse(string token)
    {
        vector<string> sub = Utils::String::split(token, ", ");
        vector<string> getReplace = Utils::String::split(sub[0], "=");
        vector<string> getNew = Utils::String::split(sub[1], "=");
        Replace *Rp = new Replace(getReplace[1], getNew[1]);
        return Rp;
    }
    string toString()
    {
        return "Replace";
    }
};

#endif