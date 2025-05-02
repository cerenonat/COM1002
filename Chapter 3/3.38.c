#include <stdio.h>

int main(void) {
    int number, d1, d2, d3, d4, d5;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    d1 = number / 10000;
    d2 = (number % 10000) / 1000;
    d3 = (number % 1000) / 100;
    d4 = (number % 100) / 10;
    d5 = number % 10;

    printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);

    return 0;
}
