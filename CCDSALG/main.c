/****************************************************
Group: 		
Section:	
Members:Roj Aleck Friginal, Derek Odeste	
****************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "bubbleSort.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "mergeSort.h"
#include "sort5.h"
#include "sort6.h"
#include "generateData.h"
#include "timer.h"


int main() {
	
	int N = 20000, Arr[N];
	int M;
	double counterBubble = 0, counterInsertion = 0, counterSelection = 0, counterMerge = 0, counterQuick = 0,counterHeap = 0;
	double avgExecTimeBubble = 0, avgExecTimeInsertion = 0, avgExecTimeSelection = 0, avgExecTimeMerge = 0, avgExecTimeQuick = 0,avgExecTimeHeap;

	generateData(Arr, N);
	
	for (M = 1; M < 21; M++) {
		
		struct timespec begin = getTime();
		bubbleSort(Arr, N, &counterBubble);
		struct timespec end = getTime();
		double elapsed = getElapsed(begin, end);
		
		avgExecTimeBubble += elapsed;
		
	}
	
	avgExecTimeBubble /= M;
	printf("-- N: %d --\n\n",N);
	printf("Bubble sort:\n");
	printf("Average MET: %f milliseconds\n", avgExecTimeBubble * 1000);
	printf("Average counter value: %.0f\n", counterBubble / M);

	generateData(Arr, N);
	for (M = 1; M < 21; M++) {
		
		struct timespec begin = getTime();
		insertionSort(Arr, N, &counterInsertion);
		struct timespec end = getTime();
		double elapsed = getElapsed(begin, end);
		
		avgExecTimeInsertion += elapsed;
		
	}
	avgExecTimeInsertion /= M;
	
	printf("\nInsertion Sort:\n");
	printf("Average MET: %lf milliseconds\n", avgExecTimeInsertion * 1000);
	printf("Average counter value: %.f\n",counterInsertion/M);

	generateData(Arr, N);
	for (M = 1; M < 21; M++) {
		
		struct timespec begin = getTime();
		insertionSort(Arr, N, &counterSelection);
		struct timespec end = getTime();
		double elapsed = getElapsed(begin, end);
		
		avgExecTimeSelection += elapsed;
		
	}
	avgExecTimeSelection /= M;
	
	printf("\nSelection Sort:\n");
	printf("Average MET: %lf milliseconds\n", avgExecTimeSelection * 1000);
	printf("Average counter value: %.0f\n",counterSelection/M);

	generateData(Arr, N);
	for (M = 1; M < 21; M++) {
		
		struct timespec begin = getTime();
		mergeSort(Arr, N, &counterMerge);
		struct timespec end = getTime();
		double elapsed = getElapsed(begin, end);
		
		avgExecTimeMerge += elapsed;
		
	}
	avgExecTimeMerge /= M;
	
	printf("\nMerge Sort:\n");
	printf("Average MET: %lf milliseconds\n", avgExecTimeMerge * 1000);
	printf("Average counter value: %.0f\n",counterMerge/M);

	generateData(Arr, N);
	for (M = 1; M < 21; M++) {
		
		struct timespec begin = getTime();
		Sort5(Arr, N, &counterQuick);
		struct timespec end = getTime();
		double elapsed = getElapsed(begin, end);
		
		avgExecTimeQuick += elapsed;
		
	}
	avgExecTimeQuick /= M;
	
	printf("\nQuick Sort:\n");
	printf("Average MET: %lf milliseconds\n", avgExecTimeQuick * 1000);
	printf("Average counter value: %.0f\n",counterQuick/M);

	generateData(Arr, N);
	for (M = 1; M < 21; M++)
	{
		
		struct timespec begin = getTime();
		sort6(Arr, N, &counterHeap);
		struct timespec end = getTime();
		double elapsed = getElapsed(begin, end);
		
		avgExecTimeHeap += elapsed;
		
	}
	avgExecTimeHeap /= M;
	
	printf("\nHeap Sort:\n");
	printf("Average MET: %lf milliseconds\n", avgExecTimeHeap * 1000);
	printf("Average counter value: %.0f\n\n\n",counterHeap/M);

	return 0;
}
