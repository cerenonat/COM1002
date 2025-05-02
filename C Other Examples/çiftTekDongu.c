#include <stdio.h>

int main() {
    char sayi; // sayi'yi karakter olarak tanımla

    while (1) {
        printf("Sayı giriniz: (Çıkmak için 'h') ");
        scanf(" %c", &sayi); // %c kullanarak karakter oku

        if (sayi == 'h') {
            printf("Programdan çıkılıyor...");
            break;
        }

        // 'h' dışındaki diğer karakterleri kontrol et
        if (sayi >= '0' && sayi <= '9') {
            int sayiInt = sayi - '0'; // ASCII değerinden sayıya dönüştürme
            if (sayiInt % 2 == 0)
                printf("Sayı çifttir.\n");
            else
                printf("Tek sayıdır.\n");
        } else {
            printf("Geçersiz giriş. Lütfen bir sayı girin.\n");
            // Hatalı girişi temizle
            while ((sayi = getchar()) != '\n' && sayi != EOF);
        }
    }

    return 0;
}
