#include <stdio.h>

int toQualityPoints(int avg) {
    if (avg >= 90) return 4;
    if (avg >= 80) return 3;
    if (avg >= 70) return 2;
    if (avg >= 60) return 1;
    return 0;
}

int main() {
    printf("Points: %d\n", toQualityPoints(85));
    return 0;
}