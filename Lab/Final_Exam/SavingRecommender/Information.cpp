#include "Information.h"

void Info::printListOfBank()
{
    cout << "You can see our bank list \n\n";
    cout << "---------------------------------------------------------------------------\n";
    cout << "| Bank Name\t|   0\t1\t2\t3\t6\t12\t18\t24\t\n";
    cout << "===========================================================================\n";
    for (int i = 0; i < _bList.size(); i++)
    {
        cout << "| " << _bList[i]->toString() << "\t|   ";
        _bList[i]->printRate();
        cout << "\n";
    }
    cout << "---------------------------------------------------------------------------\n";
}
void Info::readFile()
{
    ifstream fin;
    fin.open("RatesVndDec2022.csv");
    if (!fin)
    {
        cout << "Can't open file\n";
        return;
    }
    else
    {
        cout << "Reading all saving interests information from RatesVndDec2022.csv\n";
        string temp;
        getline(fin, temp); // Skip the first line of csv files
        while (!fin.eof())
        {
            getline(fin, temp);
            vector<string> sub = Utils::String::split(temp, ","); //Split by the ','
            string bName = sub[0];
            vector<double> tempRate;
            sub.erase(sub.begin(), sub.begin() + 1);
            // for (int i = 0; i < temp.size(); i++)
            // {
            //     tempRate[i] = stod(sub[i]);
            // }
            for (auto &s : sub) //Convert string vector to double vector
            {
                std::stringstream parser(s); 
                double x = 0;
                parser >> x;
                tempRate.push_back(x);
            }

            if (bName == "Vietcombank")
            {
                Bank *bank = new Vietcombank(tempRate);
                _bList.push_back(bank);
            }
            if (bName == "Agribank")
            {
                Bank *bank = new Agribank(tempRate);
                _bList.push_back(bank);
            }
            if (bName == "ACB")
            {
                Bank *bank = new Agribank(tempRate);
                _bList.push_back(bank);
            }
            if (bName == "Techcombank")
            {
                Bank *bank = new Techcombank(tempRate);
                _bList.push_back(bank);
            }
            // _bList.push_back(bank);
        }
    }
    fin.close();
    return;
}
string Info::toString()
{
    return "";
}
Bank *Info::findBankWithHighestRate(int ter, int &month)
{
    if (ter == 1)
    {
        double maxRate = 0;
        int mont = 0;
        for (int i = 0; i < _bList.size(); i++)
        {
            if (_bList[i]->getInterestByMonth(0) > maxRate)
            {
                maxRate = _bList[i]->getInterestByMonth(0);
                mont = i;
            }
        }
        return _bList[mont];
    }
    if (ter == 2)
    {
        double maxRate = 0;
        int mont = 0;
        for (int i = 0; i < _bList.size(); i++)
        {
            int tmp = _bList[i]->findMonthHighestInterestTerm2();
            if (_bList[i]->getInterestByMonth(tmp) > maxRate)
            {
                maxRate = _bList[i]->getInterestByMonth(tmp);
                mont = i;
            }
        }
        month = _bList[mont]->findMonthHighestInterestTerm2();
        return _bList[mont];
    }
    if (ter == 3)
    {
        double maxRate = 0;
        int mont = 0;
        for (int i = 0; i < _bList.size(); i++)
        {
            int tmp = _bList[i]->findMonthHighestInterest();
            if (_bList[i]->getInterestByMonth(tmp) > maxRate)
            {
                maxRate = _bList[i]->getInterestByMonth(tmp);
                mont = i;
            }
        }
        month = _bList[mont]->findMonthHighestInterest();
        return _bList[mont];
    }
    return nullptr;
}
void Info::Menu()
{
    int keyboard = 1;
    while (keyboard == 1)
    {
        cout << "Which strategy do you want to choose?\n1. Undetermined\n2. Short term (1-6 months)\n3. Long term (> 6 months)\n";
        int inp = 0;
        cout << "Your choice: ";
        cin >> inp;
        while (inp < 1)
        {
            cout << "Please choose again (1->3)\n";
            cout << "Your choice: ";
            cin >> inp;
        }
        while (inp > 3)
        {
            cout << "Please choose again (1->3)\n";
            cout << "Your choice: ";
            cin >> inp;
        }
        Advise(inp);
        // printListOfBank();
        cout << "\n Keep asking?\n1. Yes\n2. No\n";
        cin >> keyboard;
        while (keyboard < 1)
        {
            cout << "\nPlease choose again:\n1. Yes\n2. No\n";
            cin >> keyboard;
        }
        while (keyboard > 2)
        {
            cout << "\nPlease choose again:\n1. Yes\n2. No\n";
            cin >> keyboard;
        }
    }
}
void Info::AdviseUndetermined()
{
    int month = 0;
    Bank *a = nullptr;
    a = findBankWithHighestRate(1, month);
    cout << "\nYou should deposit to " << a->toString() << " for " << a->getInterestByMonth(month) << " interest\n";
    cout << "For every 1.000.000 d you will have " << a->calcInterestEveryday(a->getInterestByMonth(month)) << " d interest everyday.\n";
}
void Info::AdviseShortTerm()
{
    int month = 0;
    Bank *a = nullptr;
    a = findBankWithHighestRate(2, month);
    cout << "\nYou should deposit to " << a->toString() << " for ";
    cout << a->findMonthHighestInterestTerm2() << " month for " << a->getInterestByMonth(month) << "%";
    cout << " interest\n";
    double money = 0;
    cout << "How much money you want to deposit?\t ";
    cin >> money;
    string tien = convert(a->calcMoney(a->findMonthHighestInterestTerm2(), money));
    cout << "After " << a->findMonthHighestInterestTerm2() << " months, you will have " << tien << " d\n";
}
void Info::AdviseLongTerm()
{
    int month = 0;
    Bank *a = nullptr;
    a = findBankWithHighestRate(3, month);
    cout << "\nYou should deposit to " << a->toString() << " for ";
    cout << a->findMonthHighestInterest() << " month for " << a->getInterestByMonth(month) << "%";
    cout << " interest\n";
    double money = 0;
    cout << "How much money you want to deposit?\t ";
    cin >> money;
    string tien = convert(a->calcMoney(a->findMonthHighestInterest(), money));
    cout << "After " << a->findMonthHighestInterest() << " months, you will have " << tien << " d\n";
}
void Info::Advise(int term)
{
    if (term == 1)
    {
        return AdviseUndetermined();
    }
    if (term == 2)
    {
        return AdviseShortTerm();
    }
    if (term == 3)
    {
        return AdviseLongTerm();
    }
    return;
}
string Info::convert(double n)
{
    stringstream stream;
    stream << fixed << n;
    string s = stream.str();
    s.erase(s.find_last_not_of('0') + 1, std::string::npos);
    s.erase(s.find_last_not_of('.') + 1, std::string::npos);
    int count = 0;
    for (int i = s.length(); i > 0; i--)
    {
        if (count == 3)
        {
            s.insert(s.begin() + i, '.');
            count = 0;
        }
        count += 1;
    }
    s.insert(s.begin(), ' ');
    return s;
}