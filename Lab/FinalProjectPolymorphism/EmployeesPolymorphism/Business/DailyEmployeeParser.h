#ifndef DAILY_EMPLOYEE_PARSER
#define DAILY_EMPLOYEE_PARSER

#include "IParsable.h"

class DailyEmployeeParser:public IParsable
{
    public:
    Object* parse(string token)
    {

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