#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"


int main()
{
    Circle c1 = Circle(4);
    std::cout << "The area of the Circle = " << c1.area() << std::endl;

    Rectangle r1 = Rectangle(4,5);
    std::cout << "The area of the Rectangle = " << r1.area() << std::endl;

    Triangle t1 = Triangle(5,4);
    std::cout << "The area of the Triangle = " << t1.area() << std::endl;

    return 0;
}
