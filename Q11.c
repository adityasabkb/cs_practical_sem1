#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    
    while(num > 0) {
        printf("%d",num%10);
        num /= 10;
    }
    
    return 0;
}