//
// Created by 22126 on 2022/4/12.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_STOCK_H
#define INTRODUCTION_TO_C___EXERCISE_STOCK_H

#include<string>

using namespace std;

class Stock {
private:
    string symbol;
    string name;
    double previousClosingPrice;
    double currentPrice;

public:
    Stock(const string &symbol, const string &name);

    const string &getSymbol() const;

    const string &getName() const;

    double getPreviousClosingPrice() const;

    double getCurrentPrice() const;

    void setPreviousClosingPrice(double previousClosingPrice);

    void setCurrentPrice(double currentPrice);

    double getChangePercent() const;

};


#endif //INTRODUCTION_TO_C___EXERCISE_STOCK_H
