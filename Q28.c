#include<stdio.h>
void isFibonacci(int n){
    int a = 1, b = 0, temp , d;
    for (int i = 1; i<10; i++){
        temp = a;
        a = a+b;
        b = temp;
        if(a>n){
            break;
        }
        if (a==n)
        {
             d = 1;
            break;
        }

        
    }
    if (d==1)
    {
        printf("it is a fibonacci\n");
    }
    else
    printf("it is not a fibonacci\n");
    



}
void isPrime(int n){
    int e;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            printf("It is not a prime");
            break;
        }
        else
        e=0;
        
    }
    if (e==0)
    {
        printf("It is prime");
    }
    
    
    
}

void main() {
    int a;
    printf("Enter the no.:");
    scanf("%d", &a);
    isFibonacci(a);
    isPrime(a);



}