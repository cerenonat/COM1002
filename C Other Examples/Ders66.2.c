#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int randomNumber,guessNumber=0,guessCount=0,score=100;
    srand(time(NULL));
    randomNumber=(rand()%100)+1;
    printf("1-100 arasında sayi tuttum...\n ");
    printf("Tahmin et! :  \n");
    
    while(guessNumber!=-1) {

        printf("Tahminini gir :  ");
        scanf("%d",&guessNumber);
        if (guessNumber==-1) break; 
        else if(guessNumber<1 || guessNumber>100){ 
            printf("\nHatalı giriş yaptınız.Sadece (1-100) ya da çıkış -1");
            continue;

        } 
        
        guessCount++;
        if(guessNumber==randomNumber){ //Buraya else if yazarsam bozuluyor.
            printf("Tebrikler %d. tahminde gerçekten doğru tahmin ettiniz.\n",guessCount);
            break;}


      else{
        if(guessNumber<randomNumber){
         printf("Maalesef yanlış.Denemeye devam et.Tuttuğum sayı daha büyük.\n");  }
        

        else{
         printf("Maalesef yanlış.Denemeye devam et.Tuttuğum sayı daha küçük.\n");  }

        score+=-10;  
    } 






} printf("\n Puanın 100 üzerinden %d",score<0 ? 0 : score);


 }