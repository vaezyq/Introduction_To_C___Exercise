// create by 22126 
// 2022/4/15 20:02
#include <iostream>
#include <cmath>

using namespace std;

double sumSeries(int n, double res) {
    if (n == 1) {
        return res + 1;
    } else {
        return sumSeries(n - 1, res + (1.0 / pow(n, 2)));
    }
}

double sumSeries(int n) {
    return sumSeries(n, 0);
}


int main() {
    cout << sumSeries(3);
    return 0;
}
