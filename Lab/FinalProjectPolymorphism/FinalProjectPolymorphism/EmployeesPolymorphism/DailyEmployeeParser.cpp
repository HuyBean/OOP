#include "DailyEmployeeParser.h"

DailyEmployeeParser::DailyEmployeeParser()
{
    DE = DailyEmployee();
}
Employee *DailyEmployeeParser::parse(string token)
{
    vector<string> sub = Utils::String::split(token, " ");
    DailyEmployee *d = new DailyEmployee(findNum(sub[0]), findNum(sub[1]));
    return d;
}

string DailyEmployeeParser::toString()
{
    return "DailyEmployeeParser";
}
string DailyEmployeeParser::parsedObjectName()
{
    return "DailyEmployee";
}
