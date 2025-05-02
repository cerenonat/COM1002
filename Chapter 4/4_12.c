#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Prime numbers from 1 to 100:\n");
    for (int i = 2; i <= 100; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) printf("%d ", i);
    }
    printf("\n");
    return 0;
}