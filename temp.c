#include<stdio.h>
#include<stdlib.h>


int main(){
    //alot space for 100 integers in heap
    // 100*4 x -> 100*sizeof(int)

    int * ptr = (int *)malloc(100*sizeof(int));
    int* ptr2 = (int *)calloc(100,sizeof(int));
    free(ptr);
    return 0;
}