#ifndef LAB_3_3
#define LAB_3_3

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <time.h>
using namespace std;

class Fraction
{
private:
    int m_num;
    int m_den;

public:
    Fraction();
    Fraction(int);
    Fraction(int, int);
    void printFraction();
};
void printInstructions();
void printVector(vector<Fraction> f);
bool processingCommand(string Key, int upperBound, int lowerBound);
bool isNumber(string Key);
void Output(vector<Fraction> f);

#endif