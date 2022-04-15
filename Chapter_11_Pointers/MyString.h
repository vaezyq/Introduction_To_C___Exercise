//
// Created by 22126 on 2022/4/13.
//


#ifndef INTRODUCTION_TO_C___EXERCISE_MYSTRING_H
#define INTRODUCTION_TO_C___EXERCISE_MYSTRING_H

#include <vector>
#include <iostream>

using namespace std;


class MyString {
private:
    vector<char> vec;
public:
    MyString();

    MyString(const char ch, int size);

    MyString(const char chars[], int size);

    MyString append(const MyString &s);

    MyString append(const MyString &s, int index, int n);

    MyString append(int n, char ch);

    MyString assign(const char *chars);

    MyString assign(const MyString &s, int index, int n);

    MyString assign(const MyString &s, int n);

    MyString assign(int n, char ch);

    MyString substr(int index, int n) const;

    MyString substr(int index) const;

    MyString erase(int index, int n);

    const vector<char> &getVec() const;

    MyString(const char *cString);

    char at(int index) const;

    int length() const;

    void clear();

    bool empty() const;

    int compare(const MyString &s) const;

    int compare(int index, int n, const MyString &s) const;

    void copy(char s[], int index, int n);

    char *data() const;

    int find(char ch) const;

    int find(char ch, int index) const;

    int find(const MyString &s, int index) const;


};


#endif //INTRODUCTION_TO_C___EXERCISE_MYSTRING_H
