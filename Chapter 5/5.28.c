#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    printf("Sum: %d\n", sumDigits(7631));
    return 0;
}