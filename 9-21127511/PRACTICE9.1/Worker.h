#ifndef WORKER
#define WORKER

#include "Employee.h"

class Worker : public Employee
{
private:
    int prodCount;

public:
    void input();
    double calcSal();
};

void Worker::input()
{
    Employee::input();
    cout << "Amount of products = ";
    cin >> prodCount;
}

double Worker::calcSal()
{
    return prodCount * 10 + Employee::calcSal();
}
#endif