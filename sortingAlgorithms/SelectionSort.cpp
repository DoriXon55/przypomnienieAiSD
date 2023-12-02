
#include "SelectionSort.h"

void selectionSort(int *sortArray, int numberOfElements) {
    int minIndex;
    for (int i = 0; i < numberOfElements - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < numberOfElements; j++) {
            if (*(sortArray + j) < *(sortArray + minIndex)) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = *(sortArray + minIndex);
            *(sortArray + minIndex) = *(sortArray + i);
            *(sortArray + i) = temp;
        }
    }
}