#include "QuadratiEquation.h"
#include "iostream"
#include <string>
#include <cmath>

QuadratiEquation::QuadratiEquation()
{
    mA = 0;
    mB = 0;
    mC = 0;
}

QuadratiEquation::QuadratiEquation(double a, double b, double c){
    mA = a;
    mB = b;
    mC = c;
}

std::string QuadratiEquation::solve(){
    double real = 0;
    double imaginary = 0;

    double solution1 = 0;
    double solution2 = 0;

    double d = 0;

    d = (mB * mB) - (4 * mA * mC);

    if (d == 0){
    solution1 = -mB /(2 * mA);
    return "The equation has the real solution: x=" + std::to_string(solution1);
    }

    else if (d > 0){
    solution1 = - (mB + sqrt(d))/(2 * mA);
    solution2 = - (mB - sqrt(d))/(2 * mA);
    return "The equation has the complex solutions x1=" + std::to_string(solution2) + " and x2=" + std::to_string(solution1);
    }

    else{
        real = -mB/(2*mA);
        imaginary = sqrt(-d)/(2*mA);
        return "The equation has the complex solution z1=" + std::to_string(real) + "+-" + std::to_string(imaginary) + "i";
    }

}
