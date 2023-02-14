#include <stdio.h>


int main() {
    printf("Enter smaller number: ");
    int a;
    scanf("%d", &a);

    printf("Enter the bigger number: ");
    int b;
    scanf("%d", &b);
    
    for (int i = a; i <=b; i++) {
        int prime = 1;
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                prime=0;
                break;
            }
        }
        if (prime && i != 1) {
            printf("%d ", i);
        }
    }
    return 0;
}