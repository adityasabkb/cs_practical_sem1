#include <stdio.h>

int main() {
    printf("Enter the basic salary of the employee: ");
    int basic;
    scanf("%d", &basic);
    int tax;
    int perks;
    if (basic >= 40000) {
        printf("Level 1\n");
        tax = 10;
        perks = 10000;
    } 
    else if (basic < 40000 && basic >= 30000) {
        printf("Level 2\n");
        tax = 8;
        perks = 8000;
    } 
    else if (basic < 30000 && basic >= 20000) {
        printf("Level 3\n");
        tax = 8;
        perks = 6500;
    } 
    else {
        printf("Level 4\n");
        tax = 0;
        perks = 6500;
    }

    int gross = basic + perks + (basic / 4);
    
    printf("The gross amount is %d\n", gross);
    printf("The tax amount is %d\n", ((basic * tax) / 100));
    printf("The net salary is %d\n", (gross - ((basic * tax) / 100)));
    return 0;
}