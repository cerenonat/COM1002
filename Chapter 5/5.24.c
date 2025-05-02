#include <stdio.h>

double toYen(double usd) {
    return usd * 118.87;
}

double toEuro(double usd) {
    return usd * 0.92;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        double usd = i;
        printf("USD: %.2f, Yen: %.2f, Euro: %.2f\n", usd, toYen(usd), toEuro(usd));
    }
    return 0;
}