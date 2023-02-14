#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    printf("assume equation to be ax^2 +bx +c =0");
    printf("enter a: ");
    scanf("%f",&a);
    printf("enter b: ");
    scanf("%f",&b);
    printf("enter c: ");
    scanf("%f",&c);
    if (b*b-4*a*c < 0){
        printf("roots don't exist");
        return 0;
    }
    if(a==0){
        printf("there is only one roots with value: %f",-c/b);
        return 0;
    }
    float root1 = (-b + pow((b*b - 4*a*c),0.5))/(2*a);
    float root2 = (-b - pow((b*b - 4*a*c),0.5))/(2*a);
    printf("roots are: \nfirst: %f\nsecond: %f",root1,root2);
    return 0;
}