#include "3.2.h"
Student::Student(string Name, float Math, float Liter)
{
    this->name = Name;
    this->liter = Liter;
    this->math = Math;
}

Student::Student(string Name)
{
    this->name = Name;
    this->liter = this->math = 0;
}

Student::Student(const Student &student)
{
    *this = student;
}