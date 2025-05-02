#include <stdio.h>
#include <math.h>

int main() {
    double principal = 1000.0;
    printf("Rate\tYear\tAmount on deposit\n");

    for (int rate = 5; rate <= 10; rate++) {
        for (int year = 1; year <= 10; year++) {
            double amount = principal * pow(1.0 + rate / 100.0, year);
            printf("%d%%\t%d\t%.2f\n", rate, year, amount);
        }
    }

    return 0;
}