#include "GameShow.h"
#include <cstdlib>

GameShow::GameShow()
{
    mPrice = rand()%3+1;
    mGuess = rand()%3+1;
}

GameShow::GameShow(unsigned int guess, unsigned int price){
    mPrice = price;
    mGuess = guess;
}

void GameShow::setPrice(unsigned int price){
    mPrice = price;
}

void GameShow::setGuess(unsigned int guess){
    mGuess = guess;
}

bool GameShow::swap(){
    unsigned int guess = mGuess;
    unsigned int price = mPrice;
    unsigned int noPrice;

    do{
        noPrice = rand()%3+1;
    }while(noPrice == price || noPrice == guess);
    switch(noPrice){
    case 1:
        if (guess == 2){
            guess = 3;
        }else if(guess == 3){
            guess = 2;
        }
        break;

    case 2:
        if (guess == 1){
            guess = 3;
        }else if (guess == 3){
            guess = 1;
        }
        break;

    case 3:
        if (guess == 1){
            guess = 2;
        } else if(guess == 2){
            guess = 1;
        }
        break;
    default:
        break;
    }
    if (guess == price){
        return 1;
    }else{
        return 0;
    }
}
