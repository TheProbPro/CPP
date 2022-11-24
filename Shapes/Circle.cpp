#include "Circle.h"
#include "cmath"

Circle::Circle()
{
    mRadius = 0;
}

Circle::Circle(double radius){
    mRadius = radius;
    mArea = pow(mRadius,2) * M_PI;
}

void Circle::setRadius(double radius){
    mRadius = radius;
    mArea = pow(mRadius,2) * M_PI;
}


