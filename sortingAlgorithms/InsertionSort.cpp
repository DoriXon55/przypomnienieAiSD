#include "InsertionSort.h"
void insertionSort(int arraySort[], int numberOfElements) {
    int currentIndex;
    int nextIndex;
    for (int i = 1; i < numberOfElements; i++) {
        currentIndex = arraySort[i];
        nextIndex = i;
        while (nextIndex > 0 && currentIndex < arraySort[nextIndex - 1]) {
            arraySort[nextIndex] = arraySort[nextIndex - 1];
            nextIndex--;
        }
        arraySort[nextIndex] = currentIndex;
    }
}