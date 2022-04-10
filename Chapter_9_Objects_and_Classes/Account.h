//
// Created by 22126 on 2022/4/9.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_ACCOUNT_H
#define INTRODUCTION_TO_C___EXERCISE_ACCOUNT_H


class Account {


public:
    Account();

    Account(int id, double balance, double annualInterestRate);

    int getId() const;

    void setId(int id);

    double getBalance() const;

    void setBalance(double balance);

    double getAnnualInterestRate() const;

    void setAnnualInterestRate(double annualInterestRate);

    double getMonthlyInterestRate() const;

    void withdraw(double amount);

    void deposit(double amount);

private:
    int id;
    double balance;
    double annualInterestRate;


};


#endif //INTRODUCTION_TO_C___EXERCISE_ACCOUNT_H
