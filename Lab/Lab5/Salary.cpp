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
void Employee::Read(ifstream &ss)
{
    string buffer, ID, NAME, DAY, PRODUCT;
    getline(ss, buffer, '=');
    getline(ss, ID, ',');
    getline(ss, buffer, '=');
    getline(ss, NAME, ',');
    getline(ss, buffer, '=');
    getline(ss, DAY, ',');
    getline(ss, buffer, '=');
    getline(ss, PRODUCT, '\n');
    _id = stoi(ID);
    _name = NAME;
    _day = stoi(DAY);
    _product = stoi(PRODUCT);
}

Employee::Employee(const Employee &other)
{
    _id = other._id;
    _name = other._name;
    _day = other._day;
    _product = other._product;
}

int Employee::getSalary()
{
    return _day * _product;
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
        Tmp.Read(fin);
        Emp.push_back(Tmp);
    }
    fin.close();
    return;
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

void Data::printOut()
{
    for (int i = 0; i < Emp.size(); i++)
    {
        cout << Emp[i].toString() << ", Salary= ";
        convert(Emp[i].getSalary());
        cout << "\u0111" << endl;
    }
    return;
}

void convert(int n, int count)
{
    // static int count = 0;
    if (n < 1000)
    {
        cout << n;
        if (!count)
            cout << ".000 ";

        return;
    }
    convert(n / 1000, count + 1);
    cout << '.';
    if (n % 1000 < 10)
    {
        cout << "00" << n % 1000;
    }
    else if (n % 1000 < 100)
    {
        cout << "0" << n % 1000;
    }
    else
        cout << n % 1000;

    if (count == 0)
    {
        cout << ".000 ";
    }
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