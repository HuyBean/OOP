#ifndef LAB_5
#define LAB_5

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <cstring>
#include <vector>
#include <sstream>
using namespace std;

namespace Utils
{
    class String
    {
    public:
        static vector<string> splitToken(string, string);
    };
}


class Employee
{
private:
    int _id;
    string _name;
    int _day;
    int _product;

public:
    Employee();
    Employee(int, string, int, int);
    string toString();
    int getSalary();
    Employee Read(const char* fileName);
};
Employee parse(string data);
class Data
{
private:
    const char *fileName;
    vector<Employee> Emp;
    int size = 0;
public:
    Data();
    Data(const char *, vector<Employee>, int);
    void readFile();
    void writeFile();
    void Sort();
    void printOut(vector<Employee>);
};

#endif