#include "func.h"

// 21127511 - Nguyen Quoc Huy

int main()
{
    // Declare 
    vector<int> Array;
    string Key;

    // Perform
    printInstruction();

    inputRange(Key);
    inputNum(Key, Array);

    Output(Key, Array);

    return 0;
}