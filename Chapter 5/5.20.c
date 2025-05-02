#include <stdio.h>

void printRectangle(int side1, int side2, char fillChar) {
    for (int i = 0; i < side1; i++) {
        for (int j = 0; j < side2; j++) {
            printf("%c", fillChar);
        }
        printf("\n");
    }
}

int main() {
    printRectangle(5, 4, '@');
    return 0;
}