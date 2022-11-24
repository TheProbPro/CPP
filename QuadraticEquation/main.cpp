#include <iostream>
#include "QuadratiEquation.h"

int main()
{
    //Quadratic Equation opgave

    double a;
    double b;
    double c;
    unsigned int repeat;

    do{
        std::cout << "enter value for a";
        std::cin >> a;
        std::cout << "enter value for b";
        std::cin >> b;
        std::cout << "enter value for c";
        std::cin >> c;

        QuadratiEquation q1(a, b, c);


        std::cout << q1.solve() << std::endl;

        std::cout << "Press 1 to enter new values, or anything else to stop" << std::endl;
        std::cin >> repeat;
    } while (repeat == 1);

    return 0;
}
