#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 1) return base;
    return base * power(base, exponent - 1);
}

int main() {
    printf("Power: %d\n", power(3, 4));
    return 0;
}