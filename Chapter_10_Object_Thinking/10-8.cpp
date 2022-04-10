// create by 22126 
// 2022/4/10 21:57
#include <iostream>

using namespace std;

int main() {

    string dollarStr;
    cin >> dollarStr;

    auto idx = dollarStr.find(".");
    for (auto i = 0; i < idx; ++i) {
        cout << dollarStr[i];
    }
    cout << endl;
    for (auto i = idx + 1; i < dollarStr.size(); ++i) {
        cout << dollarStr[i];
    }


    return 0;
}
