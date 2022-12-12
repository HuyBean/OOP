#ifndef MANAGER_PARSER
#define MANAGER_PARSER

#include "IParsable.h"
#include "Manager.h"

class ManagerParser : public IParsable
{
private:
    Manager Man;

public:
    ManagerParser()
    {
        Man = Manager();
    }
    Employee *parse(string token)
    {
        vector<string> sub = Utils::String::split(token, " ");
        Manager *m = new Manager(findNum(sub[0]), findNum(sub[1]), findNum(sub[2]));
        return m;
    }

    string toString()
    {
        return "ManagerParser";
    }

    string parsedObjectName()
    {
        return "Manager";
    }
};

#endif