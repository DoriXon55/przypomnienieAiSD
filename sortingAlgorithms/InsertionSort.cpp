//
// Created by doria on 11/30/2023.
//

#include "InsertionSort.h"

void insertionSort(int *arraySort, int numberOfElements) {
    int currentIndex = 0;
    int nextIndex = 0;
    for (int i = 0; i < numberOfElements - 1; i++) {
        currentIndex = *(arraySort + i);
        nextIndex = i;
        while (nextIndex > 0 && currentIndex < *(arraySort + nextIndex - 1)) {
            *(arraySort + nextIndex) = *(arraySort + nextIndex - 1);
            nextIndex--;
        }
        *(arraySort + nextIndex) = currentIndex;

    }
}