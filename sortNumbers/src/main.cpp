//includes a user interface to choose method of sorting.
//includes the main function
#include <iostream>
#include <algorithm>
#include "Sorter.h"
#include "BubbleSort.h"

void printVector(std::vector<int> vector){
    //Print new vector to test.
    for(int num : vector){
        std::cout << num << " ";
    }
    std::cout << std::endl ;
}

int main(){
    
    std::vector<int> inputNumbers({4, 2, 2, 4, 44, 22});
    
    //Sort.
    Sorter sorter(new BubbleSort()) ;
     sorter.sort(inputNumbers) ;
   
    printVector(inputNumbers) ;

    //Deallocate pointer.
    //When the Pointer _method is deleted, and object have no pointers pointing to it anymore, it is destroyed. Then the virtual ~PickSortingMethodInterface() destructor is called to clean it based on the Derived object(MergeSort, BubbleSort...)
    delete sorter._sortingMethod ;
}
