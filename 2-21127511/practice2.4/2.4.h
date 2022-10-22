#ifndef PRACTICE_2_4
#define PRACTICE_2_4

#include <iostream>
#include <vector>
using namespace std;

class Array
{
private:
    int Size;
    vector<int> Ele;

public:
    Array(int S = 0, vector<int> E = {0});
    void input();
    void output();
    int getSize();
    void setSize();
    int getElement(int Index);
    void setElement(int Index);
    int find(int);

    void sort(bool (*oper)(int, int));
};
    bool sortAscending(int, int);
    bool sortDecending(int, int);

#endif
