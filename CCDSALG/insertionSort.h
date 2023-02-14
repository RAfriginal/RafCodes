/****************************************************
REFERENCE

Author:Introduction to Algorithms, Third Edition by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein.
Link:https://www.tutorialspoint.com/data_structures_algorithms/insertion_sort_algorithm.htm
****************************************************/


/* 
	You may declare additional functions here
*/


/****************************************************
YOU ARE NOT ALLOWED TO MODIFY THE FUNCTION PROTOTYPES
****************************************************/


/*
	Sorts the array A using insertion sorting algorithm.

	@param int A[] 			array to be sorted
	@param int n			size of the array to be sorted
	@param double *dCounter	counter variable for critical parts of the code
*/
void insertionSort(int A[], int n, double *dCounter)
{
    
	int i, key, j;
  for (i = 1; i < n; i++)
  {
    key = A[i];
    j = i - 1;

    while (j >= 0 && A[j] > key)
    {
      A[j + 1] = A[j];
      j = j - 1;
      (*dCounter)++;
    }
    A[j + 1] = key;
  }
}
