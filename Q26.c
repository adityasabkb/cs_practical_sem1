#include <stdio.h>



int main()
{
    int arr[100];
    int N, i ;
    int * ptr = arr;    // Pointer to arr[0] 

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);

        // Move pointer to next array element
          ptr++ ;
    }

    // Make sure that pointer again points back to last array element
    ptr--;
        

    printf("Array elements: ");
    for (i = N; i > 0; i--)
    {
        // Print value pointed by the pointer
        printf(" %d ", *ptr--);

        // Move pointer to next array element
    
    }
    return 0;
}