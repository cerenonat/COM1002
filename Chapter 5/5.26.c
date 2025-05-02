#include <stdio.h>

int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0) sum += i;
    return sum == n;
}

int main() {
    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("%d is a perfect number.\n", i);
        }
    }
    return 0;
}