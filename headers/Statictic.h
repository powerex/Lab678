//
// Created by azbest on 15.12.17.
//

#ifndef LAB678_STATUCTIC_H
#define LAB678_STATUCTIC_H

template <class T>
float getAverage(T** elements, int size) {
    float sum = 0.0;
    for (int i=0; i<size; i++) {
        sum += *(elements[i]);
    }
    return sum / size;
}

#endif //LAB678_STATUCTIC_H
