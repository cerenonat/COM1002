#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>



 
int main(){

    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("\n The character you entered:%c\n",number);
    if(isalnum(number)) // A-Z a-z 0-9 dan biri ise calisir
        printf("Correct");
    else printf("Wrong");

  //isalnum A-Z a-z 0-9 dan biri ise çalısir
  //islower,isupper,isspace
    





}
    





