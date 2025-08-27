# Sorting Algorithms in C++

This project demonstrates the implementation of multiple sorting algorithms in C++ using a polymorphic interface approach.

## Features

* Supports multiple sorting algorithms:

  * **Bubble Sort**
  * **Heap Sort**
  * **Insertion Sort**
  * **Merge Sort**
  * **Quick Sort**
* Easy to switch between sorting methods via a unified `Sorter` interface.
* Includes a testing utility to verify correctness of sorting results.

## Files

* `Sorter.h/cpp` – Handles sorting using the chosen algorithm.
* `BubbleSort.h/cpp`, `HeapSort.h/cpp`, `InsertionSort.h/cpp`, `MergeSort.h/cpp`, `QuickSort.h/cpp` – Individual sorting algorithm implementations.
* `Testing.h/cpp` – Functions to test and validate sorting correctness.
* `main.cpp` – Demonstrates sorting a sample vector using `QuickSort`.

## How to Use

1. Include the desired sorting algorithm.
2. Create a vector of integers to sort.
3. Instantiate a `Sorter` object with the chosen algorithm.
4. Call `sort()` on your vector.
5. Use `testResults()` to verify correctness.

Example:

```cpp
std::vector<int> numbers = {5, 2, 4, 1, 3};
Sorter sorter(new QuickSort());
sorter.sort(numbers);
testResults(originalNumbers, numbers, numbers);
delete sorter._sortingMethod; // Clean up memory
```

## Notes

* Memory management is manual; ensure to `delete` dynamically allocated sorting method objects to prevent leaks.
