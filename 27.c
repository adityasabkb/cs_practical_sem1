#include <stdio.h>
#include <stdbool.h>

int compare(int *a1, int *a2, int n)
{
	int i, flag = 0;
	for(i = 0; i < n; i++)
	{
		if(*a1 != *a2)
		{
			flag = 1;
			break;
		}
		a1++;
		a2++;
	}
	if(flag == 1)
		 return 0;
	else
		 return 1;
}

int main(){


	int a1[100], a2[100];
	int n, i;
	printf("Enter the size of the array: ");
	scanf("%d", &n);

    //inputing array elements for both the arrays
	printf("Enter %d numbers for array 1: ", n);
	for(i = 0; i < n; i++)
		scanf("%d", &a1[i]);
	printf("Enter %d numbers for array 2: ", n);
	for(i = 0; i < n; i++)
		scanf("%d", &a2[i]);
	bool x = compare(a1, a2, n);
    printf("\n%d", x);
    
    
    
    return 0;
}