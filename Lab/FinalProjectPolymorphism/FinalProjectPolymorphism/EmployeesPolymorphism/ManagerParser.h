#ifndef MANAGER_PARSER
#define MANAGER_PARSER

#include "IParsable.h"
#include "Manager.h"

class ManagerParser : public IParsable
{
private:
    Manager Man;

public:
    ManagerParser();
    Employee *parse(string token);
    string toString();
    string parsedObjectName();
};

#endif