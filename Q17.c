#include <stdio.h>

int main() {
    int a[10] = { 1,3,4,6,9,13,16,18,21,23 };
    int b[10] = { 3,4,7,10,11,15,20,26,28,60 };
    int c[20];

    int index_a = 0;
    int index_b = 0;
    int index_c = 0;
    while (index_a < 10 || index_b < 10) {
        if (a[index_a] < b[index_b]) {
            c[index_c] = a[index_a];
            index_c++;
            index_a++;
        } 
        else if (b[index_b] < a[index_a]) {
            c[index_c] = b[index_b];
            index_c++;
            index_b++;
        } 
        else {
            c[index_c] = a[index_a];
            index_c++;
            index_a++;
            c[index_c] = b[index_b];
            index_c++;
            index_b++;
        }
    }
    while (index_a < 10) {
        c[index_c] = a[index_a];
        index_c++;
        index_a++;
    }
    while (index_b < 10) {
        c[index_c] = b[index_b];
        index_c++;
        index_b++;
    }
    printf("Elements of A are: ");
    for (int i = 0; i < 10; i++) {
        printf("%d, ", a[i]);
    }
    printf("\nElements of B are: ");
    for (int i = 0; i < 10; i++) {
        printf("%d, ", b[i]);
    }
    printf("\nElements of C are: ");
    for (int i = 0; i < 20; i++) {
        printf("%d, ", c[i]);
    }
    return 0;
}