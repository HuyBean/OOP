#ifndef MATRIX_H
#define MATRIX_H
#include "Row.h"
#include <iostream>

template <typename T>
class Matrix
{
private:
    std::vector<Row<T>> arr;

public:
    Matrix(int r = 0, int c= 0);
    ~Matrix();
    T findMax();

    Row<T>& operator [] (int idx);
    Matrix<T>& operator = (Matrix &m);

    friend std::istream& operator >> (std::istream& inp, Matrix<int>& m);

    friend std::ostream& operator << (std::ostream& out, Matrix<int>& m);
};

template <typename T>
Matrix<T>::Matrix(int r, int c)
{
    arr = std::vector< Row<T> > (r, Row<T>(c));
}

template <>
int Matrix<int>::findMax()
{
    int result = arr[0][0];
    for (int i = 0; i < arr.size(); ++i)
    {
        for (int j = 0; j < arr[i].size(); ++j)
        {
            if (result < arr[i][j])result = arr[i][j];
        }
    }
    return result;
}

template <typename T>
Matrix<T>&Matrix<T>::operator = (Matrix<T> &m)
{
    for (int i = 0; i < m.arr.size(); ++i)
    {
        for (int j = 0; j < m.arr[i].size(); ++j)
        {
            arr[i][j] = m.arr[i][j];
        }
    }
    return *this;
}

template <typename T>
Row<T> &Matrix<T>::operator[](int idx)
{
    return arr[idx];
}

std::istream &operator>>(std::istream &inp, Matrix<int> &m)
{
    for (int i = 0; i < m.arr.size(); ++i)
    {
        for (int j = 0; j < m.arr[i].size(); ++j)
        {
            inp >> m.arr[i][j];
        }
    }
    return inp;
}

std::ostream &operator<<(std::ostream &out, Matrix<int> &m)
{
    for (int i = 0; i < m.arr.size(); ++i)
    {
        for (int j = 0; j < m.arr[i].size(); ++j)
        {
            out << m.arr[i][j] << " "; 
        }
        out << "\n";
    }
    return out;
}

template <typename T>
Matrix<T>::~Matrix()
{

}
#endif