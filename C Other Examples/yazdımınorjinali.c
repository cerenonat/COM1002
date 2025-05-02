#include <stdio.h>

int main(void) {
  while (1) {
    int sayi;
    printf("Bir sayi girin (Çıkış için 'q' tuşuna basın): ");
    
    if (scanf("%d", &sayi) == 1)
     {
      if (sayi == 0)
        printf("Girilen sayi sifir\n");
      else if (sayi > 0)
        printf("Girilen sayi pozitif\n");
      else
        printf("Girilen sayi negatif\n");
    } else {
      char c;
      scanf(" %c", &c); // Hatalı girişi temizle
      
      if (c == 'q') {
        printf("Çıkılıyor...\n");
        break;
      } else {
        printf("Geçersiz giriş. Lütfen bir sayı girin veya 'q' tuşuna basın.\n");
      }
    }
  }
  
  return 0;
}
