#include <stdio.h>


int main() {
    int matris[5][5];  //  matrisi olusturdum
    int satir_toplami[5] = {0};  //  satırlarin toplami icin tek tek
    int sutun_toplami[5] = {0};  // sutunlarin toplami icin tek tek

   
   // 1)matris inputu alma
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matris[i][j]);  
        }
    }

    

    // 2) Satir toplamlarini sutuna ekleme
    for (int i = 0; i < 5; i++) {
       
        int toplam = 0;
        for (int j = 0; j < 5; j++) {
            toplam += matris[i][j];
        }
        satir_toplami[i] = toplam;  // ilgili satirin toplami 

        // satirin toplamini sutuna ekleme islemi
        for (int j = 0; j < 5; j++) {
            matris[j][i] += toplam; // 0,0 1,0 2,0
        }
    }

    
    //  sutunun toplaminş satirlara ekleme
    for (int i = 0; i < 5; i++) {
        
        int toplam = 0;
        for (int j = 0; j < 5; j++) {
            toplam += matris[j][i]; // 0,0 1,0 2,0 topla
        }
        sutun_toplami[i] = toplam;  // Sütun toplamını kaydet

        // sutunun toplamini satir elemanlarina ekle
        for (int j = 0; j < 5; j++) {
            matris[i][j] += toplam; // 0,1 0,2 0,3 
        }
    }

    // ekrana yazdirma sirasi
 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}
