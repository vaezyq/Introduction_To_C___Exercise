//
// Created by 22126 on 2022/4/11.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_STACKOFINTEGERS_H
#define INTRODUCTION_TO_C___EXERCISE_STACKOFINTEGERS_H

#include<vector>


class StackOfIntegers {
private:
    std::vector<int> vec;

    int size = 0;

public:
    void push(int value);

    int pop();

    bool isEmpty() {
        return size == 0;
    }


};


#endif //INTRODUCTION_TO_C___EXERCISE_STACKOFINTEGERS_H
