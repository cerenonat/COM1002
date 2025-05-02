#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//23291626.c yeni 5 Aralik Ceren Onat Data labı
typedef struct  yapim{
    char sayilar[30];
    char kisilerim[60];
    struct yapim *bir;
    struct yapim *iki;
} yapim; 


yapim* dugumZamaniTursihan(const char* kisilerim, const char* sayilar)
{// Düğüm zamanii turşihan
    yapim* tursihan = (yapim*)malloc(sizeof(yapim));
    strcpy(tursihan->kisilerim, kisilerim);

    strcpy(tursihan->sayilar, sayilar);
    tursihan->bir = NULL;

    tursihan->iki = NULL;
    return tursihan;
}

void relax(yapim* tur1) {
    if (tur1 == NULL) {
        return;
    }
    relax(tur1->bir);
    relax(tur1->iki);
    free(tur1);
}


yapim* EklemeZamani(yapim* tur1, const char* kisilerim, const char* sayilar) {
    if (tur1 == NULL) {
        return dugumZamaniTursihan(kisilerim, sayilar);
    }
    if (strcmp(kisilerim, tur1->kisilerim) < 0) {
        tur1->bir = EklemeZamani(tur1->bir, kisilerim, sayilar);
    } else if (strcmp(kisilerim, tur1->kisilerim) > 0) {
        tur1->iki = EklemeZamani(tur1->iki, kisilerim, sayilar);
    }
    return tur1;
} // Dugume ekleme yapma zamani tursihan kos


void Bulsana(yapim* tur1, const char* sub, int* saymak) {
    if (tur1 == NULL) {
        return;
    } // İsim zamani tursihannn

    Bulsana(tur1->bir, sub, saymak);

    
    if (strncmp(tur1->kisilerim, sub, strlen(sub)) == 0) {
        printf("%s\n", tur1->kisilerim);
        (*saymak)++;
    }

    
    Bulsana(tur1->iki, sub, saymak);
}




int main() {
    yapim* tur1 = NULL;
    char sub[60];
    char sayilar[40];
    char kisilerim[70];
    
    
    int saymak;

    while (1) {
        scanf("%s", kisilerim);
        if (strcmp(kisilerim, "-1") == 0) break;

        scanf("%s", sayilar);

        tur1 = EklemeZamani(tur1, kisilerim, sayilar);
    }
    // lab4 cerenimo

    while (1) {
        printf("");
        scanf("%s", sub);
        if (strcmp(sub, "-1") == 0) 
        break;

        saymak = 0;

        Bulsana(tur1, sub, &saymak);

        if (saymak == 0) {
            printf("nobody"); break;
        } else if (saymak == 1) 
          break;
    }   

    //finalll
    

    
}