#ifndef LAB_2_1
#define LAB_2_1

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

bool isNumber(string Key);

// Checking (collapse) functions
bool checkPalind(int num);

bool checkPrime(int num);

vector<int> readFile(const char *fileName);

// Finding criteria functions
void findOdd(vector<int> Arr);

void findEven(vector<int> Arr);

void findPalind(vector<int> Arr);

void findPrime(vector<int> Arr);

void findSquare(vector<int> Arr);

void findPerfect(vector<int> Arr);

void findValues(vector<int> Arr);

#endif