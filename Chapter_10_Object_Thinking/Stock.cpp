//
// Created by 22126 on 2022/4/12.
//

#include "Stock.h"

Stock::Stock(const string &symbol, const string &name) : symbol(symbol), name(name) {
    previousClosingPrice = 0;
    currentPrice = 0;
}

const string &Stock::getSymbol() const {
    return symbol;
}

const string &Stock::getName() const {
    return name;
}

double Stock::getPreviousClosingPrice() const {
    return previousClosingPrice;
}

double Stock::getCurrentPrice() const {
    return currentPrice;
}

void Stock::setPreviousClosingPrice(double previousClosingPrice) {
    Stock::previousClosingPrice = previousClosingPrice;
}

void Stock::setCurrentPrice(double currentPrice) {
    Stock::currentPrice = currentPrice;
}

double Stock::getChangePercent() const {
    return currentPrice - previousClosingPrice;
}
