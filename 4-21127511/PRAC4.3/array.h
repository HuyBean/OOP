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
    ~Array();
    Array &operator=(Array);
    T &operator[](int);
    operator T *();
    friend ostream &operator<<(ostream &out, const Array &Arr);
    friend istream &operator>>(istream &in, Array &Arr);
};
template <class T>
Array<T>::Array()
{
    this->m_size = 0;
    // std::fill(this->m_arr[0], this->m_arr[this->m_size - 1], 0);
}
template <class T>
Array<T>::Array(int size)
{
    this->m_size = size;
    for (int i = 0; i < this->m_size; i++)
    {
        this->m_arr[i] = 0;
    }
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
    this->m_arr = new T[this.size];
    for (int i = 0; i < this->m_size; i++)
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
template <class T>
ostream &operator<<(ostream &out, const Array<T> &Arr)
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

template <class T>
istream &operator>>(istream &in, Array<T> &Arr)
{
    cout << "Please input the array size: ";
    in >> Arr.m_size;
    cout << "Please input " << Arr.m_size << " element(s): ";
    for (int i = 0; i < Arr.m_size; i++)
    {
        in >> Arr.m_arr[i];
    }
    return in;
}
template <class T>
Array<T>::~Array()
{
    delete[] this->m_arr;
}
#endif