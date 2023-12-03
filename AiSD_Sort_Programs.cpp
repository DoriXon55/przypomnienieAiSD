#include <iostream>
#include <random>
#include "sortingAlgorithms/BubbleSort.h"
#include "sortingAlgorithms/InsertionSort.h"
#include "sortingAlgorithms/QuickSort.h"
#include "sortingAlgorithms/SelectionSort.h"
#include "sortingAlgorithms/MergeSort.h"
#include "sortingAlgorithms/ShellSort.h"
#include "searchAlgorithms/BinarySearch.h"
using namespace std;

int main() {
    // data initialization
    random_device rn;
    mt19937 gen(rn());
    uniform_int_distribution<int> dis(1, 100);
    string comDefault;
    int numberOfElements = 0;
    char whileOption = 'Y', binarySearchOption, userOption;


    //main piece of the program
    while (whileOption == 'Y' || whileOption == 'y') {
        cout << "Give number of elements: \n";
        cin >> numberOfElements;

        if (numberOfElements <= 0) {
            cout << "Invalid number of elements!" << endl;
            return 2;
        }

        //allocate memory
        int *sortArray = new int[numberOfElements];

        // filling the array with the random numbers
        for (int i = 0; i < numberOfElements; i++) {
            sortArray[i] = dis(gen);
        }

        // writing the board on the screen before sorting
        cout << endl << "Your array before sort:" << endl
             << "-----------------------------------------------------------------------------------" << endl;
        for (int i = 0; i < numberOfElements; i++) {
            cout << sortArray[i] << " ";
        }
        cout << endl
             << "-----------------------------------------------------------------------------------" << endl;


        //user's choice regarding sorting
        cout << "Select one option:\n"
                "B - Bubble Sort\n"
                "I - Insertion Sort\n"
                "Q - Quick Sort\n"
                "S - Selection Sort\n"
                "M - Merge Sort\n"
                "H - Shell Sort\n";
        cin >> userOption;

        // mechanism responsible for calling selected functions
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
            case 'H':
                shellSort(sortArray, numberOfElements);
                break;
            default:
                cout << "Wrong Input!!!";
                comDefault = "Wrong Input";
                break;
        }

        // writing the board on the screen after sorting
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

        cout << "Do you want to use Binary Search? (Y/N)" << endl;
        cin >> binarySearchOption;

        // BinarySearch - user's choice
        if (binarySearchOption == 'Y' || binarySearchOption == 'y') {
            int target;
            cout << "Enter the number you are looking for: " << endl;
            cin >> target;
            int binarySearchResult = binarySearch(sortArray, 0, numberOfElements - 1, target);
            if (binarySearchResult == -1) {
                cout << "Number not found!" << endl;
            } else {
                cout << "Number found in the index: " << binarySearchResult << endl;
            }
        }

        //program continuity - also user's choice
        cout << "Do you want to continue (Y/N)?" << endl;
        cin >> whileOption;

        delete[]sortArray;
    }
    cout << endl << "Thanks for using this program! See ya next time! :)" << endl;
    return 0;
}