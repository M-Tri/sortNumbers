#ifndef QuickSort_H
#define QuickSort_H
#include "PickSortingMethodInterface.h"

//Worst-Case Time Complexity O(n^2), however, average time is O(n log n)
//Considered efficient for large datasets.
//Not Stable.
//Requires more space but can be implemented in-place.
class QuickSort : public PickSortingMethodInterface {
    public:
        void sort(std::vector<int>& numbers) override ;
        int partition(std::vector<int>& numbers, int left, int right) ;
        void quickSortMain(std::vector<int>& numbers, int left, int right) ;
};

#endif
