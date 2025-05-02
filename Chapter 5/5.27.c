#include <stdio.h>
#include <math.h>

void roots(double a, double b, double c) {
    double d = b*b - 4*a*c;
    if (d < 0) {
        printf("Imaginary roots\n");
    } else {
        double r1 = (-b + sqrt(d)) / (2*a);
        double r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots: %.2f, %.2f\n", r1, r2);
    }
}

int main() {
    roots(1, -3, 2);
    return 0;
}