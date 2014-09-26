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
	while (num_cmps++,gap > 0) {
		for (int i = gap;num_cmps++,i < size; i++) {//comparison
			int tmp = A[i];
			int j = i;
			while ((num_cmps++,j >= gap) && (num_cmps++, tmp<A[j-gap])) {//comparison
				A[j] = A[j-gap];
				j -= gap;
			}
			A[j] = tmp;
		}
		if (gap == 2) gap = 1;
		else gap = (int)(gap/2.2);
	}
}
