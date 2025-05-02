#include<stdio.h>
void countCharachters(char x[],int y[]);
int main(){
    char x[100];
    int  y[26],i=0;
    printf("Enter a sentence: ");
    do{
        scanf("%c",&x[i]); 
       
        i++; // Noktayı da aldı. Sonrasında bir öncesi 4 ü kontrol etti onun da . olduğunu gördü ve bitirdi
    }while(x[i-1]!='.'); 
    countCharachters(x,y);
    for(i=0;i<26;i++){
        printf("%c/%c: %d\n",'A'+i,'a'+i,y);
    
    }

    return 0;


}
void countCharachters(char x[],int y[]){
    int i,j;
    for(i=0;i<26;i++){
        y[i]=0;
    }
    for(i=0;x[i]!='.',i++){
        if(x[i]>='A' && x[i]<'Z')
         y[(int)x[i]-(int)'A']++;

    }
}