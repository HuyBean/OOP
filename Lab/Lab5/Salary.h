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
    Employee(const Employee& other);
    string toString();
    int getSalary();
    void Read(ifstream&);
};

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
    void Sort();
    void printOut();
};

void convert(int n, int count = 0);
Employee parse(string data);

// namespace Utils
// {
//     class String
//     {
//     public:
//         static vector<string> splitToken(string, string);
//     };
// }

#endif