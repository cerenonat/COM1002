#include <stdio.h>

int main() {
    int sign = 1;
    double pi = 0.0;
    int i = 1, terms = 0;

    printf("Term\tApproximation\n");

    while (1) {
        pi += sign * (4.0 / i);
        terms++;
        printf("%d\t%.5f\n", terms, pi);
        if (pi >= 3.14159) break;
        i += 2;
        sign *= -1;
    }

    return 0;
}