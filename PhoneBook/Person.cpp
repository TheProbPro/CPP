#include "Person.h"

Person::Person(std::string Name, int number)
{
    mName = Name;
    mPhoneNr = number;
}

std::string Person::getName(){
    return mName;
}

int Person::getPhoneNr(){
    return mPhoneNr;
}
