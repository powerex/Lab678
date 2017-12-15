//
// Created by azbest on 15.12.17.
//

#ifndef LAB678_PERSON_H
#define LAB678_PERSON_H

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
#include "Date.h"
#include "Generator.h"

using namespace std;

class Person {
private:
    string name;
    string surname;
    Date birthday;
public:
    Person(const string &name, const string &surname, const Date birthday);
    Person();
    virtual ~Person();
    //--------------------------------------
    const string &getName() const;
    void setName(const string &name);
    const string &getSurname() const;
    void setSurname(const string &surname);
    Date *getBirthday() const;
    void setBirthday(Date *birthday);
    //--------------------------------------
    friend ostream& operator<<(ostream& os, const Person& p);
    bool operator<(Person& p);
};


#endif //LAB678_PERSON_H
