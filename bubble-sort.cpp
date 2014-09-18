//============================================================================
// Name        : bubble-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of bubble sort in C++
//============================================================================

#include "sort.h"

void 
BubbleSort::sort(int A[], int size)			// main entry point
{
  /* Complete this function with the implementation of bubble sort algorithm 
     Record number of comparisons in variable num_cmps of class Sort
  */
    for (int k=1; k<size;k++) {
        bool cont = false;
            for (int i=0;i<size-k;i++)
                if(A[i+1]<A[i]){
                    int temp = A[i];
                    A[i] = A[i+1];
                    A[i+1] = temp;
                    cont = true;
                }
        if (!cont) break;
    }
}
