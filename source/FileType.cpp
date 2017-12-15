//
// Created by azbest on 15.12.17.
//

#include "../headers/FileType.h"

FileType::FileType(Type type) : type(type) {}

FileType::FileType() {

    srand(static_cast<unsigned int>(time(NULL)));
    int t = rand()%4;
    switch (t) {
        case 0: type = doc; break;
        case 1: type = txt; break;
        case 2: type = xls; break;
        case 3: type = ppt; break;
    }
}

ostream &operator<<(ostream &os, const FileType &ft) {
    switch (ft.type) {
        case doc: os << "doc"; break;
        case txt: os << "txt"; break;
        case xls: os << "xls"; break;
        case ppt: os << "ppt"; break;
    }
    return os;
}
