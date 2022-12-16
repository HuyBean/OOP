#include "ProductEmployeeParser.h"

ProductEmployeeParser::ProductEmployeeParser()
{
    ProEmp = ProductEmployee();
}
Employee *ProductEmployeeParser::parse(string token)
{
    vector<string> sub = Utils::String::split(token, " ");
    ProductEmployee *pe = new ProductEmployee(findNum(sub[0]), findNum(sub[1]));
    return pe;
}

string ProductEmployeeParser::toString()
{
    return "ProductEmployeeParser";
}

string ProductEmployeeParser::parsedObjectName()
{
    return "ProductEmployee";
}