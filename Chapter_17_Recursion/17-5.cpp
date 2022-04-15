// create by 22126 
// 2022/4/15 20:15
#include <iostream>

using namespace std;

double sumSeries(int n, double res) {
    if (n == 1) {
        return res + 1.0 / (3);
    } else {
        return sumSeries(n - 1, res + 1.0 / (n * (n + 2)));
    }
}


double sumSeries(int n) {
    return sumSeries(n, 0);
}

int main() {
    cout << sumSeries(3);
    return 0;
}
