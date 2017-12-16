//
// Created by azbest on 16.12.17.
//

#include "../headers/RegisterComponent.h"
#include "../headers/Generator.h"

const string &RegisterComponent::getName() const {
    return name;
}

int RegisterComponent::getLevel() const {
    return level;
}

RegisterComponent::RegisterComponent(const string &name, int level) : name(name), level(level) {}

RegisterComponent::RegisterComponent() {
    level = 0;
    name = Generator::getInstance().getWord();
}

RegisterComponent RegisterComponent::getChild(int i) {
    if (i < 0 || i >= components.size())
        throw new UnsupportedOperationException;
    return *(components.at(i));
}

ostream &operator<<(ostream &os, const RegisterComponent &rc) {

    //for (int i=0; i<rc.level; i++) os << '\t';
    os << rc.level << ": " << rc.name << endl;

    vector<Record*> vr = rc.getRecords();
    for (Record*& r: vr) {
        for (int i=0; i<rc.level; i++) os << '\t';
        os << r->getFile()->getName() << '.' << r->getFile()->getFileType() << '\t' << r->getFile()->getSaveDate() << endl;
    }
    vector<RegisterComponent*> vc = rc.getComponents();
    for (RegisterComponent*& r: vc) {
        for (int i=0; i<rc.level+1; i++) os << '\t';
        os << (*r);
    }

    return os;
}

void RegisterComponent::addComponent(RegisterComponent* component) {
    component->updateLevel(this->level+1);
    components.push_back(component);
}

void RegisterComponent::addRecord(Record* record) {
    records.push_back(record);
}

RegisterComponent::~RegisterComponent() {
}

void RegisterComponent::setLevel(int level) {
    RegisterComponent::level = level;
}

void RegisterComponent::updateLevel(int l) {
    this->level = l;
    for (RegisterComponent*& r: components) {
        r->updateLevel(l+1);
    }
}

const vector<Record *> &RegisterComponent::getRecords() const {
    return records;
}

const vector<RegisterComponent *> &RegisterComponent::getComponents() const {
    return components;
}
