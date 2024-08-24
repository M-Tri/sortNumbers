#ifndef HEAPSORT_H
#define HEAPSORT_H
#include "PickSortingMethodInterface.h"

//Worst-Case Time Complexity O(n log n).
//Efficient for large datasets.
//Not Stable.
class HeapSort : public PickSortingMethodInterface {
    public:
        void sort(std::vector<int>& numbers) override ;
        int parent(int childIndex);
        int left(int parentIndex);
        int right(int parentIndex);
        void maxHeapify(std::vector<int>& numbers, int i, int heapSize) ;
        void buildMaxHeap(std::vector<int>& numbers) ;
};

#endif
