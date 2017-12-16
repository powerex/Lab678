//
// Created by azbest on 16.12.17.
//

#ifndef LAB678_SAVER_H
#define LAB678_SAVER_H

#include "Document.h"
#include <fstream>

using namespace std;

template <class T = Document>
class Serializer {
public:
    static void serialize(T* element, string fileName) {
        fstream file;
        file.open(fileName, ios::app | ios::out | ios::in | ios::binary );
        file.write( reinterpret_cast<char*>(element), sizeof(T) );
        file.close();
    }

    static void serializeArray(T** element, int size, string fileName) {
        fstream file;
        file.open(fileName, ios::app | ios::out | ios::in | ios::binary );
        for (auto i=0; i<size; i++) {
            file.write(reinterpret_cast<char *>(element[i]), sizeof(T));
        }
        file.close();
    }

    static void unserialize(T*& element, string fileName) {
        fstream file;
        file.open(fileName, ios::app | ios::out | ios::in | ios::binary );
        if (file) {
            file.seekg(0);
            file.read(reinterpret_cast<char *>(element), sizeof(T));
            file.close();
        }
    }



};


#endif //LAB678_SAVER_H
