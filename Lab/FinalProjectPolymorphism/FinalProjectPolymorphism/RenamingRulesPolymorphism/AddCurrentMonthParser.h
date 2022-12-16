#ifndef ADD_CURRENT_MONTH_PARSER
#define ADD_CURRENT_MONTH_PARSER

#include "IParsable.h"
#include "AddCurrentMonth.h"

class AddCurrentMonthParser : public IParsable
{
private:
    ACM _ACM;

public:
    string parsedObjectName();
    AddCurrentMonthParser();
    IRule *parse(string token);
    string toString();
};
#endif