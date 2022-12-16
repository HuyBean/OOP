#include "ReplaceParser.h"

ReplaceParser::ReplaceParser()
{
    Rpl = Replace();
}
string ReplaceParser::parsedObjectName()
{
    return "Replace";
}
IRule *ReplaceParser::parse(string token)
{
    vector<string> sub = Utils::String::split(token, ", ");
    vector<string> getReplace = Utils::String::split(sub[0], "=");
    vector<string> getNew = Utils::String::split(sub[1], "=");
    Replace *Rp = new Replace(getReplace[1], getNew[1]);
    return Rp;
}
string ReplaceParser::toString()
{
    return "Replace";
}