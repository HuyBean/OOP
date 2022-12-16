#ifndef EMPLOYEE
#define EMPLOYEE

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee
{
public:
    virtual string salary() = 0;
};

string convert(float n);

#endif