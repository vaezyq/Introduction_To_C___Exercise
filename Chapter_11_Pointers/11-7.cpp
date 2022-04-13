// create by 22126 
// 2022/4/13 11:32
#include <iostream>
#include "../Chapter_9_Objects_and_Classes/Account.h"

using namespace std;

void printMainMenu() {
    cout << "Main menu" << endl
         << "1: check balance" << endl
         << "2: withdraw" << endl
         << "3: deposit" << endl
         << "4: exit" << endl
         << "Enter a choice: ";
}

int main() {
    auto *accArray = new Account[10];
    for (auto i = 0; i < 10; i++) {
        accArray[i] = Account(i, 100, 0.045);
    }
    int id;
    while (true) {
        cout << "Enter an id: ";
        cin >> id;
        if (id < 0 || id > 9) {
            continue;
        }
        while (true) {

            printMainMenu();
            auto choice{0};
            auto amount{0};
            cin >> choice;
            if (choice == 4) {
                break;
            }
            switch (choice) {
                case 1:
                    cout << "The balance is " << accArray[id].getBalance() << endl;
                    break;
                case 2:
                    cout << "Enter an amount to withdraw: ";
                    cin >> amount;
                    accArray[id].withdraw(amount);
                    break;
                case 3:
                    cout << "Enter an amount to deposit: ";
                    cin >> amount;
                    accArray[id].deposit(amount);
                    break;
                case 4:
                    break;
                default:
                    break;
            }
        }

    }

    return 0;
}
