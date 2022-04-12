//
// Created by 22126 on 2022/4/12.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_LOAN_H
#define INTRODUCTION_TO_C___EXERCISE_LOAN_H


class Loan {
public:
    Loan();

    Loan(double annualInterestRate, int numberOfYears, double loanAmount);

    double getAnnualInterestRate() const;

    void setAnnualInterestRate(double annualInterestRate);

    int getNumberOfYears() const;

    void setNumberOfYears(int numberOfYears);

    double getLoanAmount() const;

    void setLoanAmount(double loanAmount);

    double getMonthlyPayment() const;

    double getTotalPayment() const;

    static double getMonthlyPayment(double annualInterestRate, int numberOfYears, double loanAmount);

    static double getTotalPayment(double annualInterestRate, int numberOfYears, double loanAmount);

private:
    double annualInterestRate;
    int numberOfYears;
    double loanAmount;

};


#endif //INTRODUCTION_TO_C___EXERCISE_LOAN_H
