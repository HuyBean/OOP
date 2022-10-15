#ifndef PRACTICE_3
#define PRACTICE_3
#include <iostream>
using namespace std;

struct Fraction
{
    int nume;
    int deno;
    double result;
    void getFraction();
    void printFraction();
};

void Fraction::getFraction()
{
    cout << "\nInput the numerator: ";
    cin >> nume;
    cout << "\nInput the denomirator: ";
    cin >> deno;
}

void Fraction::printFraction()
{
    cout << "\nFraction is: " << nume << "/" << deno;
}

template <class T>
T findMin(T a, T b)
{
    return (a < b) ? a : b;
}

template <class T1, class T2, class T3>
void doWithFraction(Fraction &frac, T1 (*oper)(T2 &x, T3 &y))
{
    oper(frac.nume, frac.deno);
}

template <class T1, class T2, class T>
T multipleFraction(Fraction frac1, Fraction frac2, T (*oper)(T1 x, T2 y))
{
    oper(frac1, frac2);
}

void reduceFraction(int &nume, int &deno)
{
    int tu = nume, mau = deno;
    int min = findMin(nume, deno);
    for (int i = min; i >= 2; i--)
    {
        if (tu % i == 0 && mau % i == 0)
        {
            tu /= i;
            mau /= i;
        }
    }
    // cout << "Fraction after reduce: " << tu << "/" << mau << "\n";
    nume = tu;
    deno = mau;
}

void inversFraction(int &nume, int &deno)
{
    int temp;
    temp = nume;
    nume = deno;
    deno = temp;
}

Fraction addFraction(Fraction frac1, Fraction frac2)
{
    Fraction newFrac;
    newFrac.nume = frac1.nume * frac2.deno + frac1.deno * frac2.nume;
    newFrac.deno = frac1.deno * frac2.deno;
    return newFrac;
}

int compareFraction(Fraction frac1, Fraction frac2)
{
    double result1 = (double)frac1.nume / frac1.deno;
    double result2 = (double)frac2.nume / frac2.deno;
    if (result1 > result2)
    {
        return 1;
    }
    else if (result1 < result2)
    {
        return -1;
    }
    return 0;
}

template <class T, class T1, class T2>
void doWithArray(int *&Arr, T2 size, T (*oper)(T1 Arr, T2 size))
{
    oper(Arr, size);
}

template <class T, class T1, class T2>
void doWithArray(Fraction *&FracArr, T2 size, T (*oper)(T1 FracArr, T2 size))
{
    oper(FracArr, size);
}

void sortAscendingFraction(Fraction *&arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i].result > arr[j].result)
            {
                Fraction temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortDecendingFraction(Fraction *&arr, int size)
{
    for (int i = size; i >= 0; i--)
    {
        for (int j = size; j > size - i; j--)
        {
            if (arr[j].result > arr[j - 1].result)
            {
                Fraction temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

void showFractionArray(Fraction *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i].nume << "/" << arr[i].deno << " ";
    }
}

void inputFractionArray(Fraction *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i].getFraction();
        arr[i].result = (double)arr[i].nume * 1.0 / (double)arr[i].deno;
    }
}
void sortAscending(int *&arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortDecending(int *&arr, int size)
{
    for (int i = size; i >= 0; i--)
    {
        for (int j = size; j > size - i; j--)
        {
            if (arr[j]> arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

void showArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void inputArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
#endif