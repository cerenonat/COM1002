#include <stdio.h>

int isRightTriangle(int a, int b, int c) {
    int x = a*a, y = b*b, z = c*c;
    return (x + y == z) || (x + z == y) || (y + z == x);
}

int main() {
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) == 3) {
        printf("%d\n", isRightTriangle(a, b, c));
    }
    return 0;
}