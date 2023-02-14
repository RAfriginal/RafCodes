/****************************************************
REFERENCE

Author:
Link: https://www.tutorialspoint.com/data_structures_algorithms/merge_sort_algorithm.htm
****************************************************/


/* 
	You may declare additional functions here
*/
void merge(int A[], int left[], int lSize, int right[], int rSize, double *dCounter)
{
    int i = 0, j = 0, k = 0;
    
    while (i < lSize && j < rSize)
    {
        (*dCounter)++;
        if (left[i] <= right[j])
            A[k++] = left[i++];
        else
            A[k++] = right[j++];
    }
    
    while (i < lSize)
    {
        (*dCounter)++;
        A[k++] = left[i++];
    }
    
    while (j < rSize)
    {
        (*dCounter)++;
        A[k++] = right[j++];
    }
}

/****************************************************
YOU ARE NOT ALLOWED TO MODIFY THE FUNCTION PROTOTYPES
****************************************************/


/*
	Sorts the array A using merge sorting algorithm.

	@param int A[] 			array to be sorted
	@param int n			size of the array to be sorted
	@param double *dCounter	counter variable for critical parts of the code
*/
void mergeSort(int A[], int n, double *dCounter) {
	if (n < 2) 
    return;
    
    int mid = n / 2;
    int left[mid];
    int right[n - mid];
    
    for (int i = 0; i < mid; i++)
        left[i] = A[i];
    for (int i = mid; i < n; i++)
        right[i - mid] = A[i];
    
    mergeSort(left, mid, dCounter);
    mergeSort(right, n - mid, dCounter);
    
    merge(A, left, mid, right, n - mid, dCounter);
	
}
