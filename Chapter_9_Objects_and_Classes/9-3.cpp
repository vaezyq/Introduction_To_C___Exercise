// create by 22126 
// 2022/4/9 20:25
#include <iostream>

#include "Account.h"

using namespace std;


int main() {
    Account account(1122, 20000, 0.045);
    account.withdraw(2500);
    account.deposit(3000);
    cout << "balance: " << account.getBalance() << endl
         << "getMonthlyInterestRate" << account.getMonthlyInterestRate() << endl;

    return 0;
}
