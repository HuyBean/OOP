#include "OneSpaceOnlyParser.h"

OneSpaceOnlyParser::OneSpaceOnlyParser()
{
    OSO = OneSpaceOnly();
}
string OneSpaceOnlyParser::parsedObjectName()
{
    return "OneSpaceOnly";
}
IRule *OneSpaceOnlyParser::parse(string name)
{
    OneSpaceOnly *One = new OneSpaceOnly();
    return One;
}
string OneSpaceOnlyParser::toString()
{
    return "OneSpaceOnly";
}