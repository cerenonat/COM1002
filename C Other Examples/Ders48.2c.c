#include<stdio.h>
int main()
{

    
    char charachter='A',input ;
    int i,j;
    printf("Enter an uppercase letter: ");
    scanf("%c",&input);

    for(i=1;i<=input-'A'+1;i++){
            for(j=1;j<=i;j++){
                printf("%c",charachter);




            }
            charachter++;
            printf("\n");



    }

















}