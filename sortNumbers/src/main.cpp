//includes a user interface to choose method of sorting.
//includes the main function
#include <iostream>
#include <algorithm>
#include "Sorter.h"
#include "BubbleSort.h"
#include "HeapSort.h"

void printNums(std::vector<int> vector);
void compareVectors(std::vector<int>& inputVec, std::vector<int>& outputVec);

int main(){
    std::vector<int> inputNumbers({4, 44, 2, 4, 2, 22});
    std::vector<int> outputNumbers = inputNumbers ;
    std::vector<int> testNumbers = inputNumbers ;
    
    //Choose method and sort.
    Sorter sorter(new HeapSort()) ;
    sorter.sort(outputNumbers) ;
    
    //Test
    std::sort(testNumbers.begin(), testNumbers.end()) ;
    compareVectors(testNumbers, outputNumbers) ;
    printNums(testNumbers) ;
    printNums(outputNumbers) ;

    //Deallocate pointer.
    //When the Pointer _method is deleted, and object have no pointers pointing to it anymore, it is destroyed. Then the virtual ~PickSortingMethodInterface() destructor is called to clean it based on the Derived object(MergeSort, BubbleSort...)
    delete sorter._sortingMethod ;
}

//Helper functions.
void printNums(std::vector<int> vector){
    //Print new vector to test.
    for(int num : vector){
        std::cout << num << " ";
    }
    std::cout << std::endl ;
}
void compareVectors(std::vector<int>& inputVec, std::vector<int>& outputVec){
    if(equal(inputVec.begin(), inputVec.end(), outputVec.begin())){
        std::cout << "Equal" << std::endl ;
    }else{
        std::cout << "Not Equal" << std::endl ;
    }
}
