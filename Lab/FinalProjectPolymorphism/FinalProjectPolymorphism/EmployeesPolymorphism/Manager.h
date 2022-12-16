#ifndef MANAGER
#define MANAGER

#include "Employee.h"

class Manager : public Employee
{
private:
    int _employeeCount;
    int _paymentPerEmployee;
    int _baseSalary;

public:
    Manager();
    Manager(int e, int p, int b);
    Manager(const Manager &Mn);
    Manager &operator=(const Manager &Mn);
    string salary();
    string toString();
};

#endif