#include <iostream>
#include "BubbleSort.h"

using namespace std;

void bubbleSort(int *sortArray, int numberOfElements) {
    for (int i = 0; i < numberOfElements - 1; i++) {
        for (int index = 0; index < numberOfElements - 1; index++) {
            if (*(sortArray + index) > *(sortArray + index + 1)) {
                swap(*(sortArray + index), *(sortArray + index + 1));
            }
        }
    }
}