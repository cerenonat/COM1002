#include<stdio.h>
 int main()

 {
    int i,j,rows;
    printf("Enter the rows you'd like to have: ");
    scanf("%d",&rows);
  for(i=1;i<=rows;i++){
    for(j=1;j<=rows-i;j++){
        printf("  ");
    } for(j=1;j<=2*i-1;j++)
       {printf("* ");}
          printf("\n");

  }

    
    for(i=rows;i>=1;i--){
        for(j=1;j<=rows-i;j++){
           



            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
               

        
         
    
         printf("* ");

         

    } printf("\n");
 
         









 }



 } 