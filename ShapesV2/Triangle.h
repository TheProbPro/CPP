#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape
{
public:
    Triangle();
    Triangle(double length, double height);
    void setHeight(double height);
    void setLength(double length);
    double area() override;

private:
    double mLength, mHeight;
};

#endif // TRIANGLE_H
