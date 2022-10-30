#ifndef PRACTICE_3_4
#define PRACTICE_3_4

#include <iostream>
using namespace std;

template <class T>
class Array
{
private:
    int m_size;
    T *arr;

public:
    Array();
    Array(T);
    Array(int, T[]);
    Array(const Array<T> &array);
    ~Array();
};

template <class T>
Array<T>::Array()
{
    this->m_size = 0;
    this->arr = 0;
}

template <class T>
Array<T>::Array(T Size)
{
    this->m_size = Size;
    memset(this->arr, 0, this->m_size);
}

template <class T>
Array<T>::Array(int Size, T Arr[])
{
    this->m_size = Size;
    this->arr = Arr;
}

template <class T>
Array<T>::Array(const Array<T> &array)
{
    *this = array;
}

template <class T>
Array<T>::~Array()
{
    this->m_size = 0;
}

// template <class T>
// Array<T>::Population()
// {

// }
#endif