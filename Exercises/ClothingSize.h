#ifndef CLOTHINGSIZE_H
#define CLOTHINGSIZE_H


class ClothingSize
{
public:
    ClothingSize();

    double getHeight() const;
    double getWeight() const;
    double getAge() const;  //const gør variablerne konstante.

    void setHeight(double height);
    void setWeight(double weight);
    void setAge(double age);

    double getHatSize() const;
    double getJacketSize() const;
    double getWaistSize() const;

private: //Member variables
    double mHeight;
    double mWeight;
    double mAge; //alternativt double mHeight.mWeight.mAge;
};

#endif // CLOTHINGSIZE_H
