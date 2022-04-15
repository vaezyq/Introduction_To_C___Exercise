// create by 22126 
// 2022/4/15 19:56
#include <iostream>

using namespace std;

int gcd(int m, int n) {
    if (m % n == 0) {
        return n;
    } else {
        return gcd(n, m % n);
    }
}


int main() {
    auto m{0}, n{0};
    cin >> m >> n;
    cout << gcd(m, n) << endl;

    return 0;
}
