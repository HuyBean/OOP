#include "2.3.h"
#include <cstring>

Student::Student(string N, float L, float M)
{
    name = N;
    Liter = L;
    Math = M;
}
void Student::input()
{
    cout << "Input student name: ";
    cin.ignore('\n');
    getline(cin, name);
    cout << "Input literature point: ";
    cin >> Liter;
    cout << "Input Math point: ";
    cin >> Math;
}

void Student::output()
{
    cout << "Student " << name << "\n";
    cout << "Literature: " << Liter << "\n";
    cout << "Math: " << Math << "\n";
}

char *Student::getName()
{
    cout << "Student name: " << name << "\n";
}

void Student::setName()
{
    cout << "Change Student name: ";
    cin.ignore('\n');
    getline(cin, name);
}

float Student::getLit()
{
    cout << "Literature: " << Liter << "\n";
}

void Student::setLit()
{
    cout << "Change Literature point: ";
    cin >> Liter;
}

float Student::getMath()
{
    cout << "Math: " << Math << "\n";
}

void Student::setMath()
{
    cout << "Change Math point: ";
    cin >> Math;
}

float Student::calculateGPA()
{
    return (float)(Liter + Math) * 1.0 / 2;
}
char Student::grade()
{
    float GPA = calculateGPA();
    if(GPA >= 9)
    {
        return 'A';
    }
    else if(GPA >=7 && GPA<9)
    {
        return 'B';
    }
    else if(GPA>=5)
    {
        return 'C';
    }
    return 'D';
}