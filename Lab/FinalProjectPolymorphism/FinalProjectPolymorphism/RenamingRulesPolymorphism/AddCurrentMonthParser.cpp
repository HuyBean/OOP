#include "AddCurrentMonthParser.h"

string AddCurrentMonthParser::parsedObjectName()
{
    return "AddCurrentMonth";
}
AddCurrentMonthParser::AddCurrentMonthParser()
{
    _ACM = ACM();
}
IRule *AddCurrentMonthParser::parse(string token)
{
    ACM *a = new ACM();
    a->toString();
    return a;
}
string AddCurrentMonthParser::toString()
{
    return "AddCurrentMonth";
}