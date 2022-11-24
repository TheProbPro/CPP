#include "BasicTicket.h"

BasicTicket::BasicTicket()
{
    mSeat = 0;
    mTicketNo = 0;
    mCity = "none";
    mOpera = "none";
    mPrice = 0;
}

BasicTicket::BasicTicket(int seat, int ticketno, std::string city, std::string opera, double price){
    mSeat = seat;
    mTicketNo = ticketno;
    mCity = city;
    mOpera = opera;
    mPrice = price;
}

void BasicTicket::setSeat(int seat){
    mSeat = seat;
}

int BasicTicket::getSeat() const{
    return mSeat;
}

void BasicTicket::setTicketno(int tnum){
    mTicketNo = tnum;
}

int BasicTicket::getTicketno() const{
    return mTicketNo;
}

void BasicTicket::setCity(std::string city){
    mCity = city;
}

std::string BasicTicket::getCity() const{
    return mCity;
}

void BasicTicket::setOpera(std::string opera){
    mOpera = opera;
}

std::string BasicTicket::getOpera() const{
    return mOpera;
}

void BasicTicket::setPrice(double price){
    mPrice = price;
}

double BasicTicket::getPrice() const{
    return mPrice;
}
