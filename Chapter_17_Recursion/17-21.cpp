// create by 22126 
// 2022/4/16 16:45
#include <iostream>

using namespace std;

string binaryToDecimal(int value) {
    string res{""};
    if (value == 0) {
        return "";
    } else {
        res.append(binaryToDecimal(value / 2));
        res.append(1, static_cast<char>('0' + value % 2));
    }
    return res;
}

int main() {
    cout << binaryToDecimal(16);

    return 0;
}
