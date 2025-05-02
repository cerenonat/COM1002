#include <stdio.h>

int main() {
    int num;

    for (int i = 0; i < 5; i++) {
        printf("Enter a number (1-30): ");
        scanf("%d", &num);

        for (int j = 0; j < num; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}