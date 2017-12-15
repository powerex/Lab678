//
// Created by azbest on 15.12.17.
//

#include "../headers/Date.h"

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

Date::Date() {
    srand(static_cast<unsigned int>(time(NULL)));
    this->day = rand()%30+1;
    this->month = rand()%12+1;
    this->year = rand()%40+1970;
}

ostream &operator<<(ostream &os, const Date &dt) {
    os << setfill('0') << setw(2) << dt.day << '/' << setw(2) << dt.month << '/' << setw(4) << dt.year;
    return os;
}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    Date::day = day;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    Date::month = month;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    Date::year = year;
}
