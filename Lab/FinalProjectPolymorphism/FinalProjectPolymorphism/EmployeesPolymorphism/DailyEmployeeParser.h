#ifndef DAILY_EMPLOYEE_PARSER
#define DAILY_EMPLOYEE_PARSER

#include "IParsable.h"
#include "DailyEmployee.h"

class DailyEmployeeParser : public IParsable
{
private:
    DailyEmployee DE;

public:
    DailyEmployeeParser();
    Employee *parse(string token);
    string toString();
    string parsedObjectName();
};

#endif