#include "Triangle.h"

Triangle::Triangle()
{
    mLength = 0;
    mHeight = 0;
}

Triangle::Triangle(double length, double height) : Shape("Triangle"){
    mLength = length;
    mHeight = height;
}

void Triangle::setHeight(double height){
    mHeight = height;
}

void Triangle::setLength(double length){
    mLength = length;
}

double Triangle::area(){
    return (mLength * mHeight) / 2;
}
