#include "func.h"

// 21127511 - Nguyen Quoc Huy

int main()
{
    // Declare 
    vector<int> Array;
    int size = 0;

    // Perform
    printInstruction();
    getNum(Array, size);
    //Array.resize(size);
    Output(Array, size);
    system("pause");
    return 0;
}