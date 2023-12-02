#include "MergeSort.h"


void merge(int *sortArray, int leftIndex, int middleIndex, int rightIndex, int *extraArray) {

    for (int i = leftIndex; i <= rightIndex; i++) {
        *(extraArray + i) = *(sortArray + i);
    }

    int pivot1 = leftIndex, pivot2 = middleIndex + 1, current = leftIndex;

    while (pivot1 <= middleIndex && pivot2 <= rightIndex) {
        if (*(extraArray + pivot1) <= *(extraArray + pivot2)) {
            *(sortArray + current) = *(extraArray + pivot1);
            pivot1++;
        } else {
            *(sortArray + current) = *(extraArray + pivot2);
            pivot2++;
        }
        current++;
    }
    while (pivot1 <= middleIndex) {
        *(sortArray + current) = *(extraArray + pivot1);
        current++;
        pivot1++;
    }
}

void mergeSort(int *sortArray, int leftIndex, int rightIndex) {
    if (leftIndex < rightIndex) {
        int middle = (leftIndex + rightIndex) / 2;
        int extraArray[rightIndex + 1];
        mergeSort(sortArray, leftIndex, middle);
        mergeSort(sortArray, middle + 1, rightIndex);
        merge(sortArray, leftIndex, middle, rightIndex, extraArray);
    }
    //! był problem z ustawieniem tablicy extraArray, gdyż sizeOf(sortArray) nie działało i trzeba było dać rightIndex + 1, czyli inaczej numberOfElements-1+1
}