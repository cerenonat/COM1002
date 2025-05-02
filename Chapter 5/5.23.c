#include <stdio.h>

int timeInSeconds(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

int main() {
    int h1 = 3, m1 = 45, s1 = 20;
    int h2 = 5, m2 = 50, s2 = 10;
    int t1 = timeInSeconds(h1, m1, s1);
    int t2 = timeInSeconds(h2, m2, s2);
    printf("Difference: %d seconds\n", t2 - t1);
    return 0;
}