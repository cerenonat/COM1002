#include<stdio.h>
/* array miktari al, sayilari al,ekrana cift tek yaz*/


int i,number;
void enter();
void original();
void even();
void odd();
int myArray[100];


int main(){
printf("Enter the amount of elements: ");
scanf("%d",&number);
enter();








 
 printf("\nThe original array: ");
 original();
 printf("\nEven numbers in array: ");
 even();
 printf("\nOdd numbers in array: ");
 odd();

}
void enter(){
    
    printf("Enter the numbers: ");
    for(i=0;i<number;i++){
        scanf("%d",&myArray[i]);

    }
    


}

void original(){
  
    for(i=0;i<number;i++){
        printf("%d ",myArray[i]);

    }


}

void even(){

    for(i=0;i<number;i++){
        if(myArray[i]%2==0)
         printf("%d ",myArray[i]);
        else continue;
        

    }
    

}

void odd(){

    for(i=0;i<number;i++){
        if(myArray[i]%2!=0)
         printf("%d ",myArray[i]);
        else continue;
        

    }
    

}