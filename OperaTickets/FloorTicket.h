#ifndef FLOORTICKET_H
#define FLOORTICKET_H
#include "BasicTicket.h"


class FloorTicket : public BasicTicket
{
public:
    FloorTicket();
    FloorTicket(int tno, std::string city, std::string opera, double price);
    double getPrice() const override;
};

#endif // FLOORTICKET_H
