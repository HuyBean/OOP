#include "func.h"

int generateNum(int start, int end)
{
    return rand() % (end - start + 1) + start;
}

// Print functions
void printInstruction()
{
    cout << "Working with randomly generated integers.\n\n";
    return;
}

void printVector(vector<int> Arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << Arr[i];
            cout << endl;
            return;
        }
        cout << Arr[i] << ", ";
    }
    return;
}

// Input functions

void getNum(vector<int> &Arr, int &size)
{
    srand(time(NULL));
    size = generateNum(5, 10);
    string Inte = "integer";
    cout << "Generating " << size << " ";
    supportOutput(size, Inte);
    for (int i = 0; i < size; i++)
    {
        Arr.push_back(generateNum(10, 100));
    }
    cout << ": ";
    Arr.resize(size);
    printVector(Arr, size);
    cout << "\n\n";
    return;
}
// Output result function
void Output(vector<int> Arr, int size)
{
    string Inte = "integer";
    string Num = "number";
    string od = "odd";
    string eve = "even";
    string pal = "palindrome";
    string pri = "prime";

    doFind(Arr, size, od, Num, findOdd);
    doFind(Arr, size, eve, Num, findEven);
    doFind(Arr, size, pal, Num, findPalind);
    doFind(Arr, size, pri, Num, findPrime);

    return;
}

// Some supporting functions
void supportOutput(int number, const string tmp)
{
    if (number >= 2)
    {
        cout << tmp << "s";
    }
    else
    {
        cout << tmp << "";
    }
    return;
}

// Finding criteria functions
vector<int> findOdd(vector<int> Arr, int size)
{
    vector<int> Temp;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            Temp.push_back(Arr[i]);
        }
    }
    return Temp;
}

vector<int> findEven(vector<int> Arr, int size)
{
    vector<int> Temp;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            Temp.push_back(Arr[i]);
        }
    }
    return Temp;
}

vector<int> findPalind(vector<int> Arr, int size)
{
    vector<int> Temp;
    for (int i = 0; i < size; i++)
    {
        if (checkPalind(Arr[i]) == true)
        {
            Temp.push_back(Arr[i]);
        }
    }
    return Temp;
}
vector<int> findPrime(vector<int> Arr, int size)
{
    vector<int> Temp;
    for (int i = 0; i < size; i++)
    {
        if (checkPrime(Arr[i]) == true)
        {
            Temp.push_back(Arr[i]);
        }
    }
    return Temp;
}

void doFind(vector<int> Arr, int size, string tmp, string tmp2, vector<int> (*criteria)(vector<int>, int))
{
    vector<int> vFind = criteria(Arr, size);
    cout << "Found " << vFind.size() << " " << tmp << " ";
    supportOutput(vFind.size(), tmp2);
    cout << ": ";
    printVector(vFind, vFind.size());
    cout << "\n";
    return;
}
// Checking (collapse) functions
bool checkPalind(int num)
{
    int reversed = 0, remainder, original;
    original = num;
    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (original == reversed)
    {
        return true;
    }
    return false;
}

bool checkPrime(int num)
{
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
