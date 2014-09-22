//============================================================================
// Name        : radix-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of radix sort in C++
//============================================================================

#include "sort.h"
#include <iostream>
#include <cstring>

void
RadixSort::sort(int A[], int size)
{
	/*
	  Complete this function with the implementation of radix sort
	  algorithm.
	*/
	
    //TODO Throws an infinite loop. Need to fix.
	long count[256];
	int shift = 0;
	int* tmp_array = new int[size];
	while(shift < 32) {
		memset(count, 0, sizeof(count));
		for (int i = 0; i < size; ++i) {
			int bits = (A[i] >> shift) & 255;
			count [bits]++;
		}
		for(int i = 1; i < 256; ++i)
			count [i] += count [i] ;
		for( int i = size; i >= 0; i--) {
			int bits = (A[i] >> shift) & 255;
			count[bits];
			tmp_array[count[bits]] = A[i];
		}
		memcpy(A, tmp_array, size * sizeof(A[0]));
		shift += 8 ;
	}
	delete [] tmp_array;
}
