#include <stdio.h>

int main() {
    int sales, salary, range[9] = {0};
    while (1) {
        printf("Enter salesperson's sales (-1 to end): ");
        scanf("%d", &sales);
        if (sales == -1) break;

        salary = 200 + sales * 0.09;
        if (salary >= 1000) range[8]++;
        else range[(salary - 200) / 100]++;
    }

    for (int i = 0; i < 8; i++) {
        printf("$%d–%d: %d\n", 200 + i * 100, 299 + i * 100, range[i]);
    }
    printf("$1000 and over: %d\n", range[8]);

    return 0;
}