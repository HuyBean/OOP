#ifndef PRODUCT_EMPLOYEE_PARSER
#define PRODUCT_EMPLOYEE_PARSER

#include "IParsable.h"

class ProductEmployeeParser:public IParsable
{
    public:
    Object* parse(string token)
    {
        
    }

    string toString()
    {
        return "ProductEmployeeParser";
    }

        string parsedObjectName()
    {
        return "ProductEmployee";
    }
};

#endif 