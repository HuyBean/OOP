#include "ManagerParser.h"

ManagerParser::ManagerParser()
{
    Man = Manager();
}
Employee *ManagerParser::parse(string token)
{
    vector<string> sub = Utils::String::split(token, " ");
    Manager *m = new Manager(findNum(sub[0]), findNum(sub[1]), findNum(sub[2]));
    return m;
}

string ManagerParser::toString()
{
    return "ManagerParser";
}

string ManagerParser::parsedObjectName()
{
    return "Manager";
}