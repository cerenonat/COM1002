// Girilen N sayısına göre 1’den N ye kadar olan tek sayıların toplamı ve çarpımını, çift sayıların ise karelerinin toplamını bulan kod
#include<stdio.h>
int main()

{ 
  int Tekcarpim= 1;
  int TekToplam= 0 ;
  int CiftKare = 0;
  
  
  int sayi;
  printf("Sayı girin: ");
  scanf("%d",&sayi);
  int i = 1;
  
  while (i <= sayi) {
      if (i%2 == 0) {
         int kare = i * i ;
         CiftKare += kare;}
    
    
      else 
      {
         
         TekToplam += i;  
        
         Tekcarpim *= i; 
         }
         
      i++; }

         
  
  
   printf("Çift sayıların kareleri toplamı: %d\n",CiftKare);
   printf("Tek sayıların çarpımları  %d\n",Tekcarpim);
   printf("Tek sayıların  toplamı %d\n",TekToplam);       





      
        




  
    
  
    

  



}







