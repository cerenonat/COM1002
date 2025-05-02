#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip() {
    return rand() % 2;
}

int main() {
    srand(time(NULL));
    int heads = 0, tails = 0;
    for (int i = 0; i < 100; i++) {
        if (flip()) heads++;
        else tails++;
    }
    printf("Heads: %d, Tails: %d\n", heads, tails);
    return 0;
}