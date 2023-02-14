#include<stdio.h>

int main(){
    printf("enter a number");
    int a;
    scanf("%d",&a);
    int sum=0;
    while (a!=0){
        sum+=a%10;
        a/=10;
    }
    printf("the sum of the digits is %d",sum);
    
    return 0;
}