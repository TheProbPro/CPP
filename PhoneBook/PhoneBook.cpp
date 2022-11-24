#include "PhoneBook.h"
#include <iostream>

PhoneBook::PhoneBook(std::vector<Person> people)
{
    mList = people;
}

Person PhoneBook::seachName(std::string Name){
    for(unsigned int i = 0; i < mList.size(); i++){
        if(mList[i].getName().find(Name) != std::string::npos){
            return mList[i];
        }
    }
    std::cout << "This person does not exist in your phonebook, please try again." << std::endl;
    Person p("", 0);
    return p;
}
