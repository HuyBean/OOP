#ifndef PRACTICE_3_3
#define PRACTICE_3_3

#include <iostream>
using namespace std;

class Array
{
private:
    int *arr;
    int size;

public:
    Array(){this->arr = 0;};
    Array(int);
    Array(int, int []);
    Array(const Array &array);
    ~Array() { delete[] arr; };
};

#endif