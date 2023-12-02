#include <iostream>
#include <random>
#include "sortingAlgorithms/BubbleSort.h"
#include "sortingAlgorithms/InsertionSort.h"
#include "sortingAlgorithms/QuickSort.h"
#include "sortingAlgorithms/SelectionSort.h"
#include "sortingAlgorithms/MergeSort.h"

using namespace std;

int main() {
    random_device rn;
    mt19937 gen(rn());
    uniform_int_distribution<int> dis(1, 100);
    string comDefault;
    int numberOfElements = 0;
    char whileOption = 'T';
    char userOption;

    while (whileOption == 'T' || whileOption == 't') {
        cout << "Give number of elements: \n";
        cin >> numberOfElements;

        if (numberOfElements <= 0) {
            cout << "Invalid number of elements!" << endl;
            return 2;
        }

        int *sortArray = new int[numberOfElements];

        for (int i = 0; i < numberOfElements; i++) {
            sortArray[i] = dis(gen);
        }

        cout << endl << "Your array before sort:" << endl
             << "-----------------------------------------------------------------------------------" << endl;
        for (int i = 0; i < numberOfElements; i++) {
            cout << sortArray[i] << " ";
        }
        cout << endl
             << "-----------------------------------------------------------------------------------" << endl;


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
            cout << endl << "Your array after sort:" << endl
                 << "-----------------------------------------------------------------------------------" << endl;
            for (int i = 0; i < numberOfElements; i++) {
                cout << sortArray[i] << " ";
            }
        }
        cout << endl
             << "-----------------------------------------------------------------------------------" << endl;

        delete[]sortArray;


        cout << "Do you want to continue (T/N)?" << endl;
        cin >> whileOption;
    }
    cout << endl << "Thanks for using this program! See ya next time! :)" << endl;
    return 0;
}