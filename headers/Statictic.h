//
// Created by azbest on 15.12.17.
//

#ifndef LAB678_STATUCTIC_H
#define LAB678_STATUCTIC_H

template <class T>
float getAverage(T** elements, __int64_t size) {
    double sum = 0.0;
    for (__int64_t i=0; i<size; i++) {
        sum += *(elements[i]);
    }
    return static_cast<float>(sum / size);
}

#endif //LAB678_STATUCTIC_H
