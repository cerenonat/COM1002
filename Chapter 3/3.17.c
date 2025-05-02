#include <stdio.h>
#include <math.h>

int main() {
    int accNo, years;
    float amount, rate, totalInterest, totalPayable, monthly;

    while (1) {
        printf("Enter account number (-1 to end): ");
        scanf("%d", &accNo);
        if (accNo == -1) break;

        printf("Enter mortgage amount (in dollars): ");
        scanf("%f", &amount);
        printf("Enter mortgage term (in years): ");
        scanf("%d", &years);
        printf("Enter interest rate (as a decimal): ");
        scanf("%f", &rate);

        totalInterest = amount * rate * years;
        totalPayable = amount + totalInterest;
        monthly = totalPayable / (years * 12);

        printf("The monthly payable interest is: $ %.0f\n", monthly);
    }

    return 0;
}
