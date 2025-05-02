#include<stdio.h>

void BirlikCevir(int);
void OnlukCevir(int);

int main()
{
    int number,d1,d2,d3,d4;
    while(number!=-1){
    printf("\nEnter a four digit number: ");
    scanf("%d",&number);
    if(number==-1) break;
    d1= number%10; //Birler
    d2= (number%100)/10; //Onlar
    d3= (number%1000)/100; //Yüzler
    d4= number/1000; //Binler
    if(d4!=1) BirlikCevir(d4);
    printf(" Bin ");
    if(d3!=1) BirlikCevir(d3);
    if(d3!=0) printf(" Yuz ");

    OnlukCevir(d2); 
    printf(" ");
    BirlikCevir(d1);
   


    }
   










return 0;
}
void BirlikCevir(int number){
    switch(number){
        case 1: printf("Bir");
        break;
        case 2: printf("İki");
        break;
        case 3: printf("Uc");
        break;
        case 4: printf("Dort"); break;
        case 5: printf("Bes"); break;
        case 6: printf("Alti"); break;
        case 7: printf("Yedi"); break;
        case 8: printf("Sekiz"); break;
        case 9: printf("Dokuz"); break;
    }
}
void OnlukCevir(int number){    
    switch(number){
        case 1: printf("On");
        break;
        case 2: printf("Yirmi");
        break;
        case 3: printf("Otuz");
        break;
        case 4: printf("Kırk"); break;
        case 5: printf("Elli"); break;
        case 6: printf("Altmış"); break;
        case 7: printf("Yetmiş"); break;
        case 8: printf("Seksen"); break;
        case 9: printf("Doksan"); break;
    }
}