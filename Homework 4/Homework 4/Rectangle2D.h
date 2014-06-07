//
//  Rectangle2D.h
//  Homework 4
//
//  Created by katie joy shaw on 6/5/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#ifndef __Homework_4__Rectangle2D__
#define __Homework_4__Rectangle2D__

#include <iostream>

class Rectangle2D
{

public:
    Rectangle2D();
    Rectangle2D(double X, double Y, double WIDTH, double HEIGHT);

    double getX() const;
    double getY() const;
    void setX(double X);
    void setY(double Y);
    
    double getWidth() const;
    double getHeight() const;
    void setWidth(double X);
    void setHeight(double Y);
    
    double getArea();
    double getPerimeter();
    bool contains (double x, double y) const;
    bool contains (const Rectangle2D &r) const;
    bool overlaps(const Rectangle2D &r);
    
private:
    double x; // data field that specifies the center of the rectangle w/ constant get functions and set functions. (Rectangle sides are parallel to x- or y-axes.)
    double y; // same
    double width;
    double height;


};

/*
 
 ///// UML DIAGRAM ////
 ////  RECTANGLE2D ////
 
 public:
 
 + Rectangle2D()
 + Rectangle2D(X : double, Y : double, WIDTH : double, HEIGHT : double)
 
 + getX() : double const
 + getY() : double const
 + setX(double X) : void
 + setY(double Y) : void
 
 + getWidth() : double const
 + getHeight() : double const
 + setWidth(double X) : void
 + setHeight(double Y) : void
 
 + getArea() : double
 + getPerimeter() : double
 + contains (double x, double y) : bool const
 + contains (const Rectangle2D &r) : bool const
 + overlaps(const Rectangle2D &r) : bool
 
 
 private:
 
 + x : double
 + y : double
 + width : double
 + height : double

 */

#endif /* defined(__Homework_4__Rectangle2D__) */
