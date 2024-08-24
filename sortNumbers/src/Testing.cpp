#include <iostream>
#include <vector>
#include "Testing.h"

void testResults(std::vector<int>& input, std::vector<int>& output,
                       std::vector<int>& sortedNumbersForTesting){
    
    //Test using c++ function sort().
    std::sort(sortedNumbersForTesting.begin(), sortedNumbersForTesting.end()) ;
    compareVectors(sortedNumbersForTesting, output) ;
    
    //Print result for visual confirmation.
    printNums(input) ;
    printNums(sortedNumbersForTesting) ;
    printNums(output) ;
}

void printNums(std::vector<int>& vector){
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
