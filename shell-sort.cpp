//============================================================================
// Name        : shell-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of shell sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void
ShellSort::sort(int A[], int size)
{
  /* Complete this function with the implementation of shell sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
	int gap = size/2;
	while (gap > 0) {
		for (int i = gap; i < size; i++) {
			int tmp = A[i];
			int j = i;
			while (j >= gap && (num_cmps++, tmp<A[j-gap])) {
				A[j] = A[j-gap];
				j -= gap;
			}
			A[j] = tmp;
		}
		if (gap == 2) gap = 1;
		else gap = (int)(gap/2.2);
	}
}
