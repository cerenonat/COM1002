#include <stdio.h>

int main(void) {
    double radius;
    const double PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    printf("Diameter: %.2f\n", 2 * radius);
    printf("Circumference: %.2f\n", 2 * PI * radius);
    printf("Area: %.2f\n", PI * radius * radius);

    return 0;
}
