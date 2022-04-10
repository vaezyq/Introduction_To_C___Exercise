// create by 22126 
// 2022/4/10 21:00
#include <iostream>

using namespace std;

bool isPalindrome(const string &s) {
    for (auto it = s.cbegin(), rt = s.cend() - 1; it < rt; ++it, --rt) {
        if (tolower(*it) != tolower(*rt)) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string s: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << str << " is a palindrome" << endl;
    } else {
        cout << str << " is not a palindrome" << endl;
    }

    return 0;
}
