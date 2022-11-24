#include "DiceRoll.h"
#include <random>
#include <iostream>
#include <ctime>
#include <iomanip>

DiceRoll::DiceRoll()
{

}

void DiceRoll::Roll(unsigned int n){
    std::default_random_engine engine{static_cast<unsigned int>(time(0))};
    std::uniform_int_distribution<unsigned int> random{1,6};
    for(unsigned int i = 0; i < n; i++){ // ruller x antal gange de 5 terninger
        std::cout << "Terningekast: ";
        int sum = 0;
        for(unsigned int j=0; j<5; j++){ // sørger for der bliver rullet 5 terninger for hver gang der kastes
            int k = random(engine);
            std::cout << "roll " << j+1 << ": " << k << std::endl;
            sum += k;
        }
        std::cout << "sum of roll " << sum << std::endl; // lægger terningerne sammen efter de er rullet
        mHistogram[sum] += 1; // opretter arrayet til at lave histogrammet ud fra
        std::cout << std::endl;
}
}
// opgave 2 lav et histogram
void DiceRoll::createHistogram(unsigned int s){
    for(size_t i = 5; i < mHistogram.size(); i++){ // opretter de forskellige summe vi kan have.
        std::cout << "sum of " << std::setw(2) << std::left << i << ": " << std::left;
        for(unsigned int j = 0; j < mHistogram[i]; j++){
            if(j % s == 0)
                std::cout << "*"; // laver histogrammet med *
        }
        std::cout << std::endl;
    }
}
