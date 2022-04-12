//
// Created by 22126 on 2022/4/10.
//

#include "MyInteger.h"
#include <cmath>
#include <iostream>

MyInteger::MyInteger(int value) : value(value) {}

int MyInteger::get() const {
    return value;
}

bool MyInteger::isEven() const {
    return value % 2 == 0;
}

bool MyInteger::isOdd() const {
    return !isEven();
}

bool MyInteger::isPrime() const {
    for (auto i = 2; i < value; ++i) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

bool MyInteger::isEven(int value) {
    return (value % 2 == 0);
}

bool MyInteger::isOdd(int value) {
    return !isEven(value);
}

bool MyInteger::isPrime(int value) {
    for (auto i = 2; i < value; ++i) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

bool MyInteger::isEven(const MyInteger &myInteger) {
    return myInteger.isEven();
}

bool MyInteger::isOdd(const MyInteger &myInteger) {
    return myInteger.isOdd();
}

bool MyInteger::isPrime(const MyInteger &myInteger) {
    return myInteger.isPrime();
}

bool MyInteger::equals(int value) {
    return this->value == value;
}

bool MyInteger::equals(const MyInteger &myInteger) const {
    return value == myInteger.get();
}

int MyInteger::parseInt(const std::string &str) {
    auto res{0};
    for (int i = 0, j = str.size() - 1; i < str.length(); i++, j--) {

//        std::cout << j << std::endl;
//        std::cout << static_cast<int>(str[i]) << std::endl;
        res += (static_cast<int>(str[i]) - 48) * pow(10, j);
//        std::cout << res << std::endl;
    }
    return res;
}












