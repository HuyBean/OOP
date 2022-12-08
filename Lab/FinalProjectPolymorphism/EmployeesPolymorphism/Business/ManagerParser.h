#ifndef MANAGER_PARSER
#define MANAGER_PARSER

#include "IParsable.h"

class ManagerParser : public IParsable
{
public:
    Object *parse(string token)
    {
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