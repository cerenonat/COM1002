#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int frequency[13] = {0};
    srand(time(NULL));

    for (int i = 0; i < 36000; i++) {
        int die1 = 1 + rand() % 6;
        int die2 = 1 + rand() % 6;
        frequency[die1 + die2]++;
    }

    for (int i = 2; i <= 12; i++) {
        printf("Sum %d: %d times\n", i, frequency[i]);
    }

    return 0;
}