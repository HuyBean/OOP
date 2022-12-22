#ifndef INFO
#define INFO

#include "Utils.h"
#include "Object.h"
#include "Vietcombank.h"
#include "ACB.h"
#include "Agribank.h"
#include "Techcombank.h"


using namespace std;

class Info : public Object
{
private:
    vector<Bank *> _bList;

public:
    void printListOfBank();
    void readFile();
    string toString();
    Bank *findBankWithHighestRate(int ter, int &month);
    void Menu();
    void AdviseUndetermined();
    void AdviseShortTerm();
    void AdviseLongTerm();
    void Advise(int term);
    string convert(double n);
};

#endif