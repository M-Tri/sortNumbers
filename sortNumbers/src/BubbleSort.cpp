#include <vector>
#include <algorithm>
#include "BubbleSort.h"

void BubbleSort :: sort(std::vector<int>& numbers){
            size_t size = numbers.size() ;
            for(int i = 0 ; i < size - 1 ; i++){
                for(int j = i + 1 ; j < size - i ; j++){
                    if(numbers[i] > numbers[j]){
                        std::swap(numbers[i], numbers[j]) ;
                    }
                }
            }
}
