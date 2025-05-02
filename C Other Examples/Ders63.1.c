#include<stdio.h>
#include<math.h>


int main()
{

  int number,number1,number2,i;
  printf("Enter a number: ");
  scanf("%d",&number);
  for(i=0;i<=number;i++){

     printf("e üssü %d = %.2f\n",i,exp2(i));




  }
  printf("Enter a number: ");
  scanf("%d",&number);

  for(i=0;i<=number;i++){
    
    printf("2 üssü %d = %.2f\n",i,exp2(i));


  }
   printf("Enter a number: ");
  scanf("%d",&number);
  for(i=1;i<=20;i++)
  {
      printf("Karekök %d = %.2f\n",i,sqrt(i));
  }
  printf("Enter two numbers: ");
  scanf("%d%d",&number1,&number2);
  printf("%d üssü %d = %.2f",number1,number2,pow(number1,number2)); //Şu ikincinin f olması konusunda ısrarco

 







}