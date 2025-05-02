//Girilen Sayıya Kadar Olan Tüm Asal Sayıları Ekrana Yazdırma
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int control,number,i,j;
    printf("Enter a number:");
    scanf("%d",&number);

    for (i=2;i<=number;i++)    {  
        control=1;
        for(j=2;j<=i/2;j++) {
            if (i%j==0) {
                control=0;
               
     
            } }
            if (control!=0) {
    printf("%d ",i);}

    }



    







    








}