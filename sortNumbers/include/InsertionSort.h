#ifndef InsertionSort_H
#define InsertionSort_H
#include "PickSortingMethodInterface.h"

//Worst-Case Time Complexity O(n^2).
//Considered efficient for small datasets.
//Stable.
class InsertionSort : public PickSortingMethodInterface {
    public:
        virtual void sort(std::vector<int>& numbers) override ;
};

#endif
