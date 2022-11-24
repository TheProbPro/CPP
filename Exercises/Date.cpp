#include "Date.h"
#include <cmath>

// constructors
Date::Date()
{
    mYear = 0;
}

Date::Date(unsigned int year, unsigned int month, unsigned int day){
    mYear = year;
    mMonth = month;
    mDay = day;
}


//getter og setter metoder
unsigned int Date::getYear() const {
    return mYear;
}

unsigned int Date::getMonth() const{
    return mMonth;
}

unsigned int Date::getDay() const{
    return mDay;
}

void Date::setYear(unsigned int year) {
    mYear = year;
}

void Date::setMonth(unsigned int month){
    mMonth = month;
}

void Date::setDay(unsigned int day){
    mDay = day;
}


//udregnings opgave
int Date::getDayOfWeek(){
    if (mMonth == 11 || mMonth == 12){
        mYear = mYear-1;
    }
    int w = fmod((mDay + floor(2.6*mMonth-0.2)+(mYear%100)+floor((mYear%100)/4)+floor((mYear/100)/4)-2*(mYear/100)),7);
    if (w < 0){
        w = w + 7;
    }
    return w;
}
