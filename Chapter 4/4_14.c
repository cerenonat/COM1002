#include <stdio.h>

int main() {
    int fact;
    printf("n\tfactorial(n)\n");
    for (int i = 1; i <= 5; i++) {
        fact = 1;
        for (int j = 1; j <= i; j++)
            fact *= j;
        printf("%d\t%d\n", i, fact);
    }
    // Difficulty: factorial of 20 exceeds range of int.
    return 0;
}