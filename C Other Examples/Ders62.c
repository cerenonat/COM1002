#include<stdio.h>
int CeltoFac(int);
int FactoCel(int);
int main(){

     int number;
     char character;
     printf("Calcius to Fahrenheit 'c' \n" );
     printf("Fahrenheit to Celcius 'f' \n");
     printf("Enter your choice: ");
     scanf("%c",&character);

     switch(character){
        case 'c': printf("Enter the number of celcius: ");
        scanf("%d",&number); 
        printf("Fahrenheit: %d",CeltoFac(number)); break;
        case 'f': printf("Enter the number of fahrenheit: ");
        scanf("%d",&number);  printf("Celcius: %d",FactoCel(number));
        break;
        




     }
     




}
int CeltoFac(int number){
    return number*9/5 +32;

}
int FactoCel(int number){

    return (number-32)*5/9;
}