//
// Created by azbest on 15.12.17.
//

#include "../headers/Person_old.h"
#include "../headers/Generator.h"


#include <zconf.h>



bool Person_old::operator<(Person_old &p) {
    return this->name < p.name;
}

const Date &Person_old::getBirthday() const {
    return birthday;
}

void Person_old::setBirthday(const Date &birthday) {
    Person_old::birthday = birthday;
}

Person_old::Person_old(const string &name, const string &surname, const Date birthday) {

}

ostream &operator<<(ostream &os, const Person_old &p) {
    os << p.name << '\n' << p.surname << '\n' << p.birthday;
    return os;
}

Person_old::Person_old() {
    name = (Generator::getInstance().getWord()).c_str();
    surname = (Generator::getInstance().getWord()).c_str();
}

const char *Person_old::getName() const {
    return name;
}

const char *Person_old::getSurname() const {
    return surname;
}

Person_old::~Person_old() {
    delete name;
    delete surname;
}
