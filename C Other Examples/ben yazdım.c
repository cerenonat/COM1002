#include<stdio.h>
int main()
{
  while (1)
  { int sayi;
    printf("Bir sayı girin. (Çıkmak için q tuşuna basın)");
    if (scanf("%d", &sayi)== 1) 
    {   if ( sayi == 0 )
           printf("0 ne pozitif ne de negatif.");
        else if ( sayi > 0)
           printf("%d pozitif bir sayıdır.", sayi);
        else 
           printf("%d negatif bir sayıdır." ,sayi);
         } else {
           char c = 'k';
           scanf(" %c", &c);
           if (c == 'q') {
            printf("Çıkılıyor." );        
            break;     }

            else {  printf(" Hatalı giriş yaptınız. Lütfen sayı girin ya da q tuşlayarak koddan çıkın.");
            }
              
        

           



         
         

         }
         
        






  }































}