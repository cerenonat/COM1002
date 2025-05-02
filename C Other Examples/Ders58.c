#include<stdio.h>
#include<stdlib.h> 

void menu();
int min(int,int) ;
int max(int ,int);
int square(int);
int cube(int);
int absolute(int);


int main()
{
    int choose=0,x,y;
    menu();
    printf("\nChoose a number (1-5): ");
    scanf("%d",&choose);
    printf("\n");
    switch(choose){
     case 1: printf("Enter two numbers: ");
            scanf("%d%d",&x,&y);
            printf("Min: %d\n",min(x,y));
     break;

     case 2: printf("Enter two numbers: ");
            scanf("%d%d",&x,&y);
            printf("Max: %d\n",max(x,y));
     break; 

     case 3: printf("Enter one number: ");
            scanf("%d",&x);
            printf("Square: %d\n",square(x));
     break;

     case 4: printf("Enter one number: ");
            scanf("%d",&x);
            printf("Cube: %d\n",cube(x));
     break;

     case 5:  printf("Enter one number: ");
            scanf("%d",&x);
            printf("Absolute value: %d\n",absolute(x));
     break;

     default: printf("\nYou entered a wrong number.Try again...");





    }

    return 0;
}

void menu()

{

    printf("\n");
    printf("***************\n");
    printf("*     MENU    *\n");
    printf("***************\n\n");
    printf("1-Minimum\n");
    printf("2-Maxiumum\n");
    printf("3-Kare\n");
    printf("4-Kup Al\n");
    printf("5-Mutlak Değer\n");




}
int min(int x,int y) {

    if(x<y){
        return x;}
    
    else {
        return y;
    }
}
int max(int x,int y) {

    if(x<y){
        return y;}
    
    else {
        return x;
    }
}

int square(int x){
    return x*x;



}

int cube(int x) {
 return x*x*x;



}
int absolute(int x){
    if(x<0)
    return x * (-1) ;
    else
    return x;
}



 