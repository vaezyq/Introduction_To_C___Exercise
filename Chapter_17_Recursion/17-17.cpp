// create by 22126 
// 2022/4/16 12:56
#include <iostream>

using namespace std;

void displayPermuation(const string &s1, const string &s2) {
    if (s1.empty()) {
        cout << s2 << endl;
        return;
    }
    for (auto i = 0; i < s1.size(); i++) {
        string s1Str{s1};
        string s2Str{s2};
        s2Str.append(1, s1[i]);
        s1Str.erase(i,1);
        displayPermuation(s1Str, s2Str);
    }
}

void displayPermuation(const string &s) {
    displayPermuation(s, "");
}

int main() {
//    string s{"abc"};
    displayPermuation("abc");

    return 0;
}
