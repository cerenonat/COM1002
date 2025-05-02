#include <stdio.h>

int main() {
    int a[10], b[10];

    printf("Enter 10 numbers for set A: ");
    for (int i = 0; i < 10; i++) scanf("%d", &a[i]);

    printf("Enter 10 numbers for set B: ");
    for (int i = 0; i < 10; i++) scanf("%d", &b[i]);

    printf("Intersection: ");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}