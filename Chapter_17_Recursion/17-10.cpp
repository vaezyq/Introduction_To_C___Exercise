// create by 22126 
// 2022/4/15 22:27
#include <iostream>

using namespace std;

int count(const string &s, char a) {
    int num = 0;
    if (s.size() == 0) {
        return 0;
    } else {
        if (s[s.size() - 1] == a) {
            num++;
        }
        num += count(s.substr(0, s.size() - 1), a);
    }
    return num;
}


int main() {
    cout << count("Welcome", 'e');
    return 0;
}
