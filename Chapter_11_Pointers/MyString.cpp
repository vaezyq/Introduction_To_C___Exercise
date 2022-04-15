//
// Created by 22126 on 2022/4/13.
//

#include "MyString.h"

MyString::MyString(const char ch, int size) {
    for (auto i = 0; i < size; i++) {
        vec.push_back(ch);
    }

}

MyString::MyString(const char *chars, int size) {
    for (auto i = 0; i < size; i++) {
        vec.push_back(chars[i]);
    }

}

MyString MyString::append(const MyString &s) {
    for (const auto &c: s.getVec()) {
        vec.push_back(c);
    }
}

const vector<char> &MyString::getVec() const {
    return vec;
}

MyString MyString::append(const MyString &s, int index, int n) {
    for (auto i = 0; i < n; ++i) {
        vec.push_back(s.getVec()[index + n]);
    }
    return *this;
}

MyString MyString::append(int n, char ch) {
    for (auto i = 0; i < n; ++i) {
        vec.push_back(ch);
    }
    return *this;
}

MyString MyString::assign(const char *chars) {
    vec.clear();
    for (auto i = 0; chars[i] != '\0'; ++i) {
        vec.push_back(chars[i]);
    }
    return *this;
}

MyString MyString::assign(const MyString &s, int index, int n) {
    vec.clear();
    for (auto i = 0; i < n; ++i) {
        vec.push_back(s.getVec()[index + i]);
    }
    return *this;
}

MyString MyString::assign(const MyString &s, int n) {
    vec.clear();
    for (auto i = 0; i < n; ++i) {
        vec.push_back(s.getVec()[i]);
    }
    return *this;
}

MyString MyString::assign(int n, char ch) {
    vec.clear();
    for (auto i = 0; i < n; ++i) {
        vec.push_back(ch);
    }
    return *this;
}

MyString MyString::substr(int index, int n) const {
    MyString *ms = new MyString;
    for (auto i = 0; i < n; ++i) {
        ms->vec[i] = vec[i + index];
    }
    return *ms;
}

MyString MyString::substr(int index) const {
    MyString *ms = new MyString;
    for (auto i = index; i < vec.size(); ++i) {
        ms->vec.push_back(vec[i]);
    }

    return *ms;
}

MyString MyString::erase(int index, int n) {
    vector<char> *vecRes;
    for (auto i = 0; i < index; ++i) {
        vecRes->push_back(vec[i]);
    }

    for (auto i = index; i < vec.size(); ++i) {
        vecRes->push_back(vec[i]);
    }
    vec = *vecRes;
    return *this;
}

MyString::MyString() {}

MyString::MyString(const char *cString) {
    for (auto i = 0; cString[i] != '\0'; ++i) {
        vec.push_back(cString[i]);
    }
}

char MyString::at(int index) const {
    return vec[index];
}

int MyString::length() const {
    return vec.size();
}

void MyString::clear() {
    vec.clear();
}

bool MyString::empty() const {
    return vec.empty();
}

int MyString::compare(const MyString &s) const {
    for (auto i = 0; i < vec.size() && i < s.vec.size(); ++i) {
        if()
    }
}

int MyString::compare(int index, int n, const MyString &s) const {
    return 0;
}





