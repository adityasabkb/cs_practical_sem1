#include<stdio.h>
#include<math.h>
int main(){
    int num[100];
    int n=0;
    for(int i =0;i<100;i++){
        scanf("%d",&num[i]);
        if(num[i]<0){
            break;
        }
        n++;
    }
    int sum_i=0;
    int sum_i2=0;
    float average;
    float standard_deviation;
    float varience;
    for (int i=0;i<n;i++){
        sum_i+=num[i];
        sum_i2+=num[i]*num[i];
    }
    /*
    average = sum(x)/n
    standard deviation = root(sum(x^2)/n - average^2)
    varience=sum(x^2)/n - average^2
    */
    average = sum_i/(float)n;
    varience = (float)sum_i2/n - average*average;
    standard_deviation = pow(varience,0.5);
    printf("sum: %d\naverage: %f\nstd dev: %f\nvarience: %f",sum_i,average,standard_deviation,varience);
    return 0;
}