#ifndef PRODUCT_EMPLOYEE_PARSER
#define PRODUCT_EMPLOYEE_PARSER

#include "IParsable.h"
#include "ProductEmployee.h"

class ProductEmployeeParser : public IParsable
{
private:
    ProductEmployee ProEmp;

public:
    ProductEmployeeParser()
    {
        ProEmp = ProductEmployee();
    }
    Employee *parse(string token)
    {
        vector<string> sub = Utils::String::split(token, " ");
        ProductEmployee *pe = new ProductEmployee(findNum(sub[0]), findNum(sub[1]));
        return pe;
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