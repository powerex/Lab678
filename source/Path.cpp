//
// Created by azbest on 15.12.17.
//

#include "../headers/Path.h"

Path::Path(char disk, const string &path) : disk(disk), path(path) {}

Path::Path() {
    srand(static_cast<unsigned int>(time(NULL)));

    disk = rand()%5+67;
    int length = rand()%4;
    for (int i=0; i<length; i++) {
        int lengthFolder = rand()%5+5;
        path += rand()%26+65;
        for (int j=1; j<lengthFolder; j++) {
            path += rand()%26+97;
        }
        path += '\\';
    }
}

ostream &operator<<(ostream &os, const Path &p) {
    os << p.disk << ":\\\\" << p.path;
    return os;
}
