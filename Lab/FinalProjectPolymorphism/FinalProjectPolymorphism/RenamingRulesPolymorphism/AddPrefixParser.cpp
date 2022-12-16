#include "AddPrefixParser.h"

AddPrefixParser::AddPrefixParser()
{
    AP = AddPrefix();
}
string AddPrefixParser::parsedObjectName()
{
    return "AddPrefix";
}
IRule *AddPrefixParser::parse(string token)
{
    AddPrefix *ap = new AddPrefix(token);
    return ap;
}
string AddPrefixParser::toString()
{
    return "AddPrefix";
}