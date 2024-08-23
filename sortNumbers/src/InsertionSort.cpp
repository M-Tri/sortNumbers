#include "InsertionSort.h"
//Based on "Introduction to Algorithms" by Cormen, Leiserson, Rivest, and Stein.

void InsertionSort::sort(std::vector<int>& numbers){
    for(int i = 1 ; i < numbers.size() ; i++){
        int key = numbers[i] ;
        int j = i - 1 ;
        while( j >= 0 and numbers[j] > key){
            numbers[j+1] = numbers[j] ;
            j-- ;
        }
        numbers[j+1] = key ;
    }
}
