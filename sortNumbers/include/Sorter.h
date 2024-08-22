#ifndef SORTER_H
#define SORTER_H

#include "PickSortingMethodInterface.h"

class Sorter{
    public:
        PickSortingMethodInterface* _sortingMethod ;
        Sorter(PickSortingMethodInterface* method) ;
        void sort(std::vector<int>& numbers) ;
    
};

#endif
