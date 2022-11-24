#ifndef DATE_H
#define DATE_H

//Declare Class
class Date
{
public:
    Date();
    Date(unsigned int year, unsigned int month, unsigned int day);

    unsigned int getYear() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;

    void setYear(unsigned int year);
    void setMonth(unsigned int month);
    void setDay(unsigned int day);

    int getDayOfWeek();

private:
    //Member variables
    unsigned int mYear, mMonth, mDay;

};

#endif // DATE_H
