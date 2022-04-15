// create by 22126 
// 2022/4/13 13:56
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string sortString(const string &str) {
    vector<char> vec;
    for (const auto &c: str) {
        vec.push_back(c);
    }
    sort(vec.begin(), vec.end());
    string res("");
    for (const auto &c: vec) {
        res.append(1, c);
    }
    return res;
}

int main() {

    cout << sortString(string("fedcba"));
    return 0;
}
