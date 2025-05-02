#include<stdio.h>
int main()
{
    int size,i,little=101,bigIndex,big=0,smallIndex;
    int notes[100],stdNo[100];
    printf("Enter the class size:  ");
    scanf("%d",&size);
     for(i=0;i<size;i++){
       printf("Student No and Note: ");
       scanf("%d%d",&stdNo[i],&notes[i]);}
    
    for(i=0;i<size;i++){
        if(notes[i]>big){
        big=notes[i];
        bigIndex=i;}
        }
        

    
    for(i=0;i<size;i++){

        if(notes[i]<little){
            little=notes[i];
            smallIndex=i;
        }

    }

printf("The student who have the largest note and their succes: %d , %d ",stdNo[bigIndex],big);
  printf("\nThe student who have the lowest note and their succes: %d , %d ",stdNo[smallIndex],little);}






