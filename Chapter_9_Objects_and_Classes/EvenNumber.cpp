//
// Created by 22126 on 2022/4/10.
//

#include "EvenNumber.h"

EvenNumber::EvenNumber() {
    value = 0;
}

EvenNumber::EvenNumber(int value) {
    this->value = value;
}

int EvenNumber::getNext() const {
    return value + 2;
}

int EvenNumber::getPrevious() const {
    int temp = value - 2;
    if (temp < 0) {
        return 0;
    } else {
        return temp;
    }
}
