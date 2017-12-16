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
    const string &getName() const;
    const FileType &getFileType() const;
    //---------------------------------------------------------------
    operator float();
    virtual void tableShow();
    static void tableHeader();
    friend ostream& operator<<(ostream& os, const Document& d);
};


#endif //LAB678_DOCUMENT_H
