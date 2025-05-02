#include <stdio.h>

int main() {
    int product, quantity;
    float total = 0.0;

    printf("Enter product number and quantity sold (0 to end):\n");

    while (1) {
        scanf("%d", &product);
        if (product == 0)
            break;
        scanf("%d", &quantity);

        switch (product) {
            case 1: total += 2.98 * quantity; break;
            case 2: total += 4.50 * quantity; break;
            case 3: total += 9.98 * quantity; break;
            case 4: total += 4.49 * quantity; break;
            case 5: total += 6.87 * quantity; break;
            default: printf("Invalid product number\n");
        }
    }

    printf("Total retail value: $%.2f\n", total);
    return 0;
}