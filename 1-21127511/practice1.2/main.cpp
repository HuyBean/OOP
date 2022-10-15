#include "Fraction.h"

// 21127511 - Nguyễn Quốc Huy

int main()
{
    int size = 5;
    Fraction *Arr = new Fraction[size];
    fractionArr(Arr, size, inputFractionArray);
    fractionArr(Arr, size, showFractionArray);
    cout << "\nSort Ascending : ";
    fractionArr(Arr, size, sortAscending);
    fractionArr(Arr, size, showFractionArray);
    cout << "\nSort Decending : ";
    fractionArr(Arr, size, sortDecending);
    fractionArr(Arr, size, showFractionArray);
    return 0;
}