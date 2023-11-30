#include <iostream>
#include <ctime>
#include <cstdlib>
#include "sortingAlgorithms/BubbleSort.h"
#include "sortingAlgorithms/InsertionSort.h"
#include "sortingAlgorithms/QuickSort.h"
#include "sortingAlgorithms/SelectionSort.h"
#include "sortingAlgorithms/MergeSort.h"

using namespace std;

// w celach naukowych do mierzenia czasu losowymi liczbami

int main() {
    srand(time(nullptr));
    string comDefault;
    int numberOfElements = 0;
    char userOption;
    cout << "Give number of elements: \n";
    cin >> numberOfElements;

    int *sortArray = (int *) calloc(numberOfElements, sizeof(int));
    if (sortArray == nullptr) {
        cout << "Too many elements!";
        return 1;
    }
    for (int i = 0; i < numberOfElements; i++) {
        sortArray[i] = (rand() % 100) + 1;
    }

    cout << "\nYour array before sort:\n";
    for (int i = 0; i < numberOfElements; i++) {
        cout <<sortArray[i] << " ";
    }
    cout << endl;


    cout << "Select one option:\n"
            "B - Bubble Sort\n"
            "I - Insertion Sort\n"
            "Q - Quick Sort\n"
            "S - Selection Sort\n"
            "M - Merge Sort\n";
    cin >> userOption;

    switch (userOption) {
        case 'B':
            bubbleSort(sortArray, numberOfElements);
            break;
        case 'I':
            insertionSort(sortArray, numberOfElements);
            break;
        case 'Q':
            quickSort(sortArray, 0, numberOfElements - 1);
            break;
        case 'S':
            selectionSort(sortArray, numberOfElements);
            break;
        case 'M':
            mergeSort(sortArray, 0, numberOfElements - 1);
            break;
        default:
            cout << "Wrong Input!!!";
            comDefault = "Wrong Input";
            break;
    }

    if ("Wrong Input" == comDefault) {
        return 2;
    } else {
        cout << "Your array after sorting: \n";
        for (int i = 0; i < numberOfElements; i++) {
            cout <<sortArray[i] << " ";
        }
    }

    free(sortArray);

    cout << endl << "Thanks for using this program! See ya next time! :)" << endl;


    return 0;
}