/****************************************************
REFERENCE

Author:
Link:
****************************************************/


/****************************************************
YOU ARE NOT ALLOWED TO MODIFY THE FUNCTION PROTOTYPES
****************************************************/


#include <stdlib.h> 
#include <time.h> 

void generateData (int A[], int n) {   
    
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 100;
    }

}
