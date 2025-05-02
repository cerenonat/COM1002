#include <stdio.h>

int main() {
    int acc;
    float limit, balance, new_limit;

    for (int i = 0; i < 3; i++) {
        printf("Enter account number, credit limit, current balance: ");
        scanf("%d %f %f", &acc, &limit, &balance);

        new_limit = limit / 2;
        printf("Account: %d\tOld limit: %.2f\tNew limit: %.2f\n", acc, limit, new_limit);
        if (balance > new_limit)
            printf("Warning: Balance %.2f exceeds new limit %.2f\n", balance, new_limit);
    }
    return 0;
}