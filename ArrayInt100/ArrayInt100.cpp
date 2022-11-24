#include "ArrayInt100.h"
#include <random>
#include <iostream>
#include <ctime>

ArrayInt100::ArrayInt100()
{

}

//Metoder der fylder dit array med numre fra a til b som du selv angiver:
void ArrayInt100::fillArray(unsigned int a, unsigned int b){
    std::default_random_engine engine{static_cast<unsigned int>(time(0))};
    std::uniform_int_distribution<unsigned int> random{a,b};
    for(unsigned int i = 0; i < mArray.size(); i++){
        mArray[i] = random(engine);
    }
}

//Metoder der finder det største nummer i dit array:
int ArrayInt100::findMaxNumber(){
    int maxElement = mArray[0];
    for(unsigned int i = 1; i < mArray.size(); i++){
        if(maxElement < mArray[i]){
            maxElement = mArray[i];
        }
    }
    return maxElement;
}

//Metode der udskriver dit array:
void ArrayInt100::printArray(){
    for(unsigned int i = 0; i < mArray.size(); i++){
        std::cout << "element " << i << " i arrayet er " << mArray[i] << std::endl;
    }
}

//Metode der tæller hvor mange gange et nummer du angiver optræder i arrayet:
int ArrayInt100::countOccurrencesOf(int c){
    int occurences = 0;
    for(unsigned int i = 0; i < mArray.size(); i++){
        if(mArray[i] == c){
            occurences++;
        }
    }
    return occurences;
}

void ArrayInt100::swapContents(){
    for(unsigned int i = 0; i < (mArray.size()+1)/2; i++){  //(mArray.size()+1)/2 læser halvdelen af arrayet
        //mArray[mArray.size()-1-i] læser den sidste halvdel af arrayet og ligger det i en temporary varaiable
        int temp = mArray[mArray.size()-1-i];
        //Den kommende linje sætter de sidste tal i arrayet til de første i omvendt rækkefølge
        mArray[mArray.size()-1-i] = mArray[i];
        //denne linje sætter den sidste halvdel af arrayet til den første.
        mArray[i] = temp;
    }
}
