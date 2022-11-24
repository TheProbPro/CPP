#include <iostream>
#include "ArrayInt100.h"
#include <array>


int main()
{
    //Fyld arrayet:
    unsigned int a;
    unsigned int b;

    ArrayInt100 a1;
    std::cout << "Writhe the minimum number you want in your array: ";
    std::cin >> a;
    std::cout << "Writhe the maximum number you want in your array: ";
    std::cin >> b;
    a1.fillArray(a, b);

    //Printer arrayet:
    a1.printArray();

    //Finder det største nummer i arrayet:
   // std::cout << "The maximum number in your array is: " << a1.findMaxNumber() << std::endl;

    //tjekker hvor mange gange et tal optræder i arrayet:
   // int c;
   // std::cout << "Writhe the number you want to check how frequently occurs in the array: ";
   // std::cin >> c;
   // std::cout << "The number " << c << " occurs: " << a1.countOccurrencesOf(c) << " times." << std::endl;

    //Inverter vores array og skriver det ud derefter
    a1.swapContents();
    a1.printArray();

    return 0;
}
