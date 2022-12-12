#ifndef COMPANY
#define COMPANY

#include "Worker.h"
#include "Officer.h"

class Company
{
private:
    vector<Employee *> empList;

public:
    void inputEmplist();
    double calcTotalSal();
};

void Company::inputEmplist()
{
    int number;
    bool type = 0;
    cout << "Input number of Employee: \n";
    cin >> number;
    this->empList.resize(number);
    for (int i = 0; i < number; i++)
    {
        cout << "Select type of Employee: \n [0] Worker \n [1] Officer\n";
        cin >> type;
        Employee *temp;
        if (type == 0)
        {
            temp = new Worker;
        }
        else if (type == 1)
        {
            temp = new Officer;
        }
        temp->input();
        empList[i] = temp;
    }
}

double Company::calcTotalSal()
{
    double sum = 0;
    for (int i = 0; i < this->empList.size(); i++)
    {
        sum += this->empList[i]->calcSal();
    }
    return sum;
}

#endif