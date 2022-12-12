#ifndef EMPLOYEE
#define EMPLOYEE

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Employee
{
private:
    string _name;
    int _getInYear;

public:
    virtual void input()
    {
        cout << "Name: ";
        getline(cin, this->_name);
        cout << "\nGet-in year: ";
        cin >> this->_getInYear;
    }
    virtual double calcSal()
    {
        return 100 + 10 * this->_getInYear;
    }
};

// void Employee::input()
// {
//     cout << "Name: " << this->_name << "\nGet-in year: "<< this->_getInYear;
// }

#endif