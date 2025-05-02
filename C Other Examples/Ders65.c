#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    double x=19,y=0.12,z=7.14/0.00;
    printf("%.2f değeri sonsuz bir deger%s.\n",x,isfinite(x)? " degildir" : "dir");
    printf("%.2f degeri sonuz bir deger%s.\n",y,isfinite(y)? " degildir" : "dir");
    printf("%.2f degeri sonsuz bir deger%s\n",z,isfinite(z)? " degildir" : "dir");

    printf("%.2f değeri %.2f degerinden%s",x,y,isgreater(x,y)? " büyüktür\n": " küçüktür.\n");
    printf("%d",isgreater(x,y));
    












}