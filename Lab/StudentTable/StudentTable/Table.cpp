#include "Table.h"

Table::Table(vector<string> h, vector<int> w, vector<shared_ptr<Object>> d, shared_ptr<IValueConverter> c)
{
    this->headers = h;
    this->widths = w;
    this->data = d;
    this->converter = c;
}
void Table::display()
{
    shared_ptr<Object> Header = make_shared<Student>("Ho va ten", "SDT", "Dia chi");
    cout << convert(Header) << endl;
    cout << toString() << endl;
    for (int i = 0; i < this->data.size(); i++)
    {
        cout << convert(data[i]) << endl;
    }
    cout << toString() << endl;
}
string Table::convert(shared_ptr<Object> data)
{
    string res;
    string stu = data->toString();
    Student temp = Student(stu);

    string name = temp.getName();
    name.insert(name.end(), '|');
    while (name.size() <= widths[0])
    {
        name.insert(name.begin(), ' ');
    }

    string phone = temp.getPhone();
    phone.insert(phone.end(), '|');
    while (phone.size() <= widths[1])
    {
        phone.insert(phone.begin(), ' ');
    }

    string addr = temp.getAddr();
    addr.insert(addr.end(), '|');
    while (addr.size() <= widths[2])
    {
        addr.insert(addr.begin(), ' ');
    }

    res = name + phone + addr;
    return res;
}
string Table::toString()
{
    string res = "";
    for (int i = 0; i < this->widths.size(); i++)
    {
        for (int j = 0; j < this->widths[i]; j++)
        {
            res += "-";
        }
        res += "-";
    }
    return res;
}
