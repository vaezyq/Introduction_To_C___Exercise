//
// Created by 22126 on 2022/4/10.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_EVENNUMBER_H
#define INTRODUCTION_TO_C___EXERCISE_EVENNUMBER_H


class EvenNumber {

private:
    int value;
public:
    EvenNumber();

    EvenNumber(int value);

    int getValue() const { return value; }


    int getNext() const;

    int getPrevious() const;

};


#endif //INTRODUCTION_TO_C___EXERCISE_EVENNUMBER_H
