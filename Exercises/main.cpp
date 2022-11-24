#include <iostream>
#include "Date.h"
#include "Person.h"

int main()
{
    //Dato klasse
    /*
    Date d1;
    d1.setYear(1999);
    std::cout << "Dato = " << d1.getYear() << std::endl;
    */

    //Person klasse
    /*
    Person p1;
    p1.setName("Victor");
    std::cout << "Navn = " << p1.getName() << std::endl;
    */


    //Date opgave 2
    //opretter variablerne
    unsigned int day;
    unsigned int month;
    unsigned int year;
    //lytter efter bruger input
    std::cout << "enter day";
    std::cin >> day;
    std::cout << "enter month (Febuary = 12 And Martch = 1)";
    std::cin >> month;
    std::cout << "enter year";
    std::cin >> year;

    // opretter et object af klassen
    Date d1(year, month, day);

    //printer svaret på vores metode ud
    std::cout << d1.getDayOfWeek() <<std::endl;

    return 0;
}
