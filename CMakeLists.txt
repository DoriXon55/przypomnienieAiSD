cmake_minimum_required(VERSION 3.26)
project(AiSD_Sort_Programs.cpp)
set(CMAKE_CXX_STANDARD 23)

add_executable(przypomnienieAiSD
AiSD_Sort_Programs.cpp
sortingAlgorithms/BubbleSort.cpp
sortingAlgorithms/BubbleSort.h
sortingAlgorithms/InsertionSort.cpp
sortingAlgorithms/InsertionSort.h
sortingAlgorithms/MergeSort.cpp
sortingAlgorithms/MergeSort.h
sortingAlgorithms/QuickSort.cpp
sortingAlgorithms/QuickSort.h
sortingAlgorithms/SelectionSort.cpp
sortingAlgorithms/SelectionSort.h
        searchAlgorithms/BinarySearch.cpp
        searchAlgorithms/BinarySearch.h
sortingAlgorithms/ShellSort.cpp
sortingAlgorithms/ShellSort.h
)