#ifndef ARRAY_OPERATOR
#define ARRAY_OPERATOR

#include <iostream>
#include <string.h>
#include <string>
using namespace std;

template <class T>
class Array
{
private:
    int m_size;
    T *m_arr;

public:
    Array();
    Array(int);
    Array(int, T Arr);
    ~Array()
    {
        if (m_arr)
        {
            delete[] this->m_arr;
        }
    }
    Array &operator=(Array);
    T &operator[](int);
    operator T *();

    template <class U>
    friend ostream &operator<<(ostream &out, const Array<U> &Arr);

    template <class U>
    friend istream &operator>>(istream &in, Array<U> &Arr);
};
template <class T>
Array<T>::Array()
{
    this->m_size = 0;
    this->m_arr = NULL;
}
template <class T>
Array<T>::Array(int size)
{
    this->m_size = size;
    this->m_arr = new T[size];
    memset(this->m_arr, 0, size);
}
template <class T>
Array<T>::Array(int size, T Arr)
{
    this->m_size = size;
    this->m_arr = new T[strlen(Arr)];
    this->m_arr = std::copy(Arr);
}

// Assignment
template <class T>
Array<T> &Array<T>::operator=(Array Arr)
{
    this->m_size = Arr.m_size;
    this->m_arr = new T[Arr.m_size];
    for (int i = 0; i < Arr.m_size; i++)
    {
        this->m_arr[i] = Arr.m_arr[i];
    }
    return *this;
}
// Array indexer[]
template <class T>
T &Array<T>::operator[](int index)
{
    return this->m_arr[index];
}
// Type-cast
template <class T>
Array<T>::operator T *()
{
    return (T *)this->m_arr;
}

// Input / Output
template <class U>
ostream &operator<<(ostream &out, const Array<U> &Arr)
{
    for (int i = 0; i < Arr.m_size; i++)
    {
        if (i == Arr.m_size - 1)
        {
            out << Arr.m_arr[i] << endl;
            return out;
        }
        out << Arr.m_arr[i] << " ";
    }
    return out;
}

template <class U>
istream &operator>>(istream &in, Array<U> &Arr)
{
    cout << "Please input the array size: ";
    in >> Arr.m_size;
    cout << "Please input " << Arr.m_size << " element(s): ";
    Arr.m_arr = new U[Arr.m_size];
    for (int i = 0; i < Arr.m_size; i++)
    {
        in >> Arr.m_arr[i];
    }
    return in;
}

#endif