#ifndef FIBONACI_H
#define FIBONACI_H


class Fibonaci
{
public:
    Fibonaci();
    Fibonaci(long initialSize, long NumberOfDays);
    long generate();
    long calculatePopulation();

private:
    long mSize;
    long mDays;
    long mI1;
    long mI2;

};

#endif // FIBONACI_H
