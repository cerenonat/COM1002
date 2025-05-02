#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[]="Ceren";
    printf("%s\n",name); // Tamamı için s. Tüm karakter
    printf("%c\n",name[0]);
    printf("%c\n",name[2]); // Parçası için c. Tek karakteri okur c (char)
    printf("****************\n");
   

    char yname[30];
    printf("Enter your name:  ");
    scanf("%s",yname); // & koymaya gerek yok tek bir ifade alır.
   

    printf("Your name is %s\n",yname);









}