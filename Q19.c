#include <stdio.h>

int userInput() {
    printf("Enter a number: ");
    int x;
    scanf("%d", &x);
    return x;
}

int main() {
    int a[3][3];
    int b[3][3];
    printf("For first matrix,\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = userInput();
        }
    }
    printf("For second matrix,\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            b[i][j] = userInput();
        }
    }
    printf("The matrices are,\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        if (i % 2 == 0) {
            printf("     ");
        } else {
            printf("  ,  ");
        }
        for (int j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    int sum[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum,\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    int prod[3][3] = {{ 0,0,0 },
                      { 0,0,0 },
                      { 0,0,0 }};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                prod[i][j] += (a[k][j] * b[i][k]);
            }
        }
    }
    printf("Multiplication,\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    int aTrans[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            aTrans[j][i] = a[i][j];
        }
    }
    int bTrans[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            bTrans[j][i] = b[i][j];
        }
    }
    printf("The transpose of the matrices are,\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", aTrans[i][j]);
        }
        if (i % 2 == 0) {
            printf("     ");
        } else {
            printf("  ,  ");
        }
        for (int j = 0; j < 3; j++) {
            printf("%d ", bTrans[i][j]);
        }
        printf("\n");
    }
    return 0;
}