/****************************************************
REFERENCE

Author:Tutorialspoint
Link: https://www.tutorialspoint.com/data_structures_algorithms/quick_sort_algorithm.htm
****************************************************/




/****************************************************
YOU ARE NOT ALLOWED TO MODIFY THE FUNCTION PROTOTYPES
****************************************************/


/*
	Sorts the array A using <fill this> sorting algorithm.

	@param int A[] 			array to be sorted
	@param int n			size of the array to be sorted
	@param double *dCounter	counter variable for critical parts of the code
*/

//Quick Sort function
void Sort5(int A[], int n, double *dCounter) {
	  if (n < 2)
      return;

   int i = 0, j = n - 1, pivot, temp;
   pivot = A[n / 2];
   while (i <= j) {
      while (A[i] < pivot)
         i++;
      while (A[j] > pivot)
         j--;
      if (i <= j) {
         temp = A[i];
         A[i] = A[j];
         A[j] = temp;
         i++;
         j--;
         (*dCounter)++;
      }
   }

   Sort5(A, j + 1, dCounter);
   Sort5(A + i, n - i, dCounter);
}
