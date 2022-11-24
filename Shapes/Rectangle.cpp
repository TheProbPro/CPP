#include "Rectangle.h"

Rectangle::Rectangle()
{
    mLength = 0;
    mHeight = 0;
    mArea = mLength * mHeight;
}

Rectangle::Rectangle(double length, double height){
    mLength = length;
    mHeight = height;
    mArea = mLength * mHeight;
}

void Rectangle::setHeigt(double height){
    mHeight = height;
    mArea = mLength * mHeight;
}

void Rectangle::setLength(double length){
    mLength = length;
    mArea = mLength * mHeight;
}
