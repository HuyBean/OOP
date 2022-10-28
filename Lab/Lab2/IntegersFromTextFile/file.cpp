#include "file1.h"

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

void printVector(vector<int> vNum)
{
    if (!vNum.size())
    {
        return;
    }
    for (int i = 0; i < vNum.size(); i++)
    {
        cout << vNum[i] << " ";
    }
    cout << endl;
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

vector<int> readFile(const char *fileName)
{
    vector<int> Arr;
    ifstream fin;
    fin.open(fileName);
    if (!fin)
    {
        cout << "Can't open file\n";
        return Arr;
    }
    cout << "Reading data from" << fileName << ".\n";

    while (!fin.eof())
    {
        string tmp;
        getline(fin, tmp);
        if (isNumber(tmp) == false)
        {
            continue;
        }
        Arr.push_back(stoi(tmp));
    }
    fin.close();
    cout << "Expected to find " << Arr.size() << " number(s).\n";
    return Arr;
}



// Finding criteria functions
void findOdd(vector<int> Arr)
{
    vector<int> Temp;
    for (int i = 0; i < Arr.size(); i++)
    {
        if (Arr[i] % 2 != 0)
        {
            Temp.push_back(Arr[i]);
        }
    }
    cout << "Found " << Temp.size() << " odd number(s): ";
    printVector(Temp);

    return;
}

void findEven(vector<int> Arr)
{
    vector<int> Temp;
    for (int i = 0; i < Arr.size(); i++)
    {
        if (Arr[i] % 2 == 0)
        {
            Temp.push_back(Arr[i]);
        }
    }
    cout << "Found " << Temp.size() << " even number(s): ";
    printVector(Temp);
    return;
}

void findPalind(vector<int> Arr)
{
    vector<int> Temp;
    for (int i = 0; i < Arr.size(); i++)
    {
        if (checkPalind(Arr[i]) == true)
        {
            Temp.push_back(Arr[i]);
        }
    }
    cout << "Found " << Temp.size() << " palindrome number(s): ";
    printVector(Temp);
    return;
}

void findPrime(vector<int> Arr)
{
    vector<int> Temp;
    for (int i = 0; i < Arr.size(); i++)
    {
        if (checkPrime(Arr[i]) == true)
        {
            Temp.push_back(Arr[i]);
        }
    }
    cout << "Found " << Temp.size() << " prime number(s): ";
    printVector(Temp);
    return;
}

void findSquare(vector<int> Arr)
{
    vector<int> Temp;
    for (int i = 0; i < Arr.size(); i++)
    {
        for (int j = 0; j * j <= Arr[i]; j++)
        {
            if (j * j == Arr[i])
            {
                Temp.push_back(Arr[i]);
            }
        }
    }
    cout << "Found " << Temp.size() << " square number(s): ";
    printVector(Temp);
    return;
}

void findPerfect(vector<int> Arr)
{
    vector<int> Temp;
    for (int i = 0; i < Arr.size(); i++)
    {
        int sum = 0;
        for (int j = 1; j < Arr[i]; j++)
        {
            if (Arr[i] % j == 0)
                sum = sum + j;
        }
        if (Arr[i] == sum)
        {
            Temp.push_back(Arr[i]);
        }
    }
    cout << "Found " << Temp.size() << " perfect number(s): ";
    printVector(Temp);
    return;
}

void findValues(vector<int> Arr)
{
    int min = INT_MAX, max = 0, sum = 0;
    for (int i = 0; i < Arr.size(); i++)
    {
        if (min > Arr[i])
        {
            min = Arr[i];
        }
    }
    cout << "Minimum value: " << min << " \n";
    for (int i = 0; i < Arr.size(); i++)
    {
        if (max < Arr[i])
        {
            max = Arr[i];
        }
    }
    cout << "Maximum value: " << max << "\n";

    for (int i = 0; i < Arr.size(); i++)
    {
        sum += Arr[i];
    }
    cout << "Average value: " << float(sum)/Arr.size() << " \n";
    cout << "Sum of all number "  << sum << " \n\n";
    cout << "Program is exiting. Press enter to quit...";
    char enter = ' ';
    while(enter != '\n')
    {
        enter = getchar();
        //getchar();
    }
    return;
}
