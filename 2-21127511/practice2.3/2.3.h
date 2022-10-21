#ifndef PRACTICE_2_3
#define PRACTICE_2_3

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Student
{
private:
    string name;
    float Liter;
    float Math;

public:
    Student(string N = " ", float L = 0, float M = 0);
    void input();
    void output();

    char *getName();
    void setName();
    float getLit();
    void setLit();
    float getMath();
    void setMath();

    float calculateGPA();

    char grade();
};

#endif
