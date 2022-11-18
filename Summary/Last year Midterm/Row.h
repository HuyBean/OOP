#ifndef ROW_H
#define ROW_H
#include <vector>

template <typename T>
class Row
{
private:
    std::vector<T> arr;
public:
    Row(int Column = 0);
    int size() const;
    T& operator [] (const int& idx);
    ~Row();
};
template <typename T>
Row<T>::Row(int Column)
{
    arr = std::vector<T>(Column);
}
template <typename T>
int Row<T>::size() const
{
    return arr.size();
}

template <typename T>
T &Row<T>::operator[](const int &idx)
{
    return arr[idx];
}
template <typename T>
Row<T>::~Row()
{
}


#endif