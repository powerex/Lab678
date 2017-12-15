//
// Created by azbest on 15.12.17.
//

#ifndef LAB678_RECORD_H
#define LAB678_RECORD_H

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
#include "File.h"

using namespace std;

class Record {
private:
    File* file;
    Date recordDate;
public:
    Record(File *file, const Date &recordDate);
    Record(File *file);
    Record();
    virtual ~Record();
    //------------------------------------
    friend ostream& operator<<(ostream& os, const Record& r);
};


#endif //LAB678_RECORD_H
