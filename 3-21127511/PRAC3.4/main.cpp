#include "3.4.h"

int main()
{
    float array[] = {4, 5, 6, 7, 9, 1, 2, 5};
    Array<int> Arr();
    Array<float> Arr1(5, array);
    Array<float> Arr2(Arr1);

    Arr2.output();    
    Arr1.~Array();
    return 0;
}