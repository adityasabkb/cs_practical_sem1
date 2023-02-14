#include<stdio.h>

int main(){
    printf("enter the principal amount: ");
    float principal;
    scanf("%f",&principal);
    float amount = principal;
    for(int i=0;i<10;i++){
        amount+=amount*0.0775;
    }
    printf("the return is %f",amount - principal);
    return 0;
}