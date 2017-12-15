//
// Created by azbest on 15.12.17.
//

#ifndef LAB678_FILE_H
#define LAB678_FILE_H

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include "Date.h"
#include "FileType.h"
#include "Generator.h"
#include "Document.h"
#include "Path.h"
#include "Person.h"

using namespace std;

class File: public Document {
private:
    Path path;
    Person* author;
    vector<string> keywords;
    Date saveDate;
public:
    File(const Path &path, Person *author, const vector<string> &keywords, const Date &saveDate);
    File();
    virtual ~File();
    //-------------------------------------------------
    friend ostream& operator<<(ostream& os, const File& f);
    //-------------------------------------------------
    const vector<string> &getKeywords() const;
};


#endif //LAB678_FILE_H
