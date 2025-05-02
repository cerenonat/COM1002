#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    int cevre;
    float alan, u;

    printf("a kenarını girin: ");
    scanf("%d", &a);
    printf("b kenarını girin: ");
    scanf("%d", &b);
    printf("c kenarını girin: ");
    scanf("%d", &c);

    // Üçgen çizilebilirlik kontrolü
    if (a < b + c && b < a + c && c < a + b) {
        cevre = a + b + c;
        u = cevre / 2.0;

        printf("Üçgen çizilebilir\n");

        // İkizkenar, çeşitkenar, eşkenar kontrolü
        if ((a == b && b != c) || (a == c && c != b) || (b == c && b != a)) {
            printf("Bu verilerle ikizkenar üçgen çizilebilir.\n");
        } else if (a != b && b != c && a != c) {
            printf("Çeşitkenar üçgen çizilebilir\n");
        } else {
            printf("Eşkenar üçgen çizilebilir.\n");
        }

        // Alan hesaplama
        alan = sqrt(u * (u - a) * (u - b) * (u - c));

        // Alanın mutlak değerini al
        alan = fabs(alan);

        printf("Çevresi: %d\n", cevre);
        printf("Alanı: %.2f\n", alan);
    } else {
        printf("Bu verilerle üçgen çizilemez.\n");
    }

    return 0;
}
