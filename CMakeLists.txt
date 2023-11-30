cmake_minimum_required(VERSION 3.26)
project(przypomnienieAiSD)

set(CMAKE_CXX_STANDARD 23)

add_executable(przypomnienieAiSD AiSD_Sort_Programs.cpp
sortingAlgorithms/BubbleSort.cpp
sortingAlgorithms/BubbleSort.h
sortingAlgorithms/InsertionSort.cpp
sortingAlgorithms/InsertionSort.h
sortingAlgorithms/MergeSort.h
sortingAlgorithms/MergeSort.cpp
sortingAlgorithms/QuickSort.cpp
sortingAlgorithms/QuickSort.h
sortingAlgorithms/SelectionSort.h
sortingAlgorithms/SelectionSort.cpp)