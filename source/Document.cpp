//
// Created by azbest on 15.12.17.
//

#include "../headers/Document.h"

Document::Document(const string &name, const FileType &fileType, const Date &creationDate, float size) : name(name),
                                                                                                         fileType(
                                                                                                                 fileType),
                                                                                                         creationDate(
                                                                                                                 creationDate),
                                                                                                         size(size) {}

Document::Document() {
    name = Generator::getInstance().getWord();
    creationDate = Generator::getInstance().getDate();
    size = rand()%10000/100.0;
//    size = rand()%10;
}

ostream &operator<<(ostream &os, const Document &d) {
    os << d.name << '.' << d.fileType << endl << d.creationDate << endl << d.size << "Kb";
    return os;
}

Document::operator float() {
    return this->size;
}
