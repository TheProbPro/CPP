#include "Triangle.h"

Triangle::Triangle()
{
    mLength = 0;
    mHeight = 0;
    mArea = (mLength * mHeight) / 2;
}

Triangle::Triangle(double length, double height){
    mLength = length;
    mHeight = height;
    mArea = (mLength * mHeight) / 2;
}

void Triangle::setHeight(double height){
    mHeight = height;
    mArea = (mLength * mHeight) / 2;
}

void Triangle::setLength(double length){
    mLength = length;
    mArea = (mLength * mHeight) / 2;
}
