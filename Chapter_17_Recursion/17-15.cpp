// create by 22126 
// 2022/4/16 12:34
#include <iostream>

using namespace std;


int numberOfSpaces(const string &s, int i) {
    if (i < 0) {
        return 0;
    }
    auto sum{0};
    if (s[i] == ' ') {
        sum++;
    }
    sum += numberOfSpaces(s, --i);
    return sum;

}

int numberOfSpaces(const string &s) {
    return numberOfSpaces(s, s.size() - 1);
}

int main() {
    string s{"dsaef ferf  fer"};
    cout << numberOfSpaces(s);

    return 0;
}
