// create by 22126 
// 2022/4/12 10:42
#include <iostream>
#include <vector>

using namespace std;

int main() {

    char flag = 'y';
    do {
        vector<string> words = {"write", "that"};
        int seed = rand() % (words.size());
        string res = words[seed];
        string str(res.size(), '*');
//        cout << str;
        int count = 0;
        int falseTime = 0;
        char guess;
        while (count < res.size()) {
            cout << "(Guess) Enter a letter in word >";
            cout << str;
            cin >> guess;
            if (res.find(guess) == string::npos) {
                cout << guess << " is not in the word" << endl;
                falseTime++;
                continue;
            }
            for (auto i = 0; i < res.size(); i++) {
                if (res[i] == guess) {
                    if (str[i] != '*') {
                        cout << guess << "  is already in the word";
                        break;
                    }
                    str[i] = guess;
                    count++;
                }
            }
        }
        cout << "The word is " << str << ". You missed " << falseTime << " times" << endl;
        cout << "Do you want to guess for another word? Enter y or n>";
        cin >> flag;
    } while (flag == 'y' || flag == 'Y');


    return 0;
}


















