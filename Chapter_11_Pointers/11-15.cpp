// create by 22126 
// 2022/4/13 14:18
#include <iostream>
#include "MyString.h"

using namespace std;

int main() {
    MyString s1("abcdef", 6);
    auto s2 = s1.substr(2);
    for (auto &e: s2.getVec()) {
        cout << e << " ";
    }
    return 0;
}
