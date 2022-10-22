#include "2.4.h"

// 21127511 - Nguyen Quoc Huy

int main()
{
    Array Arr;
    Arr.input();
    Arr.output();
    Arr.getSize();
    Arr.getElement(2);
    Arr.setSize();
    Arr.setElement(2);
    Arr.output();
    cout << "Element 5 is at: " << Arr.find(5);
    cout << endl;
    Arr.sort(sortAscending);
    Arr.output();
    Arr.sort(sortDecending);
    Arr.output();
    return 0;
}