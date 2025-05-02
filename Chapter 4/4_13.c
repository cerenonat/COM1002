#include <stdio.h>

int main() {
    int n, sum = 0, square_sum = 0, cube_sum = 0;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
        square_sum += i * i;
        cube_sum += i * i * i;
    }

    printf("Sum = %d\nSum of squares = %d\nSum of cubes = %d\n", sum, square_sum, cube_sum);
    return 0;
}