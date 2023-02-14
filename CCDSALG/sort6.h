/****************************************************
REFERENCE

Author:
Link: https://www.tutorialspoint.com/data_structures_algorithms/heap_sort_algorithm.htm
****************************************************/

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int A[], int n, int i, double *dCounter) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && A[l] > A[largest]) {
        largest = l;
    }

    if (r < n && A[r] > A[largest]) {
        largest = r;
    }

    (*dCounter)++;
    if (largest != i) {
        swap(&A[i], &A[largest]);
        heapify(A, n, largest, dCounter);
    }
}




/****************************************************
YOU ARE NOT ALLOWED TO MODIFY THE FUNCTION PROTOTYPES
****************************************************/


/*
	Sorts the array A using <fill this> sorting algorithm.

	@param int A[] 			array to be sorted
	@param int n			size of the array to be sorted
	@param double *dCounter	counter variable for critical parts of the code
*/

//Heapsort algorithm
void sort6(int A[], int n, double *dCounter) {
	for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(A, n, i, dCounter);
    }

    for (int i = n - 1; i >= 0; i--) {
        swap(&A[0], &A[i]);
        heapify(A, i, 0, dCounter);
    }
}
