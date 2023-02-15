#include<stdio.h>

int main(){
    int current_num = 1;
    int current_letter = 'A';
    int n;
    scanf("%d",&n);
    for (int i = 1;i<=n; i++){
        //printing spaces first
        /*
            i = n ->0 spaces
            i = n-1 -> 1 space
            i = x -> n-x spaces
        */
       //printing space n-i times
       for (int j=0; j<n-i;j++){
        printf(" ");
       }
        //printing charecters
        // if i= 1,3,5.. print nunbers  i ... times
        // if i=2,4,6 print letters A,B,C .. i times
       if (i%2==1){
            for(int j=0;j<i;j++){
                printf("%d ",current_num);
                current_num++;
            }
            printf("\n");
       }
       else{
            for(int j=0;j<i;j++){
                printf("%c ",current_letter);
                current_letter++;
            }
            printf("\n");
       }
    }
    return 0;
}