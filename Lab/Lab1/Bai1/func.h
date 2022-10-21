#ifndef BAI1
#define BAI1

#include <iostream>
#include <string.h>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

// Print functions
void printInstruction();
void printVector(vector<int> Arr, int size);

// Input and active functions
void inputRange(string &Key);
void inputNum(string Key, vector<int> &Arr);

// Information processing functions
bool processingCommand(string Key, int upperBound, int lowerBound);

// Some supporting functions
void supportPrint(int number);
void supportOutput(int number, const string tmp);

// Output result function
void Output(string &Key, vector<int> &Arr);

// Finding criteria functions
vector<int> findOdd(vector<int> Arr, int size);
vector<int> findEven(vector<int> Arr, int size);
vector<int> findPrime(vector<int> Arr, int size);
vector<int> findPalind(vector<int> Arr, int size);

void doFind(vector<int> Arr, int size, string tmp, string tmp2, vector<int> (*criteria)(vector<int>, int));
// Checking (collapse) functions
bool checkPalind(int num);
bool checkPrime(int num);
bool isNumber(string Key);

#endif