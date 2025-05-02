#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int square,i;
    square=1;
    float sum=0.0;
    i=0;
    while (square<=64) {

    sum+= pow(2,i);

    printf("%dth square has %.2f wheats and summary is %.2f\n",i+1,pow(2,i),sum);

    
    i++;

    square++;
    
    
    }
    printf("Summary of wheat: %.2f",sum);
    
}