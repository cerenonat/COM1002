#include<stdio.h>
int main()
{

while (1)
   { printf("Bir sayı giriniz. Çıkmak için 'k'ye basınız: ");
   char harf;
   scanf("%c",&harf );
   if (harf == 'k')
    {  
       printf("Programdan çıkılıyor: ");
       break; 
       }
   int sayi;
   
   scanf("%d",&sayi);                        
   if (sayi < 0 )
       printf("%d sayısı negatif tam sayıdır.",sayi);
   else if (sayi == 0)
       printf("%d ne negatif ne de pozitif",sayi);
   else 
       printf("%d sayısı pozitif tam sayıdır.",sayi);}

return 0;

  
}



















}




































