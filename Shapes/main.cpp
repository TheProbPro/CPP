#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Shape.h"

int main()
{
    Rectangle rec1 = Rectangle(3,7);
    Circle cir1 = Circle(4);
    Triangle tri1 = Triangle(5,3);

    std::cout << "The area of the Rectangle is = " << rec1.getArea() << std::endl;
    std::cout << "The area of the Circle is = " << cir1.getArea() << std::endl;
    std::cout << "The area of the Triangle is = " << tri1.getArea() << std::endl;

    return 0;
}
