#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 // Ceren onat 23291626.c LAB 5 13.12.2024 :) 
typedef struct AgacDugumZamani {
    int degerZamani;
    struct AgacDugumZamani *SolDugumTursihan;
    struct AgacDugumZamani *SagDugumTursihan;
    struct AgacDugumZamani *EbeveynDugumu;
    int DengeFaktorZamani;
    int YukseklikZamani;
} AgacDugumZamani;


AgacDugumZamani *YeniDugumTursihanOlustur(int degerZamani, AgacDugumZamani *EbeveynDugumu) {
    if (degerZamani == -1) return NULL;
    AgacDugumZamani *YeniDugumTursihan = (AgacDugumZamani *)malloc(sizeof(AgacDugumZamani));
    YeniDugumTursihan->degerZamani = degerZamani;
    YeniDugumTursihan->SolDugumTursihan = NULL;
    YeniDugumTursihan->SagDugumTursihan = NULL;
    YeniDugumTursihan->EbeveynDugumu = EbeveynDugumu;
    YeniDugumTursihan->DengeFaktorZamani = 0;
    YeniDugumTursihan->YukseklikZamani = 1; 
    return YeniDugumTursihan;
}

// yukseklige bakiyorum
int YukseklikTursihanGuncelle(AgacDugumZamani *DugumTursihan) {
    if (DugumTursihan == NULL) return 0;
    int SolYukseklikZamani = DugumTursihan->SolDugumTursihan ? DugumTursihan->SolDugumTursihan->YukseklikZamani : 0;
    int SagYukseklikZamani = DugumTursihan->SagDugumTursihan ? DugumTursihan->SagDugumTursihan->YukseklikZamani : 0;
    DugumTursihan->YukseklikZamani = fmax(SolYukseklikZamani, SagYukseklikZamani) + 1;
    return DugumTursihan->YukseklikZamani;
}


void DengeFaktorunuTursihanGuncelle(AgacDugumZamani *DugumTursihan) {
    if (DugumTursihan == NULL) return;
    int SolYukseklikZamani = DugumTursihan->SolDugumTursihan ? DugumTursihan->SolDugumTursihan->YukseklikZamani : 0;
    int SagYukseklikZamani = DugumTursihan->SagDugumTursihan ? DugumTursihan->SagDugumTursihan->YukseklikZamani : 0;
    DugumTursihan->DengeFaktorZamani = SolYukseklikZamani - SagYukseklikZamani; // Soldan sağı çıkar
}


void DugumuTursihanGuncelle(AgacDugumZamani *DugumTursihan) {
    if (DugumTursihan == NULL) return;
    YukseklikTursihanGuncelle(DugumTursihan);
    DengeFaktorunuTursihanGuncelle(DugumTursihan);
}

void AgaciTursihanGuncelle(AgacDugumZamani *DugumTursihan) {
    if (DugumTursihan == NULL) return;
    AgaciTursihanGuncelle(DugumTursihan->SolDugumTursihan);
    AgaciTursihanGuncelle(DugumTursihan->SagDugumTursihan);
    DugumuTursihanGuncelle(DugumTursihan);
}


AgacDugumZamani *AgaciTursihanOlustur(int DiziZamani[], int BoyutZamani) {
    if (BoyutZamani == 0) return NULL;
    AgacDugumZamani *DugumlerZamani[100] = {NULL};

    for (int i = 0; i < BoyutZamani; i++) {
        DugumlerZamani[i] = YeniDugumTursihanOlustur(DiziZamani[i], NULL);
    }

    for (int i = 0; i < BoyutZamani; i++) {
        if (DugumlerZamani[i] != NULL) {
            int SolIndeksZamani = 2 * i + 1;
            int SagIndeksZamani = 2 * i + 2;

            if (SolIndeksZamani < BoyutZamani && DugumlerZamani[SolIndeksZamani]) {
                DugumlerZamani[i]->SolDugumTursihan = DugumlerZamani[SolIndeksZamani];
                DugumlerZamani[SolIndeksZamani]->EbeveynDugumu = DugumlerZamani[i];
            }

            if (SagIndeksZamani < BoyutZamani && DugumlerZamani[SagIndeksZamani]) {
                DugumlerZamani[i]->SagDugumTursihan = DugumlerZamani[SagIndeksZamani];
                DugumlerZamani[SagIndeksZamani]->EbeveynDugumu = DugumlerZamani[i];
            }
        }
    } // dizilerim candir


 // Ceren onat 23291626.c
    
    AgaciTursihanGuncelle(DugumlerZamani[0]);

    return DugumlerZamani[0];
}

// in level order
void SeviyeyeGoreTursihanYazdir(AgacDugumZamani *KokDugumu) {
    if (KokDugumu == NULL) return;

    AgacDugumZamani *KuyrukDugumu[200];
    int OnZamani = 0, ArkaZamani = 0;
    KuyrukDugumu[ArkaZamani++] = KokDugumu;

    int IlkDugumZamani = 1;
    while (OnZamani < ArkaZamani) {
        int SeviyeBoyutuZamani = ArkaZamani - OnZamani;

        
        for (int i = 0; i < SeviyeBoyutuZamani; i++) {
            AgacDugumZamani *MevcutDugumTursihan = KuyrukDugumu[OnZamani++];

            
            if (!IlkDugumZamani) {
                printf(" ");
            }
            IlkDugumZamani = 0;

           
            if (MevcutDugumTursihan->EbeveynDugumu != NULL) {
                if (MevcutDugumTursihan->EbeveynDugumu->SolDugumTursihan == MevcutDugumTursihan) {
                    printf("%d (%d L)", MevcutDugumTursihan->degerZamani, MevcutDugumTursihan->EbeveynDugumu->degerZamani);
                } else {
                    printf("%d (%d R)", MevcutDugumTursihan->degerZamani, MevcutDugumTursihan->EbeveynDugumu->degerZamani);
                }
            } else {
                printf("%d", MevcutDugumTursihan->degerZamani); 
            }

          
            printf(" (%d B)", MevcutDugumTursihan->DengeFaktorZamani);

      
            if (MevcutDugumTursihan->SolDugumTursihan != NULL) {
                KuyrukDugumu[ArkaZamani++] = MevcutDugumTursihan->SolDugumTursihan;
            }

            
            if (MevcutDugumTursihan->SagDugumTursihan != NULL) {
                KuyrukDugumu[ArkaZamani++] = MevcutDugumTursihan->SagDugumTursihan;
            }
        }
        printf("\n"); 
        IlkDugumZamani = 1; 
    }
}

int main() {
    int DiziZamani[200], BoyutZamani = 0;

   
    while (1) {
        int degerZamani;
        scanf("%d", &degerZamani);
        if (degerZamani == -2) break;
        DiziZamani[BoyutZamani++] = degerZamani;
    }


    AgacDugumZamani *KokDugumu = AgaciTursihanOlustur(DiziZamani, BoyutZamani);     // binary tree;

    
    SeviyeyeGoreTursihanYazdir(KokDugumu); // finall boss yazimi iste zimbirti;
    // Ceren onat 23291626.c
    return 0;
}
