#include <iostream>

using namespace std;

#include "QuickSort.h"

void quickSort(int *sortArray, int indexLeft, int indexRight) {
    if (indexLeft >= indexRight) {
        return;
    }
    int pivot = *(sortArray + indexRight),
            border = indexLeft - 1;

    while (indexLeft < indexRight) {
        if (*(sortArray + indexLeft) < pivot) {
            border++;
            if (border != indexLeft) {
                swap(*(sortArray + border), *(sortArray + indexLeft));
            }
        }
        indexLeft++;
    }
    border++;
    if (border != indexRight) {
        swap(*(sortArray + border), *(sortArray + indexRight));
    }
    quickSort(sortArray, indexLeft, border - 1);
    quickSort(sortArray, border + 1, indexRight);


}