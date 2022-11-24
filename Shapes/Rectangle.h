#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"


class Rectangle : public Shape
{
public:
    Rectangle();
    Rectangle(double length, double height);
    void setLength(double length);
    void setHeigt(double height);

protected:
    double mLength, mHeight;
};

#endif // RECTANGLE_H
