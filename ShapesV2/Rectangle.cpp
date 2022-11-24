#include "Rectangle.h"

Rectangle::Rectangle()
{
    mLength = 0;
    mHeight = 0;
}

Rectangle::Rectangle(double length, double height) : Shape("Rectangle"){
    mLength = length;
    mHeight = height;
}

void Rectangle::setHeigt(double height){
    mHeight = height;
}

void Rectangle::setLength(double length){
    mLength = length;
}

double Rectangle::area(){
    return mLength * mHeight;
}
