#include <iostream>
#include "GameShow.h"



int main()
{
    //Gameshow opgave

    std::cout << "Can you find the price???" << std::endl;

    unsigned int swapWins = 0;
    unsigned int dontSwapWins = 0;
    GameShow g1;
    int go = 1;

    do{
        for(unsigned int i=0; i<1000;i++){
            unsigned int guess = rand()%3+1;
            unsigned int price = rand()%3+1;

            g1.setGuess(guess);
            g1.setPrice(price);

            if(g1.swap() == 1){
                swapWins += 1;
            }else if(g1.swap() == 0){
                dontSwapWins += 1;
            }
        }

        std::cout << "Number of wins without swapping: " << swapWins << std::endl;
        std::cout << "Number of wins with swapping: " << dontSwapWins << std::endl;
        swapWins = 0;
        dontSwapWins = 0;
        std::cout << "try again press 1" << std::endl;
        std::cin >> go;

    }while(go == 1);

    return 0;
}
