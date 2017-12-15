//
// Created by azbest on 15.12.17.
//

#ifndef LAB678_PATH_H
#define LAB678_PATH_H

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
#include "Date.h"
#include "Generator.h"

using namespace std;

class Path {
private:
    char disk;
    string path;
public:
    Path(char disk, const string &path);
    Path();
    //-----------------------------------------
    friend ostream& operator<<(ostream& os, const Path& p);
};


#endif //LAB678_PATH_H
