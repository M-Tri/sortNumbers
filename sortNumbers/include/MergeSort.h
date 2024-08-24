#ifndef MergeSort_H
#define MergeSort_H
#include "PickSortingMethodInterface.h"

//Worst-Case Time Complexity O(n log n).
//Considered efficient for large datasets.
//Stable.
//Requires more space but can be implemented in place.
class MergeSort : public PickSortingMethodInterface {
    public:
        void sort(std::vector<int>& numbers) override ;
        void merge(std::vector<int>& numbers, int left, int mid, int right) ;
        void mergeAndSort(std::vector<int>& numbers, int start, int end) ;
};

#endif
