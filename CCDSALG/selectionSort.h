/****************************************************
REFERENCE

Author: Introduction to Algorithms, Third Edition by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein.
Link:https://www.geeksforgeeks.org/selection-sort/
****************************************************/





/****************************************************
YOU ARE NOT ALLOWED TO MODIFY THE FUNCTION PROTOTYPES
****************************************************/


/*
	Sorts the array A using selection sorting algorithm.

	@param int A[] 			array to be sorted
	@param int n			size of the array to be sorted
	@param double *dCounter	counter variable for critical parts of the code
*/
void selectionSort(int A[], int n, double *dCounter) {
  int i, j, minIndex, temp;

  for (i = 0; i < n - 1; i++) {
    minIndex = i;

    for (j = i + 1; j < n; j++) {
      *dCounter += 1;
      if (A[j] < A[minIndex]) {
        minIndex = j;
      }
    }

    temp = A[minIndex];
    A[minIndex] = A[i];
    A[i] = temp;
  }
}
