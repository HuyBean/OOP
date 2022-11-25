#ifndef MILK_TEA
#define MILK_TEA

#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <cstring>
#include <math.h>
using namespace std;

const string Tranchautrang = "Tran chau trang";
const string Tranchauden = "Tran chau den";
const string Thachtraicay = "Thach trai cay";
const string hongtra = "Hong tra";
const string olong = "O long";
const string vai = "vai", nhan = "nhan", dao = "dao", tra = "tra";

class Topping
{
public:
    string type;
    int price;

public:
    Topping(string t = "", int p = 0)
    {
        type = t;
        price = p;
    }
    friend ostream &operator<<(ostream &out, Topping T)
    {
        out << T.type << " " << T.price << " dong";
        return out;
    }
};

Topping A(Tranchautrang, 10);
Topping B(Tranchauden, 10);
Topping C(Thachtraicay, 15);
vector<Topping> Topping_List = {A, B, C};

void printTopping_List()
{
    for (int i = 0; i < Topping_List.size(); i++)
    {
        cout << Topping_List[i] << "\n";
    }
}

class Type
{
public:
    bool Olong;
    bool Hongtra;

public:
    Type(bool Ol = 0, bool Ho = 0)
    {
        Olong = Ol;
        Hongtra = Ho;
    }
    Type(const Type &T)
    {
        Olong = T.Olong;
        Hongtra = T.Hongtra;
    }
};

class Brand
{
public:
    bool Tra;
    bool Nhan;
    bool Dao;

public:
    Brand(bool T = 0, bool N = 0, bool D = 0)
    {
        Tra = T;
        Nhan = N;
        Dao = D;
    }
    Brand(const Brand &B)
    {
        Tra = B.Tra;
        Nhan = B.Nhan;
        Dao = B.Dao;
    }
};
class Basic
{
protected:
    Type m_type;
    Brand m_brand;
    float m_Volume;
    float m_milktea;
    float m_sugar;
    float m_ice;
    float m_price;

protected:
    void setInfo(Type T, Brand B, float V, float m, float s, float i, float p);
    void setInfo(const Basic &);

public:
    Basic();
    Basic(Type T, Brand B, float V, float m, float s, float i, float p);
    string getName();
    friend istream &operator>>(istream &, Basic &);
    friend ostream &operator<<(ostream &, Basic &);
};

Basic::Basic()
{
    Type T(0, 0);
    Brand B(0, 0, 0);

    m_type = T;
    m_brand = B;
    m_Volume = 0;
    m_milktea = 0;
    m_sugar = 0;
    m_price = 0;
    m_ice = 0;
}

void Basic::setInfo(const Basic &B)
{
    m_type = B.m_type;
    m_brand = B.m_brand;
    m_Volume = B.m_Volume;
    m_sugar = B.m_sugar;
    m_milktea = B.m_milktea;
    m_ice = B.m_ice;
    m_price = B.m_price;
}

void Basic::setInfo(Type T, Brand B, float V, float m, float s, float i, float p)
{
    this->m_type = T;
    this->m_brand = B;
    this->m_Volume = V;
    this->m_milktea = m;
    this->m_sugar = s;
    this->m_ice = i;
    this->m_price = p;
}

