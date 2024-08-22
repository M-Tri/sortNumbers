#include "Sorter.h"

Sorter :: Sorter(PickSortingMethodInterface* method) : _sortingMethod(method){}
void Sorter :: sort(std::vector<int>& numbers){
        _sortingMethod->sort(numbers) ;
    }
