#include "file1.h"

//21127511 - Nguyễn Quốc Huy

int main()
{
    const char *fileName = "number.txt";
    vector<int> Arr;
    Arr = readFile(fileName);
    findOdd(Arr);
    findEven(Arr);
    findPalind(Arr);
    findPrime(Arr);
    findSquare(Arr);
    findPerfect(Arr);
    findValues(Arr);
    return 0;
}