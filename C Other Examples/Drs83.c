#include<stdio.h>
int main()
{
int rows,columns,i,j;
printf("Enter the number of rows: ");
scanf("%d",&rows);
printf("Enter the number of columns: ");
scanf("%d",&columns);
int matrix[rows][columns];

for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        printf("\nmatrix[%d][%d]= ",i,j);
        scanf("%d",&matrix[i][j]);
    }
}
printf("Your array\n");
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        printf("%4d",matrix[i][j]);
      
    }
    printf("\n\n");
}




return 0;
        
    
}