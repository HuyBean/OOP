#ifndef POSTTERM
#define POSTTERM

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <fstream>
using namespace std;

class POST
{
private:
    string m_address;
    string m_reciever;
    float m_weight;
    bool m_instance;

public:
    POST();
    POST(string, string, float, bool);
    POST(const POST &A);
    friend istream &operator>>(istream &in, POST &A);
    friend ostream &operator<<(ostream &out, const POST &A);

    string getReceiver();
    float countPrice();
    string getName();
    string getAddr();
    float getWeight();
    bool getIns();
};

string getFirstName(string Name);

class POST_OFFICE
{
private:
    vector<POST> P;

public:
    POST_OFFICE();
    POST_OFFICE(vector<POST> P);
    POST_OFFICE(const POST_OFFICE &P);
    void Output_Base_On_Name(string X);
    void Sort_Base_On_Name();
    float totalPrice();
    void addPost();
    friend istream &operator>>(istream &out, POST &PO);
    friend ostream &operator<<(ostream &out, const POST &PO);
};


#endif