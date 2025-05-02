#include <stdio.h>

int main() {
    int n, value, sum = 0;
    float average;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        sum += value;
    }

    average = (float) sum / n;
    printf("Sum = %d\nAverage = %.2f\n", sum, average);

    return 0;
}