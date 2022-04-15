// create by 22126 
// 2022/4/15 23:01
#include <iostream>

using namespace std;

void reverseDisplay(const string &s, int high) {
    if (high == -1) {
        return;
    } else {
        cout << s[high];
        reverseDisplay(s, high - 1);
    }

}

void reverseDisplay(const string &s) {
    reverseDisplay(s, s.size() - 1);
}

int main() {
    reverseDisplay("abcd");
    return 0;
}
