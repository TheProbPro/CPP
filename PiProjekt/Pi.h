#ifndef PI_H
#define PI_H


class Pi
{
public:
    Pi();
    double gregoryLeibniz(int n);
    double calculate();

private:
    double mPi;
    int mN = 0;
};

#endif // PI_H
