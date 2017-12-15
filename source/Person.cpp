//
// Created by azbest on 15.12.17.
//

#include <zconf.h>
#include "../headers/Person.h"



Person::Person() {
    name = Generator::getInstance().getWord();
    surname = Generator::getInstance().getWord();
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

const string &Person::getSurname() const {
    return surname;
}

void Person::setSurname(const string &surname) {
    Person::surname = surname;
}


ostream &operator<<(ostream &os, const Person &p) {
    os << p.name << '\n' << p.surname << '\n' << p.birthday;
    return os;
}

Person::~Person() {
}

Person::Person(const string &name, const string &surname, const Date birthday) {
}

Date *Person::getBirthday() const {
    return nullptr;
}

void Person::setBirthday(Date *birthday) {
}

bool Person::operator<(Person &p) {
    return this->name < p.name;
}
