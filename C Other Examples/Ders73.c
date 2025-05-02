#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int i,dice,howMany[7]={0,0,0,0,0,0,0};
    srand(time(NULL));
    for(i=1;i<=100;i++){

        dice=rand()%6+1;
        howMany[dice]++;

    }
        printf("Zar numarası:\tKaç Defa Geldi\n");
     for(i=1;i<7;i++){

        printf("%d\t\t%d\n",i,howMany[i]);
     }




}