// create by 22126 
// 2022/4/10 21:34
#include <iostream>

using namespace std;

bool isVowel(char e) {
    char c = e;
    c = tolower(c);
    if (c == 'a' || c == 'i' || c == 'o' || c == 'e' || c == 'u') {
        return true;
    }
    return false;
}

int countVowels(const string &s) {
    int count = 0;
    for (auto e: s) {
        if (isVowel(e)) {
            count++;
        }
    }
    return count;
}


int main() {
    string str;
    cout << "Enter a string s: ";
    cin >> str;
    cout << countVowels(str);

    return 0;
}
