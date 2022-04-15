//
// Created by 22126 on 2022/4/14.
//

#include <iostream>
#include "Course.h"


using namespace std;


Course::Course(const string &courseName, int capacity) {
    numOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
}


Course::~Course() {
    delete[]students;
}

string Course::getCourseName() const {
    return courseName;
}

void Course::addStudent(const string &studentName) {
    if (numOfStudents >= capacity) {
        capacity *= 2;
        auto studentsTemp = new string[capacity];
        for (auto i = 0; i < capacity; ++i) {
            studentsTemp[i] = students[i];
        }
        studentsTemp[numOfStudents++] = studentName;
        delete[]students;
        students = studentsTemp;
        return;
    }

    students[numOfStudents++] = studentName;
}


void Course::dropStudent(const string &str) {
    auto index{0};
    for (auto index = 0; index < capacity; ++index) {
        if (str == students[index]) {
            break;
        }
    }
    for (auto i = index; i < capacity - 1; ++i) {
        students[i] = students[i++];
    }
    capacity--;


}

string *Course::getStudent() const {
    return students;
}

int Course::getNumOfStudents() {
    return numOfStudents;
}
