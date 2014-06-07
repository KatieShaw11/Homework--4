//
//  Course.cpp
//  Homework 4
//
//  Created by katie joy shaw on 6/6/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include "Course.h"

Course::Course (const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
}

Course::~Course() //deconstructor
{
    delete[] students;
}

Course::Course (const Course &theCourse) // copy constructor
{
    numberOfStudents = theCourse.numberOfStudents;
    courseName = theCourse.courseName;
    capacity = theCourse.capacity;
    for (int i = 0; i < capacity; i++)
    {
        students[i] = theCourse.students[i];
    }
}




string Course::getCourseName() const
{
    return courseName;
}

void Course::addStudent (const string& name)
{
    const int increaseCap = 10;
    
    if(numberOfStudents >= capacity)
    {
        string* students2 = new string [capacity+increaseCap];
        for (int i = 0; i < capacity; i++)
        {
            students2[i] = students[i];
        }
        delete [] students;
        students = students2;
        capacity += increaseCap;
    }
    students[numberOfStudents] = name;
    numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
    int iToDrop;
    
    for (int i = 0; i < numberOfStudents; i++)
    {
        if (students[i] == name)
        {
            iToDrop = i;
        }
    }
    
    for(int i = iToDrop; i < capacity; i++)
    {
        students[i] = students[i+1];
    }
        
    numberOfStudents--;
}

void Course::clear()
{
    for (int i = 0; i < capacity; i++)
    {
        students[i] = "";
    }
}

string* Course::getStudents() const
{
    return students;
}

int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}







