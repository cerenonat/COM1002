#include <stdio.h>

int main() {
    float total, sales, countyTax, stateTax, totalTax;
    char month[20];

    while (1) {
        printf("Enter total amount collected (-1 to quit): ");
        scanf("%f", &total);
        if (total == -1) break;

        printf("Enter name of month: ");
        scanf("%s", month);

        sales = total / 1.09;
        countyTax = sales * 0.05;
        stateTax = sales * 0.04;
        totalTax = countyTax + stateTax;

        printf("Total Collections: $ %.2f\n", total);
        printf("Sales: $ %.2f\n", sales);
        printf("County Sales Tax: $ %.2f\n", countyTax);
        printf("State Sales Tax: $ %.2f\n", stateTax);
        printf("Total Sales Tax Collected: $ %.2f\n", totalTax);
    }

    return 0;
}
