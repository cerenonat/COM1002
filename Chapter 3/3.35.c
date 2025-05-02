#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    if (b != 0 && a % b == 0) {
        printf("%d is a multiple of %d\n", a, b);
    } else {
        printf("%d is not a multiple of %d\n", a, b);
    }

    return 0;
}
