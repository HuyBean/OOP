#ifndef OFFICER
#define OFFICER

#include "Employee.h"

class Officer : public Employee
{
private:
    double basicSal;
    int vac;

public:
    void input();
    double calcSal();
};
void Officer::input()
{
    Employee::input();
    cout << "Basic salary = ";
    cin >> basicSal;
    cout << "Vacation: ";
    cin >> vac;
}

double Officer::calcSal()
{
    return basicSal - vac * 10 + Employee::calcSal();
}

#endif