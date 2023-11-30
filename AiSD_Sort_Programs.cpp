//
// Created by doria on 11/30/2023.
//
#include <iostream>
#include "sortingAlgorithms/BubbleSort.h"
#include "sortingAlgorithms/InsertionSort.h"
#include "sortingAlgorithms/QuickSort.h"
#include "sortingAlgorithms/SelectionSort.h"
#include "sortingAlgorithms/MergeSort.h"
using namespace std;
int main() {
    int numberOfElements = 0;
    char userOption;
    cout << "Give number of elements: \n";
    cin >> numberOfElements;

    int *sortArray = (int *) calloc(numberOfElements, sizeof(int));
    for (int i = 0; i < numberOfElements; i++) {
        printf("Put %d number in array: ", i+1);
        cin >> sortArray[i];
    }

    cout << "\nYour array before sort:\n";
    for (int i = 0; i < numberOfElements; i++) {
        cout << sortArray[i] << " ";
    }
    cout << endl;

    if (sortArray == nullptr)
    {
        cout << "Give some numbers to array!";
        return 1;
    }

    cout << "Select one option:\n"
            "B - Bubble Sort\n"
            "I - Insertion Sort\n"
            "Q - Quick Sort\n"
            "S - Selection Sort\n"
            "M - Merge Sort\n";
    cin >> userOption;

    switch (userOption) {
        case 'B':
            bubbleSort(sortArray,numberOfElements);
            break;
        case 'I':
            insertionSort(sortArray,numberOfElements);
            break;
        case 'Q':
            quickSort(sortArray,0, numberOfElements-1);
            break;
        case 'S':
            break;
        case 'M':
            break;
        default:
            cout << "Wrong Input!!!";
            break;
    }

    cout << "Your array after sorting: \n";
    for (int i = 0; i < numberOfElements; i++) {
        cout << sortArray[i] << " ";
    }
}