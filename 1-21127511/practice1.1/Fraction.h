#ifndef PRACTICE_1
#define PRACTICE_1
#include <iostream>
using namespace std;

struct Fraction
{
    int nume;
    int deno;
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
#endif