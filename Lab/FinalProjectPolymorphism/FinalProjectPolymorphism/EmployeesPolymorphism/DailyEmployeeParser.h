#ifndef DAILY_EMPLOYEE_PARSER
#define DAILY_EMPLOYEE_PARSER

#include "IParsable.h"
#include "DailyEmployee.h"

class DailyEmployeeParser : public IParsable
{
private:
    DailyEmployee DE;

public:
    DailyEmployeeParser()
    {
        DE = DailyEmployee();
    }
    Employee *parse(string token)
    {
        vector<string> sub = Utils::String::split(token, " ");
        DailyEmployee *d = new DailyEmployee(findNum(sub[0]), findNum(sub[1]));
        return d;
    }

    string toString()
    {
        return "DailyEmployeeParser";
    }
    string parsedObjectName()
    {
        return "DailyEmployee";
    }
};

#endif