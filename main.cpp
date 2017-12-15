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

    RegisterComponent rc("root", 0);
    RegisterComponent child1;

    Record r1;
    this_thread::sleep_for(chrono::milliseconds(1000));
    Record r2;
    this_thread::sleep_for(chrono::milliseconds(1000));
    Record r3;
    this_thread::sleep_for(chrono::milliseconds(1000));
    Record r4;
    this_thread::sleep_for(chrono::milliseconds(1000));

    cout << r1 << "\n\n" << r2 << "\n\n" << r3 << "\n\n";

    rc.addRecord(r1);
    rc.addRecord(r2);

    child1.addRecord(r3);
    child1.addRecord(r4);
    rc.addComponent(child1);

    cout << rc;


    return 0;
}