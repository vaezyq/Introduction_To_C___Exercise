// create by 22126 
// 2022/4/16 16:21
#include <iostream>

using namespace std;

int binaryToDecimal(const string &binaryString) {
    if (binaryString.size() == 1) {
        return static_cast<int>(binaryString[binaryString.size() - 1] - '0');
    } else {
        string temp{binaryString};
        return static_cast<int>(binaryString[binaryString.size() - 1] - '0') +
               2 * binaryToDecimal(temp.substr(0, temp.size() - 1));
    }
}


int main() {
    cout << binaryToDecimal("111") << endl;
    return 0;
    return 0;
}
