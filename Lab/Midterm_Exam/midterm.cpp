#include "midterm.h"

POST::POST()
{
    m_address = "";
    m_reciever = "";
    m_weight = 0;
    m_instance = false;
}

POST::POST(string addr, string name, float weight, bool deliver)
{
    m_address = addr;
    m_reciever = name;
    m_weight = weight;
    m_instance = deliver;
}
POST::POST(const POST &A)
{
    m_address = A.m_address;
    m_reciever = A.m_reciever;
    m_weight = A.m_weight;
    m_instance = A.m_instance;
}

string POST::getReceiver()
{
    return this->m_reciever;
}

float POST::countPrice()
{
    return (m_weight * 15'000) + (m_instance * 30'000);
}

istream &operator>>(istream &in, POST &A)
{
    int keyboard;
    cout << "\nNhap dia chi nhan:";
    getline(in, A.m_address);
    cout << "\nNhap ten nguoi nhan:";
    getline(in, A.m_reciever);
    cout << "\nNhap trong luong buu pham: ";
    in >> A.m_weight;
    cout << "\nNhap lua chon gui nhanh hoac cham: \n1/ Nhanh \n2/ Cham\n";
    in >> keyboard;
    while (keyboard != 1 && keyboard != 2)
    {
        cout << "\nNhap lua chon gui nhanh hoac cham: \n1/ Nhanh \n2/ Cham\n";
        in >> keyboard;
    }
    if (keyboard == 1)
    {
        A.m_instance = true;
    }
    else
    {
        A.m_instance = false;
    }
    return in;
}
ostream &operator<<(ostream &out, const POST &A)
{
    out << "Dia chi nhan: " << A.m_address << "\n";
    out << "Ten nguoi nhan: " << A.m_reciever << "\n";
    out << "Trong luong buu pham: " << A.m_weight << "\n";
    out << "Chuyen phat: ";
    (A.m_instance == true) ? out << "Nhanh" : out << "Cham";
    out << "\n";
    return out;
}

string getFirstName(string Name)
{
    string res = "";
    for (int i = 0; i = Name.size(); i++)
    {
        if (Name[i] == ' ')
            break;
        res += Name[i];
    }
    res.reserve();
    return res;
}

POST_OFFICE::POST_OFFICE()
{
}
POST_OFFICE::POST_OFFICE(vector<POST> PT)
{
    this->P = PT;
}
POST_OFFICE::POST_OFFICE(const POST_OFFICE &PT)
{
    this->P = PT.P;
}
string POST::getAddr()
{
    return m_address;
}
float POST::getWeight()
{
    return m_weight;
}
bool POST::getIns()
{
    return m_instance;
}
void POST_OFFICE::Output_Base_On_Name(string X)
{
    ofstream fout;
    fout.open("output.txt");
    if (fout)
    {
        for (int i = 0; i < this->P.size(); i++)
        {
            if (X == P[i].getReceiver())
            {
                fout << "Address: " << P[i].getAddr() << endl;
                fout << "Name: " << P[i].getReceiver() << endl;
                fout << "Weight: " << P[i].getWeight() << endl;
            }
        }
    }
    else
    {
        cout << "\nCan't open file.";
    }
    fout.close();
    return;
}

void POST_OFFICE::addPost()
{
    POST temp;
    cin >> temp;
    P.push_back(temp);
}

void POST_OFFICE::Sort_Base_On_Name()
{
    string Name1 = "", Name2 = "";
    for (int i = 0; i < P.size(); i++)
    {
        for (int j = i + 1; j < P.size(); j++)
        {
            Name1 = getFirstName(P[i].getReceiver());
            Name2 = getFirstName(P[j].getReceiver());
            if ((int)Name1[0] > (int)Name2[0])
            {
                swap(P[i], P[j]);
            }
            else if ((int)Name1[0] == (int)Name2[0])
            {
                if (P[i].countPrice() < P[j].countPrice())
                {
                    swap(P[i], P[j]);
                }
            }
        }
    }
}

float POST_OFFICE::totalPrice()
{
    float total = 0;
    for (int i = 0; i < P.size(); i++)
    {
        total += P[i].countPrice();
    }
    return total;
}

istream &operator>>(istream &in, POST_OFFICE &PO)
{
    vector<POST> vP;
    POST PT;
    in >> PT;
    vP.push_back(PT);
    return in;
}
