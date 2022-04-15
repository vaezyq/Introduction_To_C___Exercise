// create by 22126 
// 2022/4/15 20:26
#include <iostream>

using namespace std;

double sumSeries(int n, double res) {
    if (n == 1) {
        return res + 3.0 / (n + 2);
    } else {
        return sumSeries(n - 1, res + 3.0 / (n + 2));
    }
}

double sumSeries(int n) {
    return sumSeries(n, 0);
}

int main() {
    cout << sumSeries(2);
    return 0;
}
