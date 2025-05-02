#include<stdio.h>
int main()
{
 int i,j,sum;
 int matrix[5][5]={
    {5,3,7,0,19},
    {2,8,10,1,3},
    {6,4,1,9,0},
    {15,7,2,4,8},
    {1,14,2,3,10}

 };
 for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("%4d",matrix[i][j]);
    }
    printf("\n\n"); // 00 10 20 30 40 
 }
 printf("\n");

 for(i=0;i<5;i++){
    for(j=0;j<5;j++){

        sum+=matrix[i][j];
    }
    printf("%d.satir toplamı: ",i+1);
    printf("%d\n",sum);
    sum=0;
 }
 printf("\n\n");

 for(j=0;j<5;j++){
    for(i=0;i<5;i++){

        sum+=matrix[i][j];
    }
    i=0;
    printf("%d.sutun toplamı: ",i+1);
    printf("%d\n",sum);
    sum=0;
 }






 
 }