#include "func.h"

// Print functions
void printInstruction()
{
    cout << "Working with integer arrays from the keyboard.\n\n";
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

// Input and active functions
void inputRange(string &Key)
{
    bool ok = false;
    while (ok == false)
    {
        cout << "Please enter an integer in the range of [5, 10]: ";
        getline(cin, Key);
        ok = processingCommand(Key, 10, 5);
    }
    cout << "\n\n";
    return;
}

void inputNum(string Key, vector<int> &Arr)
{
    int number = stoi(Key);
    bool ok = false;
    string tmp;
    string Inte = "integer";
    cout << "Please enter " << number << " ";
    supportOutput(number, Inte);
    cout << ", each in the range of [1, 100]: \n";
    for (int i = 0; i < number; i++)
    {
        supportPrint(i);
        getline(cin, tmp);
        ok = processingCommand(tmp, 100, 1);
        while (ok == false)
        {
            supportPrint(i);
            getline(cin, tmp);
            ok = processingCommand(tmp, 100, 1);
        }
        if (ok == true)
        {
            Arr.push_back(stoi(tmp));
        }
    }
    cout << "\n\n";
    return;
}

// Information processing functions
bool processingCommand(string Key, int upperBound, int lowerBound)
{
    if (Key.size() == 0)
    {
        cout << "Error: Input string cannot be empty.\n";
        return false;
    }
    if (!isNumber(Key))
    {
        cout << "Error: Invalid input format.\n";
        return false;
    }
    if (isNumber(Key) == true)
    {
        int number = stoi(Key);
        if (number < lowerBound || number > upperBound)
        {
            cout << "Error: The integer must be in the range of [" << lowerBound << ", " << upperBound << "]\n";
            return false;
        }
    }
    return true;
}

// Output result function
void Output(string &Key, vector<int> &Arr)
{
    int number = stoi(Key);
    string Inte = "integer";
    string Num = "number";
    string od = "odd";
    string eve = "even";
    string pal = "palindrome";
    string pri = "prime";

    cout << "You have entered " << number << " ";
    supportOutput(number, Inte);
    cout << ": ";
    printVector(Arr, number);

    doFind(Arr, number, od, Num, findOdd);
    doFind(Arr, number, eve, Num, findEven);
    doFind(Arr, number, pal, Num, findPalind);
    doFind(Arr, number, pri, Num, findPrime);

    return;
}

// Some supporting functions
void supportPrint(int number)
{
    cout << " The [" << number << "] integer: ";
}

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

bool isNumber(string Key)
{
    for (char const &Character : Key)
    {
        if (isdigit(Character) == 0)
        {
            return false;
        }
    }
    return true;
}
