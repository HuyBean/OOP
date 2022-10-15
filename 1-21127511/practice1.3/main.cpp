#include "Fraction.h"

// 21127511 - Nguyễn Quốc Huy

int main()
{
    int size = 5;

    // WITH STRUCTURE TYPE
    Fraction *Arr = new Fraction[size];
    doWithArray(Arr, size, inputFractionArray);
    doWithArray(Arr, size, showFractionArray);
    cout << "\nSort Ascending : ";
    doWithArray(Arr, size, sortAscendingFraction);
    doWithArray(Arr, size, showFractionArray);
    cout << "\nSort Decending : ";
    doWithArray(Arr, size, sortDecendingFraction);
    doWithArray(Arr, size, showFractionArray);

    // WITH ANY TYPES
    int *arr = new int[size];
    cout << "\n Sort with any types: ";
    doWithArray(arr, size, inputArray);
    doWithArray(arr, size, showArray);
    cout << "\nSort Ascending : ";
    doWithArray(arr, size, sortAscending);
    doWithArray(arr, size, showArray);
    cout << "\nSort Decending : ";
    doWithArray(arr, size, sortDecending);
    doWithArray(arr, size, showArray);

     doWithArray(Arr, size, inputFractionArray);
     doWithArray(arr, size, inputArray);
    return 0;
}