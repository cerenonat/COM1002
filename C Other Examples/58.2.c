#include<stdio.h>
#include<math.h>


float square(int x);



int main()
{


   float squareResult=  square(3);
    printf("Result is %.2f .",squareResult);










}
float square(int i){
    float result= sqrt(i);
    return result;



}