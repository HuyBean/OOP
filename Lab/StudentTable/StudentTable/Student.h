#ifndef STUDENT
#define STUDENT

#include "Object.h"
#include "Utils.h"

class Student : public Object
{
private:
    string _name;
    string _phone;
    string _address;

public:
    Student();
    Student(string n, string p, string a);
    Student(string studentString);
    Student(const Student &St);
    string getName();
    string getPhone();
    string getAddr();
    string toString();
};

bool checkNumString(string token);

#endif