// create by 22126 
// 2022/4/10 16:17
#include <iostream>

using namespace std;


bool isAnagram(const string &s1, const string &s2) {
    if (s1.size() != s2.size()) {
        return false;
    }

    for (const auto e: s1) {
        if (s2.find(e) == string::npos) {
            return false;
        }
    }

    for (const auto e: s2) {
        if (s1.find(e) == string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1, s2;
    cout << "Enter a string s1: ";
    cin >> s1;
    cout << "Enter a string s2: ";
    cin >> s2;
    if (isAnagram(s1, s2)) {
        cout << "silent and listen are anagrams" << endl;
    } else {
        cout << "split and lisp are not anagrams" << endl;
    }

    return 0;
}
