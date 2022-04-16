// create by 22126 
// 2022/4/16 12:26
#include <iostream>

using namespace std;


int getNumberOfLowercaseLetters(const string &s, int low) {
    int count = 0;
    if (low >= s.size()) {
        return 0;
    }
    if (s[low] <= 'z' && s[low] >= 'a') {
        count++;
    }
    count += getNumberOfLowercaseLetters(s, ++low);
    return count;
}

int getNumberOfLowercaseLetters(const string &s) {
    return getNumberOfLowercaseLetters(s, 0);
}

int main() {
    string s("adADF");
    cout << getNumberOfLowercaseLetters(s);

    return 0;
}
