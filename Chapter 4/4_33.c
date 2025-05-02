#include <stdio.h>

int main() {
    const char *ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    const char *tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};

    for (int i = 1; i <= 100; i++) {
        printf("%3d = %s%s\n", i, tens[i/10], ones[i%10]);
    }

    return 0;
}