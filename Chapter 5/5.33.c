#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int number = rand() % 1000 + 1, guess, count = 0;
    printf("Guess the number (1-1000):\n");
    do {
        scanf("%d", &guess);
        count++;
        if (guess < number) printf("Too low.\n");
        else if (guess > number) printf("Too high.\n");
        else printf("Excellent! You guessed the number in %d tries.\n", count);
    } while (guess != number);
    if (count <= 10) printf("Ahah! You know the secret!\n");
    else printf("You should be able to do better!\n");
    return 0;
}