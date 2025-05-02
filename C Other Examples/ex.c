#include <stdio.h>
#include <stdlib.h>

typedef struct kart {
    int adim;         
    int deger;         
    struct kart* siradaki; 
    struct kart* ilk; 
} Kart;


typedef struct kuyruk {
    Kart* ilk; 
    Kart* son;  
} Kuyruk;


Kuyruk* ciftOlustur() {
    Kuyruk* cift = (Kuyruk*)malloc(sizeof(Kuyruk));
    cift->ilk = NULL;
    cift->son = NULL;
    return cift;
}

void ekle(Kuyruk* cift, int adim, int deger) {
    Kart* yenisi = (Kart*)malloc(sizeof(Kart));
    yenisi->adim = adim;
    yenisi->deger = deger;
    yenisi->siradaki = NULL;
    yenisi->ilk = cift->son;

    if (cift->son == NULL) {
        cift->ilk = yenisi;
    } else {
        cift->son->siradaki = yenisi;
    }
    cift->son = yenisi;
}


int basCikar(Kuyruk* cift, int* deger) {
    if (cift->ilk == NULL) return -1;
    Kart* s = cift->ilk;
    int adim = s->adim;
    *deger = s->deger;

    cift->ilk = cift->ilk->siradaki;
    if (cift->ilk != NULL) {
        cift->ilk->ilk = NULL;
    } else {
        cift->son = NULL;
    }
    free(s);
    return adim;
}

// Kuyruğun sonundan eleman çıkarma
int arkaEkle(Kuyruk* cift, int* deger) { ///////
    if (cift->son == NULL) return -1;
    Kart* s = cift->son;
    int adim = s->adim;
    *deger = s->deger;

    cift->son = cift->son->ilk;
    if (cift->son != NULL) {
        cift->son->siradaki = NULL;
    } else {
        cift->ilk = NULL;
    }
    free(s);
    return adim;
}


int kontrol(Kuyruk* cift) {
    return cift->ilk == NULL;
}

int main() {
    Kuyruk* cift = ciftOlustur();
    int adim, sayisi, deger = 1;

    while (1) {
        scanf("%d", &adim);
        if (adim == -1) 
        break;
        ekle(cift, adim, deger); //
        deger++;
    }

    scanf("%d", &sayisi);


    int dizim1[sayisi];
    int dizim2[sayisi];
    int cokTop = 0;
    for (int a = 0; a < sayisi; a++) { //
        int onSira, arkaSira;
        int onDeger = cift->ilk->adim;
        int arkaDeger = cift->son->adim;
        


        
        if (onDeger >= arkaDeger) {
            int selectedValue = basCikar(cift, &onSira);
            dizim1[a] = secim;
            dizim2[a] = onSira;
            arkaEkle(cift, &arkaSira);
            cokTop += secim;
        } else {
            int secim = arkaEkle(cift, &arkaSira);
            arkaEkle(cift, &onSira);
            dizim1[a] = secim;
            dizim2[a] = arkaSira;
            cokTop += secim;
        }
    }

    // Maksimum toplamı yazdırma
    printf("%d\n", cokTop);

    for(int a = 0; a < sayisi; a++){
        printf("%d %d\n", dizim1[a], dizim2[a]);
    }

    // Belleği temizleme
    while(kontrol(cift)) {
        int dummyIndex;
        arkaEkle(cift, &dummyIndex);
    }
    free(cift);

   
}
