#include <stdio.h>
#include <math.h>

int fact(int x) {
    int fact = 1;
    for (int i =1; i<=x;i++){
        fact*=i;
    }
    return fact;
}

int main() {
    printf("Enter the angle in radians (x): ");
    float x;
    scanf("%f",&x);

    float sinx = x-pow(x,3)/fact(3)+pow(x,5)/fact(5)-pow(x,7)/fact(7);
    
    printf("%f",sinx);
    return 0;
}