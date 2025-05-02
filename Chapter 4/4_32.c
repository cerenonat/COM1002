#include <stdio.h>

int main() {
    int n;
    printf("Enter odd number from 1 to 19: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= (n - i) / 2; j++) printf(" ");
        for (int k = 1; k <= i; k++) printf("*");
        printf("\n");
    }
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 1; j <= (n - i) / 2; j++) printf(" ");
        for (int k = 1; k <= i; k++) printf("*");
        printf("\n");
    }
    return 0;
}