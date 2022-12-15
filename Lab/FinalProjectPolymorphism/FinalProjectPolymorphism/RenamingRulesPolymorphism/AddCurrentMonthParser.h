#ifndef ADD_CURRENT_MONTH_PARSER
#define ADD_CURRENT_MONTH_PARSER

#include "IParsable.h"
#include "AddCurrentMonth.h"

class AddCurrentMonthParser : public IParsable
{
private:
    ACM _ACM;

public:
    string parsedObjectName()
    {
        return "AddCurrentMonth";
    }
    AddCurrentMonthParser()
    {
        _ACM = ACM();
    }
    IRule *parse(string token)
    {
        ACM *a = new ACM();
        a->toString();
        return a;
    }
    string toString()
    {
        return "AddCurrentMonth";
    }
};
#endif