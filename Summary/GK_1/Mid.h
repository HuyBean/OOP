#ifndef MID_1
#define MID_1

#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;

template <class T>
class Matrix
{
private:
    int row;
    int column;
    T **Mat;

public:
    Matrix();
    Matrix(int, int);
    Matrix(const Matrix &);
    ~Matrix();
    bool operator==(Matrix);
    bool operator!=(Matrix);
    Matrix &operator=(Matrix);
    Matrix &operator++();
    Matrix &operator++();
    T &operator[](int);
    operator T *();
    template <class U>
    friend istream &operator>>(istream &, const Matrix<U> **);
    template <class U>
    friend ostream &operator<<(ostream &, const Matrix<U> **);
};
template <class T>
Matrix<T>::Matrix()
{
    this->column = 0;
    this->row = 0;
    this->Mat = 0;
}
template <class T>
Matrix<T>::Matrix(int R, int C)
{
    this->column = C;
    this->row = R;
    this->Mat = new T*[R];
    for(int i =0; i< R;i++)
    {
        *Mat = new T[C];
    }
}
template <class T>
Matrix<T>::Matrix(const Matrix<T> &)
{
}
template <class T>
Matrix<T>::~Matrix()
{
}
template <class T>
bool Matrix<T>::operator==(Matrix)
{
}
template <class T>
bool Matrix<T>::operator!=(Matrix)
{
}
template <class T>
Matrix<T> &Matrix<T>::operator=(Matrix)
{
}
template <class T>
Matrix<T> &Matrix<T>::operator++()
{
}
template <class T>
Matrix<T> &Matrix<T>::operator++()
{
}
template <class T>
T &Matrix<T>::operator[](int)
{
}
template <class T>
Matrix<T>::operator T *()
{
}
template <class U>
istream &operator>>(istream &, const Matrix<U> **)
{
}
template <class U>
ostream &operator<<(ostream &, const Matrix<U> **)
{
}
#endif