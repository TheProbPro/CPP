#include "ClothingSize.h"
#include <cmath>

ClothingSize::ClothingSize()
{
    mHeight = 0;
    mWeight = 0;
    mAge = 0;
}

double ClothingSize::getAge() const {
    return mAge;
}

double ClothingSize::getWeight() const {
    return mWeight;
}

double ClothingSize::getHeight() const {
    return mHeight;
}

void ClothingSize::setAge(double age) {
    mAge=age;
}

void ClothingSize::setHeight(double height) {
    mHeight=height;
}

void ClothingSize::setWeight(double weight) {
    mWeight=weight;                             //sætter membervariablerne lig med parameteren.
}

double ClothingSize::getHatSize() const {
    return (mWeight/mHeight)41.25M_PI;
}

double ClothingSize::getJacketSize() const {
    double jacket = (mHeightmWeight)/335;
    if (mAge >= 40)
        jacket = jacket + (mAge-30)/10(1/8);
    return jacket;
}

double ClothingSize::getWaistSize() const {
    double waist = (mWeight)/2.6;
    if (mAge >= 30)
        waist = waist + (mAge-28)/2*(1/10);
    return waist;
}
