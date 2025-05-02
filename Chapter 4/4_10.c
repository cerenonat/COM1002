#include <stdio.h>

int main() {
    printf("Celsius\tFahrenheit\n");
    for (int c = 30; c <= 50; c++) {
        float f = c * 9.0 / 5.0 + 32;
        printf("%d\t%.2f\n", c, f);
    }
    return 0;
}