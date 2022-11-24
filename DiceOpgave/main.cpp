#include <iostream>
#include "DiceRoll.h"
#include <random>
#include <ctime>
#include <vector>


int main()
{
    //terninge projekt
    /*
    unsigned int n;
    std::cout << "enter number of throws: ";
    std::cin >> n;
    std::default_random_engine engine{static_cast<unsigned int>(time(0))};
    std::uniform_int_distribution<unsigned int> random{1,6};
    for(unsigned int i = 0; i < n; i++){
        std::cout << "Terningekast: ";
        for(unsigned int i=0; i<5; i++){
            std::cout << random(engine) << " ";
        }
        std::cout << std::endl;
}
*/
 // opretter et object af klassen og udskriver summerne
    DiceRoll d1;
    unsigned int n;
    unsigned int s;
    std::cout << "enter number of throws: ";
    std::cin >> n;
    d1.Roll(n);
    // opretter histogrammet
    std::cout << "to many numbers writhe a number to lessen the load: ";
    std::cin >> s;
    d1.createHistogram(s);


    return 0;
}
