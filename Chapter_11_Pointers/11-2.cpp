// create by 22126 
// 2022/4/12 22:06
#include <iostream>

using namespace std;

bool isVowel(const char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    }
    return false;
}

int main() {

    int size;
    cin >> size;
    char *arr = new char[size];
    char c;
    int count{0};
    for (int i = 0; i < size; ++i) {
        cin >> c;
        if (!isVowel(c)) {
            arr[count++] = c;
        }
    }
    for (auto i = 0; i < count; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
