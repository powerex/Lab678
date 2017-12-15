//
// Created by azbest on 15.12.17.
//

#include "../headers/Generator.h"

string Generator::getWord() {

    int length = rand()%5+5;
    string result = "*";
    result[0] = (char)(rand()%26+65);
    for (int i=1; i<length;i++)
        result += rand()%26+97;
    return result;
}

Generator::Generator() {
    srand(static_cast<unsigned int>(time(NULL)));
}

Generator &Generator::getInstance() {
    static Generator instance;
    return instance;
}

Date Generator::getDate() {
    int day = rand()%30+1;
    int month = rand()%12+1;
    int year = rand()%40+1970;
    return Date(day, month, year);
}
