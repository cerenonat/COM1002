#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    unsigned long long int a = 0, b = 1, c;
    for (unsigned int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    for (int i = 0; i < 20; i++)
        printf("Fib(%d): %llu\n", i, fibonacci(i));
    return 0;
}