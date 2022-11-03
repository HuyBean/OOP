#ifndef LAB_3_1
#define LAB_3_1

#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;

int findGCD(int a, int b);

class Fraction
{
private:
    int m_num;
    int m_den;
    float m_accuracy;

public:
    Fraction();
    Fraction(int N, int D);
    // Fraction(const Fraction &f);
    Fraction(int);
    void printFraction();
    static bool tryParse(string info, Fraction &f);
    float convertDecimal(const Fraction &f);
    string convertLowestTerm(const Fraction &f);
    float convertPercentage(const Fraction &f);
};
void readFile(const char *fileName, vector<Fraction> &Arr);
void printInstructions();
bool isNumber(string Key);
void printVector(vector<Fraction> vf);
void outPut(vector<Fraction> vf);

#endif