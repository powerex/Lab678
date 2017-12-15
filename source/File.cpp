//
// Created by azbest on 15.12.17.
//

#include "../headers/File.h"

File::File() {
    author = new Person();
    srand(static_cast<unsigned int>(time(NULL)));
    int length = rand()%3+2;
    for (auto i=0; i<length; i++)
        keywords.push_back(Generator::getInstance().getWord());
    saveDate = Generator::getInstance().getDate();
}

File::~File() {
    delete author;
}

ostream &operator<<(ostream &os, const File &f) {

    os <<f.path;
    operator<< (os, (Document)(f)) << endl;

    os << *(f.author) << endl << "Keywords: ";
    vector<string> v = f.keywords;
    for (string& s: v) {
        cout << s << " ";
    }
    os << endl << f.saveDate;
    return os;
}

const vector<string> &File::getKeywords() const {
    return keywords;
}

File::File(const Path &path, Person *author, const vector<string> &keywords, const Date &saveDate) {

}
