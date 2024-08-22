#ifndef PICKSORTINGMETHODINTERFACE_H
#define PICKSORTINGMETHODINTERFACE_H

#include <vector>
#include <algorithm>

class PickSortingMethodInterface{
    public:
        virtual void sort(std::vector<int>& numbers) = 0 ;
    
        //Destructor.
        //Every time an object is destroyed, its destructor is called. This is a fundamental principle of object-oriented programming in C++. The object will be destroyed when nothing is pointing to it.
        virtual ~PickSortingMethodInterface() {} ;
};

#endif
