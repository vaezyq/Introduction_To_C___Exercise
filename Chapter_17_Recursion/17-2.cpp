// create by 22126 
// 2022/4/15 19:49
#include <iostream>

using namespace std;

int main() {


    int n;
    cout << "enter an index ";
    cin >> n;
    auto f0{0}, f1{1}, res{0};
    if (n == 0) {
        cout << f0;
        return 0;
    } else if (n == 1) {
        cout << f1;
        return 0;
    } else {
        for (auto i = 2; i <= n; ++i) {
            res += (f0 + f1);
            f0 = f1;
            f1 = res;
        }
        cout << res;
    }
    return 0;
}
