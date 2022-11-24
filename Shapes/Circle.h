#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle : public Shape
{
public:
    Circle();
    Circle(double radius);
    void setRadius(double radius);


protected:
    double mRadius;
};

#endif // CIRCLE_H
