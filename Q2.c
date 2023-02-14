#include <stdio.h>
#define PI 3.141592

int main() {
    printf("Enter the radius: ");
    float r;
    scanf("%f", &r);
    printf("The perimeter of the circle is: %f\n", (2 * PI * r));
    printf("The area of the circle is: %f\n", (PI * r * r));
    printf("The volume of the sphere is: %f", ((4 * PI * r * r * r) / 3));
    return 0;
}