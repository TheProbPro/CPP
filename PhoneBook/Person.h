#ifndef PERSON_H
#define PERSON_H
#include <string>


class Person
{
public:
    Person(std::string Name, int number);
    std::string getName();
    int getPhoneNr();


private:
    std::string mName;
    int mPhoneNr;
};

#endif // PERSON_H
