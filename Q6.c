#include <stdio.h>
int main(){
    int n;
    printf("Enter n number: ");
    scanf("%d",&n);
    while (n!=0){
        int end_digit=n%10;
        printf("%d\n", n);
        n=n/10;
    }

}