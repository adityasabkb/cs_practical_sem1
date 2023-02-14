#include <stdio.h>
#include <math.h>

int factorial(int x) {
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

    float sign = 1;
    float sinx = 0;
    int n=1;
    while (1){
        int m = 2*n-1;
        float term = pow(x,m) * sign/(float)factorial(m);
        
        if (sinx !=0){
            if (factorial(m)<0){//to check when does size of factorial crosses the integer limit
                break;
            }
        }
        
        sinx+=term;
        
        sign*=-1;
        n+=1;
    }
    printf("%f",sinx);
    return 0;
}