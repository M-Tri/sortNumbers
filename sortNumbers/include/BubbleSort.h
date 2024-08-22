#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "PickSortingMethodInterface.h"

class BubbleSort : public PickSortingMethodInterface {
    public:
        virtual void sort(std::vector<int>& numbers) override ;
};

#endif
