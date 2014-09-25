//============================================================================
// Name        : insertion-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"

void
InsertionSort::sort(int A[], int size)				// main entry point
{
  /* Complete this function with the implementation of insertion sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
    for (int i = 1; i<size;num_cmps++, i++) {
        int temp = A[i];
        int j = i;
        for (; j>0&& (num_cmps++, temp<A[j-1]); j--)
            A[j] = A[j-1];
        A[j] = temp;
    }
}
