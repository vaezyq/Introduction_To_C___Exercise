//
// Created by 22126 on 2022/4/12.
//

#include "Loan.h"
#include <cmath>

Loan::Loan(double annualInterestRate, int numberOfYears, double loanAmount) : annualInterestRate(annualInterestRate),
                                                                              numberOfYears(numberOfYears),
                                                                              loanAmount(loanAmount) {}

double Loan::getAnnualInterestRate() const {
    return annualInterestRate;
}

void Loan::setAnnualInterestRate(double annualInterestRate) {
    Loan::annualInterestRate = annualInterestRate;
}

int Loan::getNumberOfYears() const {
    return numberOfYears;
}

void Loan::setNumberOfYears(int numberOfYears) {
    Loan::numberOfYears = numberOfYears;
}

double Loan::getLoanAmount() const {
    return loanAmount;
}

void Loan::setLoanAmount(double loanAmount) {
    Loan::loanAmount = loanAmount;
}

double Loan::getMonthlyPayment() const {
    double monthlyInterestRate = annualInterestRate / 1200;
    return loanAmount * monthlyInterestRate / (1 - (pow(1 / (1 + monthlyInterestRate), numberOfYears * 12)));
}

double Loan::getTotalPayment() const {
    return getMonthlyPayment() * numberOfYears * 12;
}

Loan::Loan() {
    annualInterestRate = 9.5;
    numberOfYears = 30;
    loanAmount = 100000;
}

double Loan::getMonthlyPayment(double annualInterestRate, int numberOfYears, double loanAmount) {
    double monthlyInterestRate = annualInterestRate / 1200;
    return loanAmount * monthlyInterestRate / (1 - (pow(1 / (1 + monthlyInterestRate), numberOfYears * 12)));
}

double Loan::getTotalPayment(double annualInterestRate, int numberOfYears, double loanAmount) {
    return Loan::getMonthlyPayment(annualInterestRate, numberOfYears, loanAmount) * numberOfYears * 12;
}
