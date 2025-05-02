#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
    int i,number=0;;
    srand(time(NULL));
    
    for(i=1;i<=10;i++){
        number=rand()%6+1; // 6 ya kadar 0 yok.
        printf("%d.sayi %d\n",i,number);





    }






}