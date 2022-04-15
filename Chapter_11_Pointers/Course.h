//
// Created by 22126 on 2022/4/14.
//

#ifndef INTRODUCTION_TO_C___EXERCISE_COURSE_H
#define INTRODUCTION_TO_C___EXERCISE_COURSE_H



#include<iostream>

using namespace std;

class Course {
private:
    string courseName;
    string *students;
    int numOfStudents;
    int capacity;

public:
    Course(const string &courseName, int capacity);

    ~Course();

    string getCourseName() const;

    void addStudent(const string &);

    void dropStudent(const string &);

    string *getStudent() const;

    int getNumOfStudents();

};


#endif //INTRODUCTION_TO_C___EXERCISE_COURSE_H
