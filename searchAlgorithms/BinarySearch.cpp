#include "BinarySearch.h"

int binarySearch(int *sortArray, int leftIndex, int rightIndex, int target) {
    if (leftIndex <= rightIndex) {

        int middle = (leftIndex + rightIndex) / 2;

        if (sortArray[middle] == target) {
            return middle;
        } else if (sortArray[middle] > target) {
            return binarySearch(sortArray, leftIndex, middle - 1, target);
        } else {
            return binarySearch(sortArray, middle + 1, rightIndex, target);
        }
    }
    return -1;
}