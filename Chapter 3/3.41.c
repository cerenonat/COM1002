#include <stdio.h>

int main(void) {
    int number, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        sum += digit * digit;
        number /= 10;
    }

    printf("Sum of squares of digits: %d\n", sum);

    return 0;
}
