#include "array.h"

int main()
{
    Array<float> Arrf;
    Array<int> Arr, Arr1(5);
    int a[5] = {1,2,3,4,5};
    cin >> Arr;
    cout << Arr << endl;
    Arr[2] = 9;
    cout << Arr << endl;
    Arr1 = Arr;
    cout << Arr1 << endl;
    cout << Arrf << endl;
    return 0;
}