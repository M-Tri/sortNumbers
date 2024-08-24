#include "Sorter.h"
#include "BubbleSort.h"
#include "HeapSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "Testing.h"

int main(){
    std::vector<PickSortingMethodInterface*> sortingMehodsList({
        new BubbleSort(),           //0
        new HeapSort(),             //1
        new InsertionSort(),        //2
        new MergeSort(),            //3
        //new QuickSort()             //4
    }) ;
    
    std::vector<int> inputNumbers({1, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14});
    std::vector<int> outputNumbers = inputNumbers ;
    std::vector<int> sortedNumbersForTesting = inputNumbers ;
    
    //Choose method and sort.
    Sorter sorter(sortingMehodsList[3]) ;
    sorter.sort(outputNumbers) ;
    
    testResults(inputNumbers, outputNumbers, sortedNumbersForTesting) ;

    //Deallocate pointer.
    //When the Pointer _method is deleted, and object have no pointers pointing to it anymore, it is destroyed. Then the virtual ~PickSortingMethodInterface() destructor is called to clean it based on the Derived object(MergeSort, BubbleSort...)
    delete sorter._sortingMethod ;
}
