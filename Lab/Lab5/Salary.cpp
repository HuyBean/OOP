#include "Salary.h"
Employee::Employee()
{
    _id = 0;
    _name = "";
    _day = 0;
    _product = 0;
}

Employee::Employee(int ID, string NAME, int DAY, int PRODUCT)
{
    _id = ID;
    _name = NAME;
    _day = DAY;
    _product = PRODUCT;
}

string Employee::toString()
{
    stringstream builder;
    builder << "Product ID=" << _id << ", "
            << "Name=" << _name << ", "
            << "WorkDay=" << _day << ", "
            << "Product=" << _product;

    string result = builder.str();
    return result;
}
Employee Employee::Read(const char *fileName)
{
    stringstream ss(fileName);
    string buffer, ID, NAME, DAY, PRODUCT;
    getline(ss, buffer, '=');
    getline(ss, ID, ',');
    getline(ss, buffer, '=');
    getline(ss, NAME, ',');
    getline(ss, buffer, '=');
    getline(ss, DAY, ',');
    getline(ss, buffer, '=');
    getline(ss, PRODUCT, ',');
    Employee Tmp(stoi(ID), NAME, stoi(DAY), stoi(PRODUCT));
    return Tmp;
}
// Employee parse(string data)
// {
//     const string Space = " ";

//     size_t foundPos = data.find_first_of(Space);
//     string info = data.substr(foundPos + 1, data.length() - foundPos - 1);

//     const string Separator = ", ";
//     vector<string> tokens = Utils::String::splitToken(info, Separator);

//     const string Divider = "=";
//     vector<string> pair1 = Utils::String::splitToken(tokens[0], Divider);
//     string id = pair1[1];
//     int ID = stoi(id);

//     vector<string> pair2 = Utils::String::splitToken(tokens[1], Divider);
//     string name = pair2[1];

//     vector<string> pair3 = Utils::String::splitToken(tokens[2], Divider);
//     string buffer = pair3[1];
//     int day = stoi(buffer);

//     vector<string> pair4 = Utils::String::splitToken(tokens[3], Divider);
//     buffer = pair4[1];
//     int product = stoi(buffer);

//     Employee E(ID, name, day, product);
//     return E;
// }

int Employee::getSalary()
{
    return _day * _product * 1000;
}
Data::Data()
{
    this->fileName = NULL;
    this->size = 0;
}
Data::Data(const char *fileName, vector<Employee> Empl, int Size)
{
    this->fileName = fileName;
    this->size = Size;
    Empl.resize(0);
}
void Data::readFile()
{
    vector<Employee> E;
    ifstream fin;
    fin.open(fileName);
    if (!fin)
    {
        cout << "Can't open file\n";
        return;
    }
    fin >> size;
    // E.resize(size);
    while (!fin.eof())
    {
        Employee Tmp;
        Tmp.Read(fileName);
        E.push_back(Tmp);
    }
    fin.close();
    E = this->Emp;
    return;
}
void Data::writeFile()
{
}
void Data::Sort()
{
    for (int i = 0; i < this->Emp.size(); i++)
    {
        for (int j = i + 1; j < Emp.size(); j++)
        {
            if (Emp[i].getSalary() < Emp[j].getSalary())
            {
                swap(Emp[i], Emp[j]);
            }
        }
    }
    return;
}

void Data::printOut(vector<Employee> Empl)
{
    for (int i = 0; i < Empl.size(); i++)
    {
        cout << Emp[i].toString() << endl;
    }
    return;
}

// vector<string> Utils::String::splitToken(string Token, string end)
// {
//     vector<string> Res;

//     int start = 0;
//     size_t Pos = Token.find(end, start);

//     while (Pos != string::npos)
//     {
//         int count = Pos - start;
//         string token = Token.substr(start, count);
//         Res.push_back(token);

//         start = Pos + end.length();
//         Pos = Token.find(end, start);
//     }

//     // the remaining
//     string token = Token.substr(start, Token.length() - start);
//     Res.push_back(token);

//     return Res;
// }