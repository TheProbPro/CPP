#include "Fibonaci.h"

Fibonaci::Fibonaci()
{
    mSize = 0;
    mDays = 0;
    mI1 = 1;
    mI2 = 1;
}

Fibonaci::Fibonaci(long initailSize, long NumberOfDays){
    mSize = initailSize;
    mDays = NumberOfDays;
    mI1 = 1;
    mI2 = 1;
}

long Fibonaci::generate(){
    long number1 = mI1;

    mI1 = mI2;
    mI2 = mI2 + number1;
    return mI1;
}

long Fibonaci::calculatePopulation(){
    long sum = mSize;
    long number;
    long initialSize1 = mSize;
    long initialSize2 = mSize;

    for (int i = 0; i < mDays/5-1; i++){
        sum = initialSize1 + initialSize2;
        number = initialSize2;
        initialSize2 = initialSize1 + initialSize2;
        initialSize1 = number;
    }
    mSize = sum;
    return sum;
}
