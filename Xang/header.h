#ifndef _header_h_
#define _header_h_

#include <iostream>
using namespace std;

template <typename T>
struct Fraction
{
    T num;
    T denom;
};


template <class T>
Fraction<T> input()
{
    Fraction<T> value;
    cout << "INPUT" << endl;
    cout << "Enter num: ";
    cin >> value.num;
    cout << "Enter denom: ";
    cin >> value.denom;
    return value;
}

template <class T>
void output(Fraction<T> frac)
{
    cout << "OUTPUT" << endl;
    cout << "Enter num: ";
    cin >> frac.num;
    cout << "Enter denom: ";
    cin >> frac.denom;
}

// template <class T>
// void reduce(T &frac)
// {
// }

// template <class T>
// void inverse(T &frac)
// {
// }

// template <class T>
// T add(T f1, T f2)
// {
// }

// template <class T>
// bool compare(T f1, T f2)
// {
// }

#endif