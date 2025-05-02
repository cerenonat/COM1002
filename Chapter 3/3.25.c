#include <stdio.h>
#define PI 3.14159

int main(void) {
    double radius;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    printf("Diameter: %.2f\n", 2 * radius);
    printf("Circumference: %.2f\n", 2 * PI * radius);
    printf("Area: %.2f\n", PI * radius * radius);

    return 0;
}
