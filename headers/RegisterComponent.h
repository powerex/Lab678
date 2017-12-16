//
// Created by azbest on 16.12.17.
//

#ifndef LAB678_REGISTER_H
#define LAB678_REGISTER_H

#include <vector>
#include <string>
#include "UnsupportedOperationException.h"
#include "Record.h"

using namespace std;

class RegisterComponent {
protected:
    string name;
    int level;
    vector<Record*> records;
    vector<RegisterComponent*> components;
    void updateLevel(int l);
public:
    RegisterComponent(const string &name, int level);
    RegisterComponent();

    const string &getName() const;
    int getLevel() const;
    const vector<Record *> &getRecords() const;
    const vector<RegisterComponent *> &getComponents() const;
    void setLevel(int level);

    virtual void addComponent(RegisterComponent* component);
    virtual void addRecord(Record* record);
    virtual RegisterComponent getChild(int i);
    friend ostream& operator<<(ostream& os, const RegisterComponent& rc);
    virtual ~RegisterComponent();
};


#endif //LAB678_REGISTER_H
