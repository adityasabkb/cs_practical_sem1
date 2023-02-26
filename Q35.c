#include<stdio.h>

void f(_Bool arr[],int n,int max,int fmax){
    if(n==max){return;}
    if(arr[n-2]==0){return f(arr,n+1,max,fmax);}
    else{
        for(int m=2*n;m<=fmax;m+=n){
            arr[m-2]=0;
        }
        return f(arr,n+1,max,fmax);
    }
}


int main(){
    _Bool arr[2499];
    
    //initialising array as 1;

    for (int i =0;i<2499;i++){arr[i]=1;}

    f(arr,2,50,2500);


    FILE * fptr = fopen("primes.out","w");
    for (int i =0;i<2499;i++){
        if (arr[i]==1){
            printf("%d,",i+2);
            fprintf(fptr,"%d\n",i+2);
        }
        }

    fclose(fptr);
    return 0;
}