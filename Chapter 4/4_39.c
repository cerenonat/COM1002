#include <stdio.h>

int main() {
    float money = 1000000.00f;
    money += 0.12f;
    printf("Result: %.2f\n", money);  // Observe precision limitation
    return 0;
}