#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int number = rand() % 1000 + 1;
    int guess;
    printf("Guess the number (1-1000):\n");
    do {
        scanf("%d", &guess);
        if (guess < number) printf("Too low.\n");
        else if (guess > number) printf("Too high.\n");
        else printf("Excellent! You guessed the number!\n");
    } while (guess != number);
    return 0;
}