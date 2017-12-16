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

const string &Document::getName() const {
    return name;
}

const FileType &Document::getFileType() const {
    return fileType;
}

void Document::tableShow() {
    cout << setiosflags(ios::right) << '|' << setw(15) << name << '.' << fileType << " |\t" << creationDate << " |" << setfill(' ') << setw(8) << size << "Kb |\n";
}

void Document::tableHeader() {
    cout << setiosflags(ios::right) << '|' << setw(21) << "FILENAME |" << setw(12) << "DATE" << " |" << setw(12) << " SIZE(Kb) |" << "\n";
}
