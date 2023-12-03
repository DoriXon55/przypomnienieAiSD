#include "ShellSort.h"

void shellSort(int *sortArray, int numberOfElements) {
    for (int gap = numberOfElements / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < numberOfElements; i += 1) {
            int temp = sortArray[i];
            int j;
            for (j = i; j >= gap && sortArray[j - gap] > temp; j -= gap)
                sortArray[j] = sortArray[j - gap];

            sortArray[j] = temp;
        }
    }
}