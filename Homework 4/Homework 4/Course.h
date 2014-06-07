//
//  Course.h
//  Homework 4
//
//  Created by katie joy shaw on 6/6/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#ifndef __Homework_4__Course__
#define __Homework_4__Course__

#include <iostream>
using namespace std;

class Course
{
public:
    Course (const string& courseName, int capacity);
    ~Course();
    Course (const Course &theCourse); // copy constructor

    string getCourseName() const;
    void addStudent (const string& name);
    void dropStudent(const string& name);
    string* getStudents() const;
    int getNumberOfStudents() const;
    void clear();
    
private:
    int numberOfStudents;
    string courseName;
    int capacity;
    string *students;
};

#endif /* defined(__Homework_4__Course__) */
