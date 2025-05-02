#include <stdio.h>

void printDigits(int number) {
    int digits[5], count = 0;
    while (number > 0) {
        digits[count++] = number % 10;
        number /= 10;
    }
    for (int i = count - 1; i >= 0; i--) {
        printf("%d  ", digits[i]);
    }
    printf("\n");
}

int main() {
    printDigits(4562);
    return 0;
}