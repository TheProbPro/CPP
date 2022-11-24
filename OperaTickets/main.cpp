#include <iostream>
#include "BasicTicket.h"
#include "FloorTicket.h"


int main()
{
    BasicTicket bt1 = BasicTicket(1, 1, "Odense", "Opera", 100);
    FloorTicket ft1 = FloorTicket(2, "Odense", "Opera", 100);

    std::cout << bt1.getPrice() << " er prisen for en basic billet." << std::endl;
    std::cout << ft1.getPrice() << " er prisen for en gulv billet." << std::endl;

    return 0;
}
