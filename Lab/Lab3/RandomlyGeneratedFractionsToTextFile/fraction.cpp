#include "fraction.h"

Fraction::Fraction()
{
    this->m_den = 1;
    this->m_num = 0;
}
Fraction::Fraction(int N, int D)
{
    this->m_num = N;
    this->m_den = D;
}
Fraction::Fraction(int N)
{
    this->m_num = N;
    this->m_den = 1;
}

string Fraction::convert()
{
    string res;
    res += to_string(this->m_num) + '/' + to_string(this->m_den);
    return res;
}
void printVector(vector<Fraction> f)
{
    for (int i = 0; i < f.size(); i++)
    {
        if (i == f.size() - 1)
        {
            f[i].printFraction();
            cout << "\n";
        }
        f[i].printFraction();
        cout << ", ";
    }
}

void printInstructions()
{
    cout << "Working with randomly generated fractions.\n";
}

void Fraction::printFraction()
{
    cout << this->m_num << "/" << this->m_den;
    return;
}

void writeFile(const char *fileName)
{
    srand(time(NULL));
    vector<Fraction> arr;
    int size = generateNum(5, 10);

    cout << "Generating " << size << " fraction(s): ";
    for (int i = 0; i < size; i++)
    {
        Fraction Arr(generateNum(10, 100), generateNum(10, 100));
        arr.push_back(Arr);
    }
    printVector(arr);
    reverse(arr.begin(), arr.end());

    ofstream fout(fileName);

    if (fout)
    {
        cout << "Writing all " << arr.size() << " fraction(s) into " << fileName << " file.\n";
        while (arr.size() != 0)
        {
            fout << arr[arr.size() - 1].convert() << endl;
            arr.pop_back();
        }
        cout << "Program is exiting. Press enter to quit...";
        char enter = ' ';
        while (enter != '\n')
        {
            enter = getchar();
        }
    }
    fout.close();
    return;
}

int generateNum(int start, int end)
{
    return rand() % (end - start + 1) + start;
}