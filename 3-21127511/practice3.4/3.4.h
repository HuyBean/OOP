#ifndef PRACTICE_3_4
#define PRACTICE_3_4

#include <iostream>
using namespace std;

template <class T>
class Array
{
private:
    T *arr;
    int m_size;

public:
    Array() { this->arr = 0; };
    Array(int);
    Array(int, int[]);
    Array(const Array &array);
    ~Array() { delete[] arr; };
};

#endif