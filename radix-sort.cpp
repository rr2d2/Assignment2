//============================================================================
// Name        : radix-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of radix sort in C++
//============================================================================

#include "sort.h"
#include <iostream>
#include <cmath>

void
RadixSort::sort(int A[], int size)
{
	/*
	  Complete this function with the implementation of radix sort
	  algorithm.
	*/
	
	/* find max */
	int max_number = A[0];
	for (int i = 0; i < size; i++) {
		if (A[i] > max_number)
			max_number = A[i];
	}

	/* find num of digits in max */
	int d = num_of_digits(max_number);

	/* declare vars */
	int i, j, m;
	int *C = new int[base];
	int *B = new int[size];

	/* begin algorithm */
	for (m = 0; m < d; m++) {
		/* init C */
		for (i = 0; i < base; i++) C[i] = 0;
		/* begin count sort on individual digits */
		for (j = 0; j < size; j++) C[ digit(m, A[j]) ]++;
		/* continue count sort */
		for (i = 1; i < base; i++) C[i] += C[i-1];
		/* finish count sort */
		for (j = size-1; j >= 0; j--) {
			i = C[ digit(m, A[j]) ]--;
			B[i] = A[j];
		}
		/* copy B into A */
		for (j = 0; j < size; j++) A[j] = B[j];
	}
	delete[] B;
	delete[] C;	
}

/* returns the number of digits of an int */
int
RadixSort::num_of_digits(int num) {
	int num_digits = 0;
	for (int i = 0; pow(base,i); i++) {
		if (pow(base,i) <= num)
			num_digits++;
		else
			return num_digits;
	}
    return 0;
}

/* returns the digit to sort */	
int
RadixSort::digit(int k, int num) {
	int r;
	r = num/(int)pow(base,k);
	return r % base;
}
