//
// Created by azbest on 15.12.17.
//

#ifndef LAB678_PERSON_OLD_H
#define LAB678_PERSON_OLD_H


#include "Date.h"

class Person_old {
private:
    const char* name;
    const char* surname;
    Date birthday;
public:
    Person_old(const string &name, const string &surname, const Date birthday);
    Person_old();
    virtual ~Person_old();
    //--------------------------------------
    const char *getName() const;

    const char *getSurname() const;

    const Date &getBirthday() const;
    void setBirthday(const Date &birthday);
    //--------------------------------------
    friend ostream& operator<<(ostream& os, const Person_old& p);
    bool operator<(Person_old& p);
};


#endif //LAB678_PERSON_OLD_H
