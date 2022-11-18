#include "Account.h"

int main()
{
    SavingAccount Acc(5, 0.24, 2, 100); // 100: balance
    cout << Acc.calInterest() << endl;  // 4
    Acc.deposit(20);
    cout << Acc.getBalance() << endl; // 100 + 4 + 20 = 124
    Acc.increaseDuration();           // duration = 1
    cout << Acc.calInterest() << endl; // 2.48
    Acc.withdraw(30); 
    cout << Acc.getBalance() << endl; // 124 - 30 + 2.48 = 96.48 
    return 0;
}