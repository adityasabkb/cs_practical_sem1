#include <stdio.h>

int main() {
    printf("enter the number of fibonaci numbers to be printed");

    int m;
    scanf("%d",&m);
    
    int a=0;
    int b =1;

    do
    {
        printf("%d,",b);
        b = a+b;
        a = b-a;
        m-=1;
    } while (m!=0);
    
    
    return 0;
}