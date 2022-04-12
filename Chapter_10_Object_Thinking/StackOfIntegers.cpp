//
// Created by 22126 on 2022/4/11.
//

#include "StackOfIntegers.h"


int StackOfIntegers::pop() {
    return vec[--size];
}

void StackOfIntegers::push(int value) {
    vec.push_back(value);
    size++;
}
