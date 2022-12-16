#ifndef PRODUCT_EMPLOYEE_PARSER
#define PRODUCT_EMPLOYEE_PARSER

#include "IParsable.h"
#include "ProductEmployee.h"

class ProductEmployeeParser : public IParsable
{
private:
    ProductEmployee ProEmp;

public:
    ProductEmployeeParser();
    Employee *parse(string token);
    string toString();
    string parsedObjectName();
};

#endif