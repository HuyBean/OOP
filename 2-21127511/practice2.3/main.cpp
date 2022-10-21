#include "2.3.h"

int main()
{
    Student A;
    A.input();
    A.output();

    A.setName();
    A.setMath();
    A.setLit();

    A.getName();
    A.getMath();
    A.getLit();
    
    cout << "\nGPA of this student: "<< A.calculateGPA();
    cout << "\nGrade: "<< A.grade();
    return 0;
}