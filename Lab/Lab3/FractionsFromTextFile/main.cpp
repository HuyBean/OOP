#include "fraction.h"

int main()
{
    const char* fileName = "input.txt";
    vector<Fraction> Arr;
    printInstructions();
    readFile(fileName, Arr);
    outPut(Arr);
    return 0;
}