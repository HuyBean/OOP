#ifndef PRACTICE_3_2
#define PRACTICE_3_2

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    float math;
    float liter;

public:
    Student(string, float, float);
    Student(string);
    Student(const Student &student);
};

#endif