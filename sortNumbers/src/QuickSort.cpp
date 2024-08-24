#include "QuickSort.h"
//Based on "Introduction to Algorithms" by Cormen, Leiserson, Rivest, and Stein.

void QuickSort :: sort(std::vector<int>& numbers){
    quickSortMain(numbers, 0, numbers.size() - 1) ;
}

void QuickSort :: quickSortMain(std::vector<int>& numbers, int left, int right){
    if ( left < right){
        int pivot = partition(numbers, left, right) ;
        quickSortMain(numbers, left, pivot - 1) ;
        quickSortMain(numbers, pivot + 1, right) ;
    }
}

int QuickSort :: partition(std::vector<int>& numbers, int left, int right){
    int pivot = numbers[right] ;
    int highestIndexOfLow = left - 1 ;
    
    for(int j = left ; j < right - 1 ; j++){
        if(numbers[j] <= pivot){
            highestIndexOfLow++ ;
            std::swap(numbers[highestIndexOfLow], numbers[j]) ;
        }
    }
    std::swap(numbers[highestIndexOfLow + 1], numbers[right]) ;
    return highestIndexOfLow + 1 ;
}
