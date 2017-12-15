#ifndef LAB678_DATA_H
#define LAB678_DATA_H

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year);
    Date();
    //---------------------------------
    int getDay() const;
    void setDay(int day);
    int getMonth() const;
    void setMonth(int month);
    int getYear() const;
    void setYear(int year);
    //---------------------------------
    friend ostream& operator<<(ostream& os, const Date& dt);

};


#endif //LAB678_DATA_H
