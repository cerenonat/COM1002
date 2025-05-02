#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        printf("%d\n", isEven(n));
    }
    return 0;
}