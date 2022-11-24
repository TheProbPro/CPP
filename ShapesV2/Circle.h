#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle : private Shape
{
public:
    Circle();
    Circle(double radius);
    void setRadius(double radius);
    double area() override;

private:
    double mRadius;
};

#endif // CIRCLE_H
