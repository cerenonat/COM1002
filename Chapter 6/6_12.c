#include <stdio.h>

int main() {
    double sales[20];
    double allowance[75];
    int numbers[50] = {0};
    int GPA[10] = {2, 3, 4, 3, 3, 2, 4, 1, 2, 3};

    for (int i = 0; i < 20; i++) {
        printf("Enter sales[%d]: ", i);
        scanf("%lf", &sales[i]);
    }

    for (int i = 0; i < 75; i++) {
        allowance[i] += 1000;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", GPA[i]);
    }

    return 0;
}