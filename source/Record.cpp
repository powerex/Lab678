//
// Created by azbest on 15.12.17.
//

#include "../headers/Record.h"

Record::Record(File *file, const Date &recordDate) : file(file), recordDate(recordDate) {}

Record::Record() {
    file = new File();
    recordDate = Generator::getInstance().getDate();
}

Record::Record(File *file) : file(file) {
    recordDate = Generator::getInstance().getDate();
}

Record::~Record() {
    delete file;
}

ostream &operator<<(ostream &os, const Record &r) {
    os << *(r.file) << endl << r.recordDate;
    return os;
}