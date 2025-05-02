#include <stdio.h>

float max(float a, float b, float c, float d) {
    float max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    return max;
}

int main() {
    printf("Max: %.2f\n", max(1.1, 3.3, 2.2, 4.4));
    return 0;
}