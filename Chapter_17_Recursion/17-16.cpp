// create by 22126 
// 2022/4/16 12:39
#include <iostream>

using namespace std;

int count = 0;

void Hanoi(int n, char fromTower, char toTower, char auxTower) {
    if (n == 1) {
        cout << "move " << n << " from " << fromTower << " to toTower " << toTower << endl;
        count++;
        return;
    }
    Hanoi(n - 1, fromTower, auxTower, toTower);

    cout << "move " << n << " from " << fromTower << " to toTower " << toTower << endl;
    count++;
    Hanoi(n - 1, auxTower, toTower, fromTower);
}

int main() {
    Hanoi(5, 'A', 'B', 'C');
    cout << count;
    return 0;
}
