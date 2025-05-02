#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Ceren Onat 23291626.c Lab 6 Son lab <3


#define KIRMIZI 0
#define SİYAH 1


typedef struct AgacDugumu {
    int deger;
    int renk;
    struct AgacDugumu *sol, *sag, *ebeveyn;
} AgacDugumu; // Dugum zamani tursihan


AgacDugumu *NIL;


AgacDugumu *YeniDugumOlustur(int deger) {
    AgacDugumu *dugum = (AgacDugumu *)malloc(sizeof(AgacDugumu));
    dugum->deger = deger;
    dugum->renk = KIRMIZI; //kirmizidan donusecek umarim;
    dugum->sol = dugum->sag = dugum->ebeveyn = NIL;
    return dugum;
}

void SolDondur(AgacDugumu **kok, AgacDugumu *x) {
    AgacDugumu *y = x->sag;
    x->sag = y->sol;
    if (y->sol != NIL) {
        y->sol->ebeveyn = x;
    }
    y->ebeveyn = x->ebeveyn;
    if (x->ebeveyn == NIL) {
        *kok = y;
    } else if (x == x->ebeveyn->sol) {
        x->ebeveyn->sol = y;
    } else {
        x->ebeveyn->sag = y;
    }
    y->sol = x;
    x->ebeveyn = y;
}


void SagDondur(AgacDugumu **kok, AgacDugumu *y) {
    AgacDugumu *x = y->sol;
    y->sol = x->sag;
    if (x->sag != NIL) {
        x->sag->ebeveyn = y;
    }
    x->ebeveyn = y->ebeveyn;
    if (y->ebeveyn == NIL) {
        *kok = x;
    } else if (y == y->ebeveyn->sol) {
        y->ebeveyn->sol = x;
    } else {
        y->ebeveyn->sag = x;
    }
    x->sag = y;
    y->ebeveyn = x;
}


void AgaciDuzelt(AgacDugumu **kok, AgacDugumu *z) {
    while (z->ebeveyn->renk == KIRMIZI) {
        if (z->ebeveyn == z->ebeveyn->ebeveyn->sol) {
            AgacDugumu *y = z->ebeveyn->ebeveyn->sag;
            if (y->renk == KIRMIZI) {
                z->ebeveyn->renk = SİYAH;
                y->renk = SİYAH;
                z->ebeveyn->ebeveyn->renk = KIRMIZI;
                z = z->ebeveyn->ebeveyn;
            } else {
                if (z == z->ebeveyn->sag) {
                    z = z->ebeveyn;
                    SolDondur(kok, z);
                }
                z->ebeveyn->renk = SİYAH;
                z->ebeveyn->ebeveyn->renk = KIRMIZI;
                SagDondur(kok, z->ebeveyn->ebeveyn);
            }
        } else {
            AgacDugumu *y = z->ebeveyn->ebeveyn->sol;
            if (y->renk == KIRMIZI) {
                z->ebeveyn->renk = SİYAH;
                y->renk = SİYAH;
                z->ebeveyn->ebeveyn->renk = KIRMIZI;
                z = z->ebeveyn->ebeveyn;
            } else {
                if (z == z->ebeveyn->sol) {
                    z = z->ebeveyn;
                    SagDondur(kok, z);
                }
                z->ebeveyn->renk = SİYAH;
                z->ebeveyn->ebeveyn->renk = KIRMIZI;
                SolDondur(kok, z->ebeveyn->ebeveyn);
            }
        }
    }
    (*kok)->renk = SİYAH;
}


// agaci yerleştiriyoruz
void Ekle(AgacDugumu **kok, int deger) {
    AgacDugumu *z = YeniDugumOlustur(deger);
    AgacDugumu *y = NIL;
    AgacDugumu *x = *kok;

    while (x != NIL) {
        y = x;
        if (z->deger < x->deger) {
            x = x->sol;
        } else {
            x = x->sag;
        }
    }

    z->ebeveyn = y;
    if (y == NIL) {
        *kok = z;
    } else if (z->deger < y->deger) {
        y->sol = z;
    } else {
        y->sag = z;
    }

    z->sol = z->sag = NIL;
    z->renk = KIRMIZI;

    AgaciDuzelt(kok, z);
}

// in-order traversal 1.yazım şekli klasik
void inOrder(AgacDugumu *kok) {
    if (kok != NIL) {
        inOrder(kok->sol);
        printf("%d\n", kok->deger);
        inOrder(kok->sag);
    }
}

// Gıcık yazdırma şekli;
// Kırmızı-Siyah Ağacı seviyeye göre yazdırma
void SeviyeyeGoreYazdir(AgacDugumu *kok) {
    if (kok == NIL) return;

    AgacDugumu *kuyruk[200];
    int on = 0, arka = 0;
    kuyruk[arka++] = kok;

    while (on < arka) {
        int seviyeBoyutu = arka - on;

        for (int i = 0; i < seviyeBoyutu; i++) {
            AgacDugumu *mevcut = kuyruk[on++];

            // Değer ve renk yazdırılıyor, sadece bir boşluk olacak
            printf("%d %c", mevcut->deger, mevcut->renk == KIRMIZI ? 'R' : 'B');

            // Ebeveyn düğüm bilgisi varsa yazdırılıyor
            if (mevcut->ebeveyn != NIL) {
                if (mevcut->ebeveyn->sol == mevcut) {
                    printf(" (%d L)", mevcut->ebeveyn->deger);
                } else {
                    printf(" (%d R)", mevcut->ebeveyn->deger);
                }
            }
            // Boşlukları düzenleyerek yazdırma
            if (i < seviyeBoyutu - 1) {
                printf(" ");
            }

            // Sol ve sağ çocuklar kuyruğa ekleniyor
            if (mevcut->sol != NIL) {
                kuyruk[arka++] = mevcut->sol;
            }
            if (mevcut->sag != NIL) {
                kuyruk[arka++] = mevcut->sag;
            }
        }
        // Yeni satıra geçiş
        printf("\n");
    }
}

// Ceren Onat 23291626.c 



//sonunda ana fonksiyon
int main() {
   
    NIL = (AgacDugumu *)malloc(sizeof(AgacDugumu));
    NIL->renk = SİYAH;

    AgacDugumu *kok = NIL;

    int deger;

    while (1) {
        scanf("%d", &deger);
        if (deger == -1) {
            break;
        } // -1 girilene kadar devamke;
        Ekle(&kok, deger);
    }
    inOrder(kok);
    printf("\n"); // Bir boşluk
    SeviyeyeGoreYazdir(kok);


    return 0;

    
}
