#include "BubbleSort.h"

void BubbleSort :: sort(std::vector<int>& numbers){
            size_t size = numbers.size() ;
            for(int i = 0 ; i < size - 1 ; i++){
                for(int j = 0 ; j < size - i - 1 ; j++){
                    if(numbers[j] > numbers[j + 1]){
                        std::swap(numbers[j], numbers[j + 1]) ;
                    }
                }
            }
}
