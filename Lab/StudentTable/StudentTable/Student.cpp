#include "Student.h"

Student::Student()
{
    this->_name = "";
    this->_phone = "";
    this->_address = "";
}
Student::Student(string n, string p, string a)
{
    this->_name = n;
    this->_phone = p;
    this->_address = a;
}
Student::Student(string studentString)
{
    vector<string> sub = Utils::String::split(studentString, " ");
    for (int i = 0; i < sub.size(); i++)
    {
        if(sub[i] == "SDT")
        {
            *this = Student("Ho va ten", "SDT", "Dia chi");
            return;
        }
        else if (checkNumString(sub[i]) == true && sub[i].length() >= 10)
        {
            this->_phone = sub[i];
            break;
        }
    }
    vector<string> token = Utils::String::split(studentString, " " + this->_phone + " ");
    this->_name = token[0];
    this->_address = token[1];
}
Student::Student(const Student &St)
{
    this->_name = St._name;
    this->_phone = St._phone;
    this->_address = St._address;
}
string Student::getName()
{
    return this->_name;
}
string Student::getPhone()
{
    return this->_phone;
}
string Student::getAddr()
{
    return this->_address;
}
string Student::toString()
{
    return this->_name + " " + this->_phone + " " + this->_address;
}

bool checkNumString(string token)
{
    for (int i = 0; i < token.length(); i++)
    {
        if (isDigit(token[i]) == false)
        {
            return false;
        }
    }
    return true;
}