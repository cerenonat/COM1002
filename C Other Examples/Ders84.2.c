#include<stdio.h>
int main()
{
    int i,j,size;
    printf("Enter the size of the square matrix(x<10): ");
    scanf("%d",&size);
    int matrix[size][size];
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            matrix[i][j]=0;
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(i==j)
              matrix[i][j]=1;
        } }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(i+j==(size-1))
              matrix[i][j]=1;
        }
        
    }

    
     for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%4d",matrix[i][j]);
        }
        printf("\n\n");
        

    }

}