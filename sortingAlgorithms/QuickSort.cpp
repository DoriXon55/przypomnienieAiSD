#include <iostream>
#include "QuickSort.h"

using namespace std;

int choosePivot(int sortArray[], int left, int right) {
    int mid = left + (right - left) / 2;
    int pivotValue = sortArray[mid];
    swap(sortArray[mid], sortArray[right]);
    return pivotValue;
}

int partitionArray(int sortArray[], int left, int right) {
    int pivotValue = choosePivot(sortArray, left, right);
    int border = left - 1;
    int i = left;

    while (i < right) {
        if (sortArray[i] < pivotValue) {
            border++;
            if (border != i) {
                swap(sortArray[border], sortArray[i]);
            }
        }
        i++;
    }

    border++;
    if (border != right) {
        swap(sortArray[border], sortArray[right]);
    }

    return border;
}


void quickSort(int sortArray[], int left, int right) {
    if (left >= right) {
        return;
    }

    int border = partitionArray(sortArray, left, right);

    if (border - left < right - border) {
        quickSort(sortArray, left, border - 1);
        quickSort(sortArray, border + 1, right);
    } else {
        quickSort(sortArray, border + 1, right);
        quickSort(sortArray, left, border - 1);
    }

}



// choose pivot and move it to right index
