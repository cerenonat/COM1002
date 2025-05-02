#include<stdio.h>
#include<stdlib.h>
int main()
{
    double myValue,myArray[10];
    int choice,index,i;
    do{
        printf("Make a choice.(-1 to Exit)\n");
        printf("\t1 for to write to array\n");
        printf("\t2 to read from array\n");
        scanf("%d",&choice);
        if(choice==-1){
            printf("Exiting..");
            break;
        }
        if(choice != 1 && choice!=2){

         printf("You made a wrong choice.\n");
        continue;
        }
       
            printf("Enter an index: ");
            scanf("%d",&index);
            if(index<0 || index>9){
                printf("Index should be in the range of 0-9.\n");
                continue; }
            switch(choice){
                case 1: printf("\nEnter the value: ");
                scanf("%lf",&myValue); myArray[index]=myValue; 
                printf("The write operation is succesful.\n\n");
                case 2: printf("myArray[%d]=%.2lf\n",index,myArray[index]);



            }
           

        }while(myValue!=-1);







    }







     





