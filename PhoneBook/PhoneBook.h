#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <vector>
#include <string>
#include "Person.h"


class PhoneBook
{
public:
    PhoneBook(std::vector<Person> people);
    Person seachName(std::string Name);

private:
    std::vector<Person> mList;
};

#endif // PHONEBOOK_H
