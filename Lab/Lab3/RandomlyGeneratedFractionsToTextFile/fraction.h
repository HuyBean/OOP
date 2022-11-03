#ifndef LAB_3_2
#define LAB_3_2

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <time.h>
#include <cstring>
#include <string>

using namespace std;

class Fraction
{
private:
    int m_num;
    int m_den;

public:
    Fraction();
    Fraction(int, int);
    Fraction(int);
    void printFraction();
    string convert();
};

void printInstructions();
void writeFile(const char *fileName);
int generateNum(int start, int end);
void printVector(vector<Fraction> f);

#endif