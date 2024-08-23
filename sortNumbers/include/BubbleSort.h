#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "PickSortingMethodInterface.h"

//Worst-Case Time Complexity O(n^2).
//Considered inefficient for large datasets.
//Stable.
class BubbleSort : public PickSortingMethodInterface {
    public:
        virtual void sort(std::vector<int>& numbers) override ;
};

#endif
