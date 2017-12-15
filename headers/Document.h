//
// Created by azbest on 15.12.17.
//

#ifndef LAB678_DOCUMENT_H
#define LAB678_DOCUMENT_H

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
#include "Date.h"
#include "FileType.h"
#include "Generator.h"

using namespace std;

class Document {
protected:
    string name;
    FileType fileType;
    Date creationDate;
    float size;
public:
    Document(const string &name, const FileType &fileType, const Date &creationDate, float size);
    Document();
    //---------------------------------------------------------------
    operator float();
    friend ostream& operator<<(ostream& os, const Document& d);
};


#endif //LAB678_DOCUMENT_H
