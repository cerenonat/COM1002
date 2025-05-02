#include <stdio.h>

int main() {
    int code;
    while (1) {
        printf("Enter paycode (1=manager, 2=hourly, 3=commission, 4=pieceworker, -1 to quit): ");
        scanf("%d", &code);
        if (code == -1) break;

        double pay = 0;
        switch (code) {
            case 1: {
                double salary;
                printf("Enter weekly salary: ");
                scanf("%lf", &salary);
                pay = salary;
                break;
            }
            case 2: {
                double hours, rate;
                printf("Enter hours worked and hourly rate: ");
                scanf("%lf %lf", &hours, &rate);
                if (hours <= 40)
                    pay = hours * rate;
                else
                    pay = 40 * rate + (hours - 40) * rate * 1.5;
                break;
            }
            case 3: {
                double sales;
                printf("Enter gross weekly sales: ");
                scanf("%lf", &sales);
                pay = 250 + 0.057 * sales;
                break;
            }
            case 4: {
                double items, rate;
                printf("Enter number of items and rate per item: ");
                scanf("%lf %lf", &items, &rate);
                pay = items * rate;
                break;
            }
            default:
                printf("Invalid code\n");
        }

        printf("Weekly pay: %.2f\n", pay);
    }

    return 0;
}