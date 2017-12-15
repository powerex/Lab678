//
// Created by azbest on 15.12.17.
//

#ifndef LAB678_FILETYPE_H
#define LAB678_FILETYPE_H

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

enum Type {
    doc, txt, xls, ppt
};

class FileType {
private:
    Type type;
public:
    FileType(Type type);
    FileType();
    //-----------------------------------
    friend ostream& operator<<(ostream& os, const FileType& ft);
};


#endif //LAB678_FILETYPE_H
