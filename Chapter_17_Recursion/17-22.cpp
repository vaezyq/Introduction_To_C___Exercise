// create by 22126 
// 2022/4/16 16:31
#include <iostream>

using namespace std;

char getHexChar(int num) {
    if (num >= 0 && num <= 9) {
        cout << static_cast<char>('0' + num);
        cout << endl;
        return static_cast<char>('0' + num);
    } else {
        cout << static_cast<char>('A' + (num - 10));
        cout << endl;
        return static_cast<char>('A' + (num - 10));
    }
}

string decimalToHex(int value) {
    string res{""};
    if (value == 0) {
        return "";
    } else {
        res.append(decimalToHex(value / 16));
        res.append(1, getHexChar(value % 16));

    }
    return res;
}

int main() {
    cout << decimalToHex(18);

    return 0;
}
