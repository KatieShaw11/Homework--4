//
//  Rectangle2D.cpp
//  Homework 4
//
//  Created by katie joy shaw on 6/5/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include "Rectangle2D.h"



Rectangle2D::Rectangle2D()
{
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

Rectangle2D::Rectangle2D(double X, double Y, double WIDTH, double HEIGHT)
{
    x = X;
    y = Y;
    width = WIDTH;
    height = HEIGHT;
}

double Rectangle2D::getX() const
{
    return x;
}

double Rectangle2D::getY() const
{
    return y;
}

void Rectangle2D::setX(double X)
{
    x = X;
}
void Rectangle2D::setY(double Y)
{
    y = Y;
}



double Rectangle2D::getWidth() const
{
    return width;
}

double Rectangle2D::getHeight() const
{
    return height;
}

void Rectangle2D::setWidth(double X)
{
    x = X;
}

void Rectangle2D::setHeight(double Y)
{
    y = Y;
}


double Rectangle2D::getArea()
{
    return width*height;
}

double Rectangle2D::getPerimeter()
{
    return 2*width+2*height;
}

bool Rectangle2D::contains (double x, double y) const // parameter x and y NOT data fields!
{
    if (x > ((this->x)+(width/2)) || x < ((this->x)-(width/2)))
        return false;
    else if (y > ((this->y)+(height/2)) || y < ((this->y)-(height/2)))
        return false;
    else
        return true;
}

bool Rectangle2D::contains (const Rectangle2D &r) const
{
    if(!contains((r.getX())-(r.getWidth()/2), ((r.getY())+(r.getHeight()/2))))
       return false;
    if(!contains(r.getX()-r.getWidth()/2, r.getY()-r.getHeight()/2))
        return false;
    if(!contains(r.getX()+r.getWidth()/2, r.getY()+r.getHeight()/2))
        return false;
    if(!contains(r.getX()+r.getWidth()/2, r.getY()-r.getHeight()/2))
        return false;
    return true;
}

bool Rectangle2D::overlaps(const Rectangle2D &r)
{
    if(contains((r.getX())-(r.getWidth()/2), ((r.getY())+(r.getHeight()/2))))
        return true;
    if(contains(r.getX()-r.getWidth()/2, r.getY()-r.getHeight()/2))
        return true;
    if(contains(r.getX()+r.getWidth()/2, r.getY()+r.getHeight()/2))
        return true;
    if(contains(r.getX()+r.getWidth()/2, r.getY()-r.getHeight()/2))
        return true;
    
    return false;
}






