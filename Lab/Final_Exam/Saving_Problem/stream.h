#ifndef stream_h
#define stream_h

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "saving.h"
#include "bank.h"
using namespace std;

class Stream : public Saving
{
private:
    vector<Bank *> _bankList;

public:
    void readFile()
    {
        cout << "Reading all saving interests information from RatesVndDec2022.csv" << endl;
        ifstream f("RatesVndDec2022.csv");
        if (!f)
        {
            cout << "Can not read!" << endl;
            exit(0);
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                vector<float> interests;

                string line;
                getline(f, line);
                stringstream s(line);

                vector<string> tmpRead;
                string col;
                while (getline(s, col, ','))
                {
                    tmpRead.push_back(col);
                }

                if (i > 0)
                {
                    string bankName = tmpRead[0];
                    tmpRead.erase(tmpRead.begin());

                    vector<float> interests;
                    for (int i = 0; i < tmpRead.size(); i++)
                    {
                        interests.push_back(stof(tmpRead[i]));
                    }

                    Bank *bk = nullptr;

                    if (bankName == "Vietcombank")
                        bk = new Vietcombank(interests);
                    else if (bankName == "Agribank")
                        bk = new Agribank(interests);
                    else if (bankName == "Techcombank")
                        bk = new Techcombank(interests);
                    else if (bankName == "ACB")
                        bk = new ACB(interests);

                    _bankList.push_back(bk);
                }
            }
        }
    }
    void printList()
    {
        for (int i = 0; i < _bankList.size(); i++)
        {
            cout << _bankList[i]->toString() << _bankList[i]->getInterest()[0] << endl;
        }
    }
    int menu()
    {
        cout << "Which strategy do you want to choose?" << endl;
        cout << "1. Undetermined" << endl;
        cout << "2. Short term (1-6 months)" << endl;
        cout << "3. Long term( > 6 months)" << endl;
        cout << "Your choice: " << endl;
        int choice;
        cin >> choice;
        if (choice < 1 || choice > 3)
        {
            cout << "Wrong!!!" << endl;
            exit(0);
        }
        return choice;
    }
    void displayRecommend()
    {
    }
    string toString()
    {
        return "stream";
    }
};

#endif