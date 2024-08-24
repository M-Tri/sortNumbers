#include "MergeSort.h"
//Based on "Introduction to Algorithms" by Cormen, Leiserson, Rivest, and Stein.

void MergeSort :: sort(std::vector<int>& numbers){
    mergeAndSort(numbers, 0, numbers.size() - 1) ;
}

void MergeSort :: mergeAndSort(std::vector<int>& numbers, int start, int end){
    if(start >= end){
        return ;
    }
    int midPoint = (start + end ) / 2 ;
    mergeAndSort(numbers, start, midPoint) ;
    mergeAndSort(numbers, midPoint + 1, end) ;
    merge(numbers, start, midPoint, end) ;
}

void MergeSort :: merge(std::vector<int>& numbers, int left, int mid, int right){
    
    int leftVectSize = (mid - left) + 1 ;
    std::vector<int> leftVect (leftVectSize) ;
    int temp = 0 ;
    for(int i = left ; i <= mid ; i++){
        leftVect[temp++] = numbers[i] ;
    }
    
    temp = 0 ;
    int rightVectSize = right - mid ;
    std::vector<int> rightVect (rightVectSize) ;
    for(int i = mid + 1 ; i <= right ; i++){
        rightVect[temp++] = numbers[i] ;
    }

    int indexOfLeft = 0 ;
    int indexOfRight = 0 ;
    int thirdVectIndex = left ;

    //Do until at least one array is completely processed.
    while(indexOfLeft < leftVectSize and indexOfRight < rightVectSize){
        if(leftVect[indexOfLeft] <= rightVect[indexOfRight]){
            numbers[thirdVectIndex] = leftVect[indexOfLeft] ;
            indexOfLeft++ ;
        }else{
            numbers[thirdVectIndex] = rightVect[indexOfRight] ;
            indexOfRight++ ;
        }
        thirdVectIndex++ ;
    }
    
    //Put the rest of the values in the main array.
    while( indexOfLeft < leftVectSize){
        numbers[thirdVectIndex] = leftVect[indexOfLeft] ;
        indexOfLeft++ ;
        thirdVectIndex++ ;
    }
    while(indexOfRight < rightVectSize){
        numbers[thirdVectIndex] = rightVect[indexOfRight] ;
        indexOfRight++ ;
        thirdVectIndex++ ;
    }
}
