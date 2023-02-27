#include <stdio.h>

int main() {
    printf("Enter first number: ");
    int n1;
    scanf("%d", &n1);
    printf("Enter second number: ");
    int n2;
    scanf("%d", &n2);

    int hcf = 1;
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 == n2) {
        hcf = n1;
    } 
    else {
        for (int i = 2; i <= n1; i++) {
            if ((n1 % i == 0) && (n2 % i == 0)) {
                hcf = i;
            }
        }
    }
    printf("The highest common factor is:  %d", hcf);
    
    return 0;
}