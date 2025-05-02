#include <stdio.h>

int main(void) {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    printf("The integer value of '%c' is %d\n", character, character);

    return 0;
}
