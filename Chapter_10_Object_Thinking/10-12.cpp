// create by 22126 
// 2022/4/12 13:51
#include <iostream>
#include "Stock.h"


using namespace std;

int main() {
    Stock s("MSFT", "Microsoft Corporation");
    s.setPreviousClosingPrice(27.5);
    s.setCurrentPrice(27.6);
    cout << s.getChangePercent();

    return 0;
}
