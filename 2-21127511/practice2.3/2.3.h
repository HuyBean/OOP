#ifndef PRACTICE_2_3
#define PRACTICE_2_3

#include <iostream>
using namespace std;

class Student
{
private:
    char* name;
    float Liter;
    float Math;

public:
    Student(char* N = " ", float L = 0, float M = 0);
    void input();
    void output();

    char* getName();
    void setName();
    float getLit();
    void setLit();
    float getMath();
    void setMath();

    template <class T>
    void setAndGet(T (*oper)());

    float calculateGPA();

    char grade();
    
};

#endif
