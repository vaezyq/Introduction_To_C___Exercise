// create by 22126 
// 2022/4/10 13:00
#include <iostream>
#include "EvenNumber.h"

using namespace std;

int main() {
    EvenNumber en(16);

    cout << "Next: " << en.getNext() << endl
         << "Previous " << en.getPrevious() << endl;

    return 0;
}
