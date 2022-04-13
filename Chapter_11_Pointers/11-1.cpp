// create by 22126 
// 2022/4/12 21:51
#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;

    int *arr = new int[size];

    for (auto i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int even_number{0}, odd_number{0};

    for (auto i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_number++;
        } else {
            odd_number++;
        }
    }
    cout << "odd number: " << odd_number << "even number: " << even_number << endl;
    return 0;
}
