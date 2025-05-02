#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int notes[]= {7,19,24,3,37};
    int i;
    printf("%d\n",notes[2]); // 0,1 atla 2.yi yazdır
    notes[3]=9; // Errayde degistirme yapmak
    printf("%d\n",notes[3]); //Degistirmeyi onaylattım
    for(i=0;i<5;i++){ //Tüm kümeyi yazdırıyorum i den yararlanarak
        printf("%d\n",notes[i]);
    }
    int criminals[3];
    criminals[0]=5;
    criminals[1]=8;
    criminals[2]=13;
     for(i=0;i<3;i++){
        printf("%d\n",criminals[i]);
    }
    i=0; int sum=0;
    sum= notes[0]+ criminals[2]; // 7 + 13 = 20
    printf("%d",sum);
    

    return 0;



}