Basic::Basic(Type T, Brand B, float V, float m, float s, float i, float p)
{
    this->m_type = T;
    this->m_brand = B;
    this->m_Volume = V;
    this->m_milktea = m;
    this->m_sugar = s;
    this->m_ice = i;
    this->m_price = p;
}
string Basic::getName()
{
    string name = "";
    if (m_type.Hongtra == 1)
    {
        name += hongtra;
    }
    else
    {
        name += olong;
    }

    if (name.find(tra) == string::npos && m_milktea != 0)
    {
        name.insert(0, "tra sua ");
    }
    else if (name.find(tra) != string::npos && m_milktea != 0)
    {
        name.insert(name.find(tra) + 3, " sua ");
    }

    if (m_brand.Nhan == 1)
    {
        name += nhan;
    }
    else if (m_brand.Tra = 1)
    {
        name += vai;
    }
    else
    {
        name += dao;
    }

    return name;
}
istream &operator>>(istream &in, Basic &B)
{
    int keyboard = 0;
    cout << "Nhap loai tra: \n 1/ Hong tra \n 2/O long \n Press your number: ";
    in >> keyboard;
    while (keyboard != 2 && keyboard != 1)
    {
        cout << "Nhap loai tra: \n 1/ Hong tra \n 2/O long \n Press your number: ";
        in >> keyboard;
    }

    Type T;
    if (keyboard == 2)
    {
        T = Type(1, 0);
    }
    if (keyboard == 1)
    {
        T = Type(0, 1);
    }
    B.m_type = T;

    cout << "Nhap loai huong lieu: \n 1/ Dao \n 2/Nhan \n Vai \n Press your number: ";
    in >> keyboard;
    while (keyboard != 2 && keyboard != 1 && keyboard != 3)
    {
        cout << "Nhap loai huong lieu: \n 1/ Dao \n 2/Nhan \n Vai \n Press your number: ";
        in >> keyboard;
    }

    Brand R;
    if (keyboard == 2)
    {
        R = Brand(0, 1, 0);
    }
    if (keyboard == 1)
    {
        R = Brand(0, 0, 1);
    }
    if (keyboard == 3)
    {
        R = Brand(1, 0, 0);
    }
    B.m_brand = R;

    cout << "\nNhap the tich: ";
    in >> B.m_Volume;
    cout << "\n Nhap so luong tra sua theo phan tram: ";
    in >> B.m_milktea;
    cout << "\nNhap luong duong mac dinh: ";
    in >> B.m_sugar;
    cout << "\n Nhap luong da mac dinh: ";
    in >> B.m_ice;
    cout << "\n Nhap gia co so: ";
    in >> B.m_price;

    return in;
}
ostream &operator<<(ostream &out, Basic &B)
{
    out << "Thong tin ly nuoc: \n";
    out << "Ten: " << B.getName() << "\n";
    out << "The tich: " << B.m_Volume << "ml \n";
    out << "Tra sua: " << B.m_milktea << "% \n";
    out << "Luong duong: " << B.m_sugar << "g \n";
    out << "Luong da: " << B.m_ice << "g \n";
    out << "Gia co so: " << B.m_price << " dong \n";
    return out;
}

class Option : public Basic
{
private:
    char m_size;
    int Sugar;
    int Ice;
    vector<Topping> Top;
    float Price;

public:
    Option();
    Option(char size, int S, int I, vector<Topping> T, float P, Basic Cs);
    Option(const Option &);
    Option &operator=(Option);
    friend istream &operator>>(istream &, Option &);
    friend ostream &operator<<(ostream &, const Option &);
    float getPrice();
};

Option::Option()
{
    m_size = 'S';
    Sugar = 0;
    Ice = 0;
    Price = 0;
}
Option::Option(char size, int S, int I, vector<Topping> T, float P, Basic Cs)
{
    Basic::setInfo(Cs);
    Sugar = S;
    m_size = size;
    Ice = I;
    Top = T;
    Price = P;
}
Option::Option(const Option &B)
{
    Basic::setInfo(B);
    Sugar = B.Sugar;
    m_size = B.m_size;
    Ice = B.Ice;
    Top = B.Top;
    Price = B.Price;
}
Option &Option::operator=(Option B)
{
    Basic::setInfo(B);
    Sugar = B.Sugar;
    m_size = B.m_size;
    Ice = B.Ice;
    Top = B.Top;
    Price = B.Price;
}
istream &operator>>(istream &in, Option &O)
{
    Basic Temp;
    in >> Temp;
    char s, int Su, int Pri, int Ic, int keyboard;
    vector<Topping> To;
    cout << "\nNhap size: S hay M hay L";
    in >> s;
    cout << "\nNhap luong duong: 0 50 100 150";
    in >> Su;
    cout << "\nNhap luong da: 0 50 100 150";
    in >> Ic;
    cout << "\n Moi xem bang topping va chon\n";
    printTopping_List();
    cout << "\nBan chon loai 1 hay 2 hay 3?\n";
    in >> keyboard;
    if (keyboard == 1)
    {
        To.push_back(A);
    }
    if (keyboard == 2)
    {
        To.push_back(B);
    }
    if (keyboard == 3)
    {
        To.push_back(C);
    }
    cout << "Nhap gia tien: ";
    in >> Pri;

    O = Option(s, Su, Ic, To, Pri, Temp);
    return in;
}
ostream &operator<<(ostream &out, const Option &B)
{
    out << "\nThong tin ly nuoc: ";
    out << "\nTen: " << Basic::getName;
    out << "\nTong the tich:" << B.m_Volume;
    out << "\nTong luong duong: " << B.Sugar;
    out << "\nTong luong da: " << B.Ice;
    out << "\nSize: " << B.m_size;
    out << " \nTopping: ";
    for (int i = 0; i < B.Top.size(); i++)
    {
        out << B.Top[i] << endl;
    }
    return out;
}
float Option::getPrice()
{
    float total = 0;
    total = Basic::m_price;
    if (this->m_size == 'M')
    {
        total += 5000;
    }
    else if (this->m_size == 'L')
    {
        total += 10000;
    }
    for (int i = 0; i < Top.size(); i++)
    {
        total += Top[i].price;
    }
    return total;
}

class Order
{
private:
    vector<Option> List_Option;

public:
    float totalBill();
    void addBill();
    void removeBill();
};
#endif