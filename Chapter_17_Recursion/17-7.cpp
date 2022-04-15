// create by 22126 
// 2022/4/15 20:31
#include <iostream>

using namespace std;

int calledTimes = 0;

bool isPalindrome(string &s, int low, int high) {
    calledTimes++;
    if (low >= high) {
        return true;
    } else {
        return isPalindrome(s, low + 1, high - 1);
    }
}

int main() {


    string s("aba");
    cout << boolalpha << isPalindrome(s, 0, s.size() - 1) << endl;
    cout << calledTimes;

    return 0;
}
