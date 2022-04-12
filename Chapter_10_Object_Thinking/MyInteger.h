///
// Created by 22126 on 2022/4/10.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_MYINTEGER_H
#define INTRODUCTION_TO_C___EXERCISE_MYINTEGER_H

#include <string>

class MyInteger {
private:
    int value;
public:
    MyInteger(int value);


    int get() const;

    bool isEven() const;

    bool isOdd() const;



    bool isPrime() const;


    static bool isEven(int);

    static bool isOdd(int);

    static bool isPrime(int);


    static bool isEven(const MyInteger &);

    static bool isOdd(const MyInteger &);

    static bool isPrime(const MyInteger &);


    bool equals(int);

    bool equals(const MyInteger &) const;


    static int parseInt(const std::string &);

};


#endif //INTRODUCTION_TO_C___EXERCISE_MYINTEGER_H
