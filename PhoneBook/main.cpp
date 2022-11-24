#include <iostream>
#include "Person.h"
#include "PhoneBook.h"
#include <vector>

int main()
{
    //opretter 3 personer
    Person p1("Anders", 45091245);
    Person p2("Victor", 89234565);
    Person p3("Simon", 67238942);

    //ligger de 3 personer ind i vectoren
    std::vector<Person> persons;
    persons.push_back(p1);
    persons.push_back(p2);
    persons.push_back(p3);

    //opretter en instans af phonebook
    PhoneBook ph1(persons);

    //leder efter et bestemt navn i phonebook

    std::cout << ph1.seachName("Victor").getName() << std::endl;
    return 0;
}
