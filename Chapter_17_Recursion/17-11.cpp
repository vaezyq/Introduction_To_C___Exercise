// create by 22126 
// 2022/4/15 22:44
#include <iostream>

using namespace std;

int productDigits(int n) {
    if (n == 0) {
        return 1;
    } else {
        return (n % 10) * (productDigits(n / 10));
    }
}


int main() {
    cout << productDigits(912) << endl;
    return 0;
}
