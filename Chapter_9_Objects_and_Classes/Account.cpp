//
// Created by 22126 on 2022/4/9.
//

#include "Account.h"
#include<iostream>

using namespace std;

int Account::getId() const {
    return id;
}

void Account::setId(int id) {
    Account::id = id;
}

double Account::getBalance() const {
    return balance;
}

void Account::setBalance(double balance) {
    Account::balance = balance;
}

double Account::getAnnualInterestRate() const {
    return annualInterestRate;
}

void Account::setAnnualInterestRate(double annualInterestRate) {
    Account::annualInterestRate = annualInterestRate;
}

double Account::getMonthlyInterestRate() const {
    return annualInterestRate / 12.0;
}

void Account::withdraw(double amount) {

    if (this->balance - amount >= 0) {
        cout << "取出成功" << endl;
        this->balance -= amount;
    } else {
        cout << "余额不够" << endl;
    }


}

void Account::deposit(double amount) {
    this->balance += amount;

}

Account::Account() {

}

Account::Account(int id, double balance, double annualInterestRate) : id(id), balance(balance),
                                                                      annualInterestRate(annualInterestRate) {}
