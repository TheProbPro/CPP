#include <iostream>
#include "Fibonaci.h"


int main()
{
    //Fibonacci opgave

    long days;
    long startPop;
    int repeat = 1;

    do{
        if (repeat == 1){
            std::cout << "To calculate population after x number of days enter startpopulation and then the number of days" << std::endl;

            std::cout << "Enter start population" << std::endl;
            std::cin >> startPop;

            std::cout << "Enter number of days" << std::endl;
            std::cin >> days;

            Fibonaci f1(startPop, days);

            std::cout << "The size of the population will be: " + std::to_string(f1.calculatePopulation()) << std::endl;

            std::cout << "To continue press 1, otherwise press 0 to generate fibonacci numbers." << std::endl;
            std::cin >> repeat;
        } else if (repeat == 0){
            Fibonaci f1;
            for (int i=0; i < 100; i++){
                long number = f1.generate();
                std::cout << std::to_string(number) << std::endl;
            }
            std::cout << "Press 1 to calculate more numbers, or press 0 to generate fibonacci numbers, or press 3 to quit" << std::endl;
            std::cin >> repeat;
        }
    }
    while (repeat !=3);

    return 0;
}
