#include "3.3.h"

Array::Array(int Size)
{
    this->size = Size;
    memset(this->arr, 0, this->size);
}

Array::Array(int Size, int Arr[])
{
    this->size = Size;
    for (int i = 0; i < size; i++)
    {
        this->arr[i] = Arr[i];
    }
}

Array::Array(const Array &array)
{
    *this = array;
}