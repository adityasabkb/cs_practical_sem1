#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    printf("Left shift value: %d\n", (num << 1));
    printf("Right shift value: %d", (num >> 1));
    return 0;
}