#include <iostream>
#include <zconf.h>
#include <algorithm>
#include <chrono>
#include <thread>

#include "headers/Date.h"
#include "headers/Person.h"
#include "headers/FileType.h"
#include "headers/Document.h"
#include "headers/File.h"
#include "headers/Record.h"
#include "headers/Statictic.h"
#include "headers/Person_old.h"
#include "headers/RegisterComponent.h"
#include "headers/Serializer.h"

using namespace std;

int main() {
/*

    const int N = 5;
    Document** docs = new Document*[N];

    for (int i=0; i<N; i++) {
        docs[i] = new Document();
        cout << *(docs[i]) << endl << endl;
        sleep(1);
    }


    cout << getAverage(docs, N);

    for (int i=0; i<N; i++) {
        delete docs[i];
    }
    delete docs;
*/


    /*
    const int N = 5;
    vector<Person> pers;
    for (int i=0; i<N; i++) {
        Person p;
        pers.push_back(p);
        cout << pers.at(i) << "\n\n";
        this_thread::sleep_for(chrono::milliseconds(1000));
    }

    unsigned int start_time =  clock();
    sort(pers.begin(), pers.end());
    unsigned int end_time = clock();
    unsigned int search_time = end_time - start_time;
    cout << "Sorted after " << search_time << "ms\n";



    cout << "====== SORTED ===========\n";
    for (int i=0; i<N; i++) {
        cout << pers.at(i) << "\n\n";
    }


    cout << "==================================\n"
            "==================================\n" << "\n\n\n";

    vector<Person_old> pers_old;
    for (int i=0; i<N; i++) {
        Person p;
        pers.push_back(p);
        cout << pers.at(i) << "\n\n";
        this_thread::sleep_for(chrono::milliseconds(1000));
    }

    start_time =  clock();
    sort(pers.begin(), pers.end());
    end_time = clock();
    search_time = end_time - start_time;
    cout << "Sorted after " << search_time << "ms\n";

    cout << "====== SORTED ===========\n";
    for (int i=0; i<N; i++) {
        cout << pers.at(i) << "\n\n";
    }
*/
/*
    RegisterComponent rc("root", 0);
    RegisterComponent child1;
    RegisterComponent child2;
    RegisterComponent child3;
    RegisterComponent child4;

    const int N = 10;
    Record** r = new Record*[N];
    for (auto i=0; i<N; i++) {
        r[i] = new Record;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
    rc.addRecord(r[0]);
    rc.addRecord(r[1]);

    child1.addRecord(r[2]);
    child1.addRecord(r[3]);

    child2.addRecord(r[4]);
    child2.addRecord(r[5]);
    child2.addRecord(r[6]);

    child3.addRecord(r[7]);
    child3.addRecord(r[8]);

    child4.addRecord(r[9]);

    rc.addComponent(&child1);
    rc.addComponent(&child3);
    child1.addComponent(&child2);
    child2.addComponent(&child4);

    cout << rc;

    for (auto i=0; i<N; i++)
        delete r[i];
    delete [] r;
//*/

/*
    Document doc[10];
    Document::tableHeader();
    for (auto i=0;i<10;i++)
        doc[i].tableShow();
*/

/*
    Document d;
    cout << d << endl;
    Serializer<Document>::serialize(&d, "Test.dat");
    Document* x;
    Serializer<Document>::unserialize(x, "Test.dat");
    cout << (*x) << endl;
*/
//*
    const int N = 10;
    Document** docs = new Document*[N];
/*
    for (auto i=0; i<N; i++)
        docs[i] = new Document;

    for (auto i = 0 ;i<N; i++)
        cout << *(docs[i]) << endl;

    Serializer<Document>::serializeArray(docs, N, "ZArray.dat");

    for (auto i=0; i<N; i++)
        delete docs[i];
    delete [] docs;
//*/

//*
    Serializer<Document>::unserializeArray(docs, N, "ZArray.dat");
    for (auto i = 0 ;i<N; i++)
        cout << *(docs[i]) << endl;

    for (auto i=0; i<N; i++)
        delete docs[i];
    delete [] docs;

//*/

    return 0;
}