#include "fraction.h"

Fraction::Fraction()
{
    this->m_num = 1;
    this->m_den = 0;
}
Fraction::Fraction(int N)
{
    this->m_den = 1;
    this->m_num = N;
}
Fraction::Fraction(int N, int D)
{
    this->m_den = D;
    this->m_num = N;
}
void printInstructions()
{
    cout << "FractionsFromKeyboard\n";
}

void Fraction::printFraction()
{
    cout << this->m_num << "/" << this->m_den;
    return;
}
void printVector(vector<Fraction> f)
{
    for (int i = 0; i < f.size(); i++)
    {
        if (i == f.size() - 1)
        {
            f[i].printFraction();
            cout << "\n";
            return;
        }
        f[i].printFraction();
        cout << ", ";
    }
    return;
}

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

void Output(vector<Fraction> f)
{
    srand(time(NULL));
    string keyboard = "a", keyboard2 = "a";
    cout << "Enter from the keyboard an integer n in the range of [5, 10]: ";
    cin >> keyboard;
    while (!processingCommand(keyboard, 10, 5))
    {
        cout << "Enter from the keyboard an integer n in the range of [5, 10]: ";
        cin >> keyboard;
    }
    int size = stoi(keyboard);
    keyboard = "a";
    f.resize(0);
    cout << "Enter n fractions into a vector, each fraction’s numerator and denominator in the range of [10, 100].\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter numerator of fraction[" << i << "]: ";
        cin >> keyboard;
        while (!processingCommand(keyboard, 100, 10))
        {
            cout << "Enter numerator of fraction[" << i << "]: ";
            cin >> keyboard;
        }
        cout << "Enter denominator of fraction[" << i << "]: ";
        cin >> keyboard2;
        while (!processingCommand(keyboard2, 100, 10))
        {
            cout << "Enter denominator of fraction[" << i << "]: ";
            cin >> keyboard2;
        }
        f.push_back(Fraction(stoi(keyboard), stoi(keyboard2)));
        keyboard = keyboard2 = "a";
    }
    cout << "List of "<<f.size()<<" fraction(s): ";
    printVector(f);
    cout << "\nProgram is exiting. Press enter to quit.... \n";
    char enter = ' ';
    while (enter != '\n')
    {
        enter = getchar();
    }
    return;
}