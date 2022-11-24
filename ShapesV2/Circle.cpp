#include "Circle.h"
#include "cmath"
#include "iomanip"

Circle::Circle()
{
    mRadius = 0;
}

Circle::Circle(double radius) : Shape("Circle"){
    mRadius = radius;
}

void Circle::setRadius(double radius){
    mRadius = radius;
}

double Circle::area(){
    return pow(mRadius,2) * M_PI;
}
