#include <stdio.h>

int main(void) {
    int count = 1, number, largest;

    printf("Enter number 1: ");
    scanf("%d", &largest);

    while (count < 10) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);

        if (number > largest)
            largest = number;

        count++;
    }

    printf("The largest number is: %d\n", largest);
    return 0;
}
