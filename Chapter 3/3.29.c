#include <stdio.h>

int main(void) {
    int i;

    printf("Number\tSquare\tCube\n");

    for (i = 0; i <= 10; ++i) {
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }

    return 0;
}
