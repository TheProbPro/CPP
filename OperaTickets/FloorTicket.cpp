#include "FloorTicket.h"

FloorTicket::FloorTicket()
{

}

FloorTicket::FloorTicket(int tno, std::string city, std::string opera, double price){
    mTicketNo = tno;
    mCity = city;
    mOpera = opera;
    mPrice = price;
}

double FloorTicket::getPrice() const{
    return BasicTicket::getPrice() * 1.3;
}
