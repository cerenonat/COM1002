#include <stdio.h>

void printRectangle(int side1, int side2) {
    for (int i = 0; i < side1; i++) {
        for (int j = 0; j < side2; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    printRectangle(4, 5);
    return 0;
}