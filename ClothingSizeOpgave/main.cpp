#include <iostream>
#include "ClothingSize.h"

int main()
{
    //Clothing size opgave
    ClothingSize c1;  //opretter et object af klassen
    c1.setAge(21);    //sætter variablerne
    c1.setHeight(183);
    c1.setWeight(73);
    //udskriver svarende på metoderne
    std::cout << "Age = " << c1.getAge() << " height = " << c1.getHeight() << " weight = " << c1.getWeight() << std::endl;
    std::cout << "Hat size = " << c1.getHatSize() << " jacket size = " << c1.getJacketSize() << " waist size = " << c1.getWaistSize() << std::endl;
    return 0;
}
