#include<stdio.h>
#include<math.h>

int main()
{
      double a, b, c;
      printf("Denklemin katsayılarını giriniz.\n");
      printf("a =  ");
      scanf("%lf", &a);
      printf("b =  ");
      scanf("%lf", &b);
      printf("c =  ");
      scanf("%lf",&c);
      double delta = b * b - 4 *  a * c ;
      if (delta > 0) {
        double root1 = (-b + sqrt(delta)) / (2 * a );
        double root2 = (-b - sqrt(delta)) / (2 * a);
        printf("Denklemin kökleri %.2lf ve %.2lf'tir. ",root1,root2);
     }
      else if (delta == 0) 
     {  double root = (-b / (2 * a)) ;
        printf("Denklemin kökleri birbirine eşit ve %.2f'tir.",root);
     }
       else
        printf("Denklemin gerçel kökü yoktur.") ;   





     return 0;











}