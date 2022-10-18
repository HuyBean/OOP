#ifndef PRACTICE_2_4
#define PRACTICE_2_4

#include <iostream>
using namespace std;

class Array
{
private:
    int Size;
    int* Ele;

public:
    Array(int S = 0, int* E = 0);
    void input();
    void output();
    int getSize();
    void setSize();
    int getElement(int Index);
    void setElement(int Index);
    int find(int);

    void sort(void (*oper)());
    void sortAscending();
    void sortDecending();

};

#endif
