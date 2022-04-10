// create by 22126 
// 2022/4/10 16:26
#include <iostream>

using namespace std;

string commChars(const string &s1, const string &s2) {
    string *res = new string();
    for (const auto &e: s1) {
        if (s2.find(e) != string::npos) {
            res->insert(res->end(), 1, e);
        }
    }
    return *res;
}

int main() {
    string s1, s2;
    cout << "Enter a string s1: ";
    cin >> s1;
    cout << "Enter a string s2: ";
    cin >> s2;
    string res = commChars(s1, s2);
    if (res.size() == 0) {
        cout << "No common characters" << endl;
    } else {
        cout << "The common characters are " << res;
    }

    return 0;
}
