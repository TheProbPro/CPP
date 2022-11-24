#ifndef QUADRATIEQUATION_H
#define QUADRATIEQUATION_H
#include <string>

class QuadratiEquation
{
public:
    QuadratiEquation();
    QuadratiEquation(double a, double b, double c);
    std::string solve();

private:
    //Member variables
    double mA, mB, mC;
};

#endif // QUADRATIEQUATION_H
