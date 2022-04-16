// create by 22126 
// 2022/4/16 15:23
#include <iostream>

using namespace std;

int getNum(char c) {
    if (c >= '0' && c <= '9') {
//        cout << static_cast<int>(c - '0') << endl;
        return static_cast<int>(c - '0');
    } else {
        return static_cast<int>(c - 'A') + 10;
    }
}

int hexToDecimal(const string &hexString) {
    if (hexString.size() == 1) {
        return getNum(hexString[0]);
    } else {
        string temp{hexString};
        return getNum(hexString[hexString.size() - 1]) + 16 * hexToDecimal(temp.substr(0, temp.size() - 1));
    }
}

int main() {
    cout << hexToDecimal("10") << endl;
    return 0;
}
