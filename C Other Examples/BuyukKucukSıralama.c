#include<stdio.h>
int main()
{
    int sayi;
    int enBuyuk,enKucuk;

    int adet = 5;

    printf("1. Sayı: ");
    scanf("%d",&sayi);
    enBuyuk=enKucuk=sayi; // 2

    for(int i=2;i<=adet;++i) {
       printf("%d. Sayı: ",i);
       scanf("%d",&sayi);

    if (sayi> enBuyuk)
       enBuyuk=sayi;
    if (sayi<enKucuk)
       enKucuk =sayi;}



printf("En büyük sayı: %d\n",enBuyuk);
printf("En küçük sayı: %d\n",enKucuk);


    
    












}