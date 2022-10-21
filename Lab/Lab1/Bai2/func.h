#ifndef BAI2
#define BAI2

#include <iostream>
#include <string.h>
#include <string>
#include <cstring>
#include <vector>
#include <time.h>

using namespace std;

int generateNum(int start, int end);

// Print functions
void printInstruction();
void printVector(vector<int> Arr, int size);

// Input function
void getNum(vector<int> &Arr, int &size);

// Some supporting functions
void supportOutput(int number, const string tmp);
// Output result function
void Output(vector<int> Arr, int size);

// Finding criteria functions
vector<int> findOdd(vector<int> Arr, int size);
vector<int> findEven(vector<int> Arr, int size);
vector<int> findPrime(vector<int> Arr, int size);
vector<int> findPalind(vector<int> Arr, int size);

void doFind(vector<int> Arr, int size, string tmp, string tmp2, vector<int> (*criteria)(vector<int>, int));
// Checking (collapse) functions
bool checkPalind(int num);
bool checkPrime(int num);

#endif