#include "fraction.h"

int findGCD(int a, int b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

Fraction::Fraction()
{
    this->m_num = 0;
    this->m_den = 1;
    this->m_accuracy = (float)this->m_num * 1.0 / this->m_den;
}

Fraction::Fraction(int N, int D)
{
    this->m_num = N;
    this->m_den = D;
    this->m_accuracy = (float)this->m_num * 1.0 / this->m_den;
}

// Fraction::Fraction(const Fraction &f)
// {
//     *this = f;
// }
Fraction::Fraction(int Nume)
{
    this->m_num = Nume;
    this->m_den = 1;
    this->m_accuracy = (float)this->m_num * 1.0 / this->m_den;
}

void Fraction::printFraction()
{
    cout << this->m_num << "/" << this->m_den;
    return;
}
void printInstructions()
{
    cout << "Working with fraction arrays from text files\n";
}

void readFile(const char *fileName, vector<Fraction> &Arr)
{
    ifstream fin;

    fin.open(fileName);
    if (!fin)
    {
        cout << "Read file failed \n";
        return;
    }
    else
    {
        Arr.resize(0);
        cout << "Reading data from " << fileName << ".\n";
        while (!fin.eof())
        {
            string tmp;
            fin >> tmp;
            Fraction A(0, 1);
            bool isOkay = Fraction::tryParse(tmp, A);
            if (isOkay)
            {
                Arr.push_back(A);
            }
        }
        cout << "Expected to find " << Arr.size() << " fraction(s).\n\n";
    }
    fin.close();
    return;
}

bool Fraction::tryParse(string info, Fraction &f)
{
    int slash = 0, pos = 0;
    for (int i = 0; i < info.size(); i++)
    {
        if (info[i] == '/')
        {
            slash += 1;
            pos = i;
        }
    }
    if ((slash == 1 && pos != 0) || (slash == 0 && pos == 0))
    {
        string tmp = {info[0]};
        for (int i = 1; i < pos; i++)
        {
            tmp += info[i];
        }
        string tmp2 = {info[pos + 1]};
        for (int i = pos + 2; i < info.size(); i++)
        {
            tmp2 += info[i];
        }
        if (isNumber(tmp) && isNumber(tmp2))
        {
            int nume = stoi(tmp), deno = stoi(tmp2);
            if (deno == 0)
            {
                cout << "Denominator can't be zero\n";
                return false;
            }
            Fraction frac(nume, deno);
            f = frac;
            return true;
        }
    }
    return false;
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

void printVector(vector<Fraction> vf)
{
    for (int i = 0; i < vf.size(); i++)
    {
        if (i == vf.size() - 1)
        {
            vf[i].printFraction();
            cout << "\n";
            return;
        }
        vf[i].printFraction();
        cout << ", ";
    }
    return;
}

void outPut(vector<Fraction> vf)
{
    cout << "Found " << vf.size() << " fraction(s): ";
    printVector(vf);
    cout << "Lowest term: ";
    for (int i = 0; i < vf.size(); i++)
    {
        if (i == vf.size() - 1)
        {
            cout << vf[i].convertLowestTerm(vf[i]);
            cout << "\n";
            break;
        }
        cout << vf[i].convertLowestTerm(vf[i]) << ", ";
    }
    cout << "Decimal: ";
    for (int i = 0; i < vf.size(); i++)
    {
        if (i == vf.size() - 1)
        {
            cout << vf[i].convertDecimal(vf[i]);
            cout << "\n";
            break;
        }
        cout << vf[i].convertDecimal(vf[i]) << ", ";
    }
    cout << "Percentage: ";
    for (int i = 0; i < vf.size(); i++)
    {
        if (i == vf.size() - 1)
        {
            cout << vf[i].convertPercentage(vf[i]);
            cout << "%\n";
            break;
        }
        cout << vf[i].convertPercentage(vf[i]) << "%, ";
    }
    cout << "\nProgram is exiting. Press enter to quit.... \n";
    char enter = ' ';
    while (enter != '\n')
    {
        enter = getchar();
    }
    return;
}
float Fraction::convertDecimal(const Fraction &f)
{
    float temp = round(f.m_accuracy * 100) / 100; 
    return temp;
}
string Fraction::convertLowestTerm(const Fraction &f)
{
    int nume, deno, gcd = findGCD(f.m_num, f.m_den);
    nume = f.m_num / gcd;
    deno = f.m_den / gcd;
    string res;
    if (deno == 1)
    {
        res += to_string(nume);
        return res;
    }
    if (nume / deno > 1)
    {
        int coef = nume / deno;
        nume -= deno * coef;
        res += to_string(coef) + ' ' + to_string(nume) + '/' + to_string(deno);
        return res;
    }
    res += to_string(nume) + '/' + to_string(deno);
    return res;
}
float Fraction::convertPercentage(const Fraction &f)
{
    float tmp = round(f.m_accuracy * 100) / 100; 
    return tmp*100
    ;
}