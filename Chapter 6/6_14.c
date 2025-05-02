#include <stdio.h>

int main() {
    int a[10], b[10], unionSet[20], index = 0;

    printf("Enter 10 numbers for set A: ");
    for (int i = 0; i < 10; i++) scanf("%d", &a[i]);

    printf("Enter 10 numbers for set B: ");
    for (int i = 0; i < 10; i++) scanf("%d", &b[i]);

    for (int i = 0; i < 10; i++) unionSet[index++] = a[i];

    for (int i = 0; i < 10; i++) {
        int unique = 1;
        for (int j = 0; j < 10; j++) {
            if (b[i] == a[j]) unique = 0;
        }
        if (unique) unionSet[index++] = b[i];
    }

    printf("Union: ");
    for (int i = 0; i < index; i++) printf("%d ", unionSet[i]);
    printf("\n");

    return 0;
}