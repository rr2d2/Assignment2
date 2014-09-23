//============================================================================
// Name        : sort.h
// Author      : 
// Date        :
// Copyright   : 
// Description : Sort interface and various sorting algorithms in C++
//============================================================================

#ifndef SORT_H_
#define SORT_H_

class Sort {
protected:
   unsigned long num_cmps; // number of comparisons performed in sort function
public:
   virtual void sort(int A[], int size) = 0;    // main entry point
   bool testIfSorted(int A[], int size);        // returns false if not sorted
                                                // true otherwise
   unsigned long getNumCmps() { return num_cmps; }        // returns # of comparisons
   void resetNumCmps() { num_cmps = 0; }
};

class SelectionSort:public Sort {	// SelectionSort class
public:
  void sort(int A[], int size);		// main entry point
};

class InsertionSort:public Sort {	// InsertionSort class
public:
  void sort(int A[], int size);		// main entry point
};

class BubbleSort:public Sort {		// BubbleSort class
public:
  void sort(int A[], int size);		// main entry point
};

class ShellSort:public Sort {		// ShellSort class
public:
  void sort(int A[], int size);		// main entry point
};

class RadixSort:public Sort {		// RadixSort class
public:
  void sort(int A[], int size);		// main entry point
  int digit(int k, int num);  		// use countsort for radix-sort
  int num_of_digits(int num); 		// determine the number of digits of the largest int
private:
  const int base = 10;
};

#endif //SORT_H_
