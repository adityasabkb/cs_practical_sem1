#include <stdio.h>

int main() {
    printf("Enter the max number: ");
    int r;
    scanf("%d", &r);
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < r; j++) {
            printf("  ");
        }
        int count = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        count--;
        while (count > 1) {
            count--;
            printf("%d ", count);
        }
        printf("\n");
    }
    for (int i = r - 1; i >= 0; i--) {
        for (int j = i - 1; j < r -1; j++) {
            printf("  ");
        }
        int count = 1;
        for (int j = 0; j < i; j++) {
            printf("%d ", count);
            count++;
        }
        count--;
        while (count > 1) {
            count--;
            printf("%d ", count);
        }
        printf("\n");
    }
    return 0;
}