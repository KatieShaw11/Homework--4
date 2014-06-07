//
//  main.cpp
//  Homework 4
//
//  Created by katie joy shaw on 6/5/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include "Rectangle2D.h"
#include "Course.h"
using namespace std;

int* doubleCapacity(const int* list, int size);
int smallestElement(const int* NUMS, int SIZE);



int main()
{
    
                                //  11.1  //
    cout << "\t11.1\n\n";
    
    int *x;
    cout << "How many numbers u want?";
    int count;
    cin >> count;
    if (count >0)
    {
        x = new int[count];
        for (int i = 0; i < count; i++)
        {
            cout << "Enter a number: " << endl;
            cin >> x[i];
        }
        
        
        double average=0;
        
        for (int i= 0; i < count; i++)
        {
            average = average + x[i];
        }
        
        average = average/count;
        
        cout << "Average is: " << average << endl;
        
        int howManyNums = 0;
        
        for(int i = 0; i < count; i++)
        {
            if (x[i] > average)
            {
                howManyNums++;
            }
        }
        
        cout << howManyNums << " numbers are above average.\n";
    }
    else
        cout << "Invalid number";
    
    
                                //  11.3 //
    cout << "\n\n\t11.3\n\n";
    
    int size=10;
    int* list=new int [size];
    cout << "Original capacity: " << size << endl;
    list = doubleCapacity(list, size);
    cout << "New capacity: " << 2*size << endl;
    
                                //  11.5 //
    cout << "\n\n\t11.5\n\n";
    
    int size2 = 8;
    int* nums = new int[size2] {1,2,4,5,10,100,2,-22};
    cout << "\n\nSmallest element is: " << smallestElement(nums, size2) << endl;
    
                                //  11.9  //
    
    cout << "\n\n\t11.9\n\n";
    
    Rectangle2D r1(2, 2, 5.5, 4.9);
    Rectangle2D r2(4,5,10.5,3.2);
    Rectangle2D r3(3,5,2.3,5.4);
    
    cout << "Area for r1 (2, 2, 5.5, 4.9): " << r1.getArea() << endl;
    cout << "Perimeter for r1 (2, 2, 5.5, 4.9): " << r1.getPerimeter() << endl;
    
    cout << "Does r1 contain (3,3): " << r1.contains(3,3) << endl;
    cout << "Does r1 contain r2(4,5,10.5,3.2): " << r1.contains(r2) << endl;
    cout << "Does r1 overlap with r3(4,5,10.5,3.2): " << r1.overlaps(r3) << endl;
    
    // a constant function constains(const Rectangle2D &r) that returns true if the specified rectangle is inside this rectangle
    // a constant function overlaps(const Rectangle2D &r) that returns true if the specified rectangle overlaps with this rectangle.
    // Draw the UML diagram for the class. Implement the class. Write a test programs that creates three Rectangle2D objects r1(2, 2, 5.5, 4.9), r2(4,5,10.5,3.2), r3(4,5,10.5,3.2), and displays r1's area and perimeter, and displays the result of r1.contains(3,3), r1.contains(r2), and r1.overlaps(r3).
    
                                //  11.13  //
    
    cout << "\n\n\t11.13\n\n";
    
    Course course1("CompSci", 10);
    course1.addStudent("Charles");
    course1.addStudent("Amy");
    course1.addStudent("Peter");
    cout << "Students in the course be named:\n";
    for(int i = 0; i < course1.getNumberOfStudents(); i++)
    {
        cout << course1.getStudents()[i] << endl;
    }
    course1.dropStudent("Amy");
    cout << "\nAfter dropping one student, the students are:\n";
    for(int i = 0; i < course1.getNumberOfStudents(); i++)
    {
        cout << course1.getStudents()[i] << endl;
    }
    
    

}

                                //  11.3 //

int* doubleCapacity(const int* LIST, int SIZE) // the parameter list implies that all the elements should be copied in as well; otherwise why would you need to pass in "list"?
{
    int* list2 = new int [2*SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        list2[i] = LIST[i];
    }
    return list2;
}

                                //  11.5 //


int smallestElement(const int* NUMS, int SIZE)
{
    int smallest;
    smallest = NUMS[0];
    for (int i =0; i< SIZE; i++)
    {
        if (smallest > NUMS[i])
            smallest = NUMS[i];
    }
    return smallest;
}
