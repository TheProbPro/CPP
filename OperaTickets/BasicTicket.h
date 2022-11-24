#ifndef BASICTICKET_H
#define BASICTICKET_H
#include <iomanip>
#include <string>


class BasicTicket
{
public:
    BasicTicket();
    BasicTicket(int seat, int ticketno, std::string city, std::string opera, double price);

    //setter og getter metoder
    void setSeat(int seat);
    int getSeat() const;

    void setTicketno(int tnum);
    int getTicketno() const;

    void setCity(std::string city);
    std::string getCity() const;

    void setOpera(std::string opera);
    std::string getOpera() const;

    void setPrice(double price);
    virtual double getPrice() const;

protected:
    int mSeat, mTicketNo;
    std::string mCity, mOpera;
    double mPrice;
};

#endif // BASICTICKET_H
