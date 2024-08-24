#include "HeapSort.h"
//Based on "Introduction to Algorithms" by Cormen, Leiserson, Rivest, and Stein.

void HeapSort :: sort(std::vector<int>& numbers){
    int vectorSize = numbers.size() ;
    int heapSize = numbers.size() ;
    
    buildMaxHeap(numbers) ;
    for(int j = vectorSize - 1 ; j >= 1 ; j--){
        std::swap(numbers[0], numbers[j]) ;
        //The largest is at the end. Now we can exclude it.
        heapSize-- ;
        //The heap is already build, we just need to fix it.
        maxHeapify(numbers, 0, heapSize) ;
    }
}

//Helper functions
int HeapSort :: parent(int childIndex){
    return (childIndex - 1) / 2 ;
}
int HeapSort :: left(int parentIndex){
    return (parentIndex * 2) + 1 ;
}
int HeapSort :: right(int parentIndex){
    return (parentIndex * 2) + 2 ;
}

void HeapSort :: maxHeapify(std::vector<int>& numbers, int i, int heapSize){
    int l = left(i);
    int r = right(i);
    int largest = i ;
    if(l < heapSize and numbers[l] > numbers[i]){
        largest = l ;
    }
    if(r < heapSize and numbers[r] > numbers[largest]){
        largest = r ;
    }
    if(largest != i){
        std::swap(numbers[i], numbers[largest]) ;
        maxHeapify(numbers, largest, heapSize) ;
    }
}

void HeapSort :: buildMaxHeap(std::vector<int>& numbers){
    int sizeWithoutLeaves = numbers.size()/2 ;
    int size= numbers.size() ;
    for(int i = sizeWithoutLeaves ; i >= 0 ; i-- ){
        maxHeapify(numbers, i, size) ;
    }
}

