#include<stdio.h>
int factorial(int);
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    printf("%d!=%d",number,factorial(number));








}

int factorial(int x) {

    if(x==0)
    return 1;
    else
    return x*factorial(x-1);




}