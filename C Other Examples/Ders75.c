#include<stdio.h>
#include<stdlib.h>
void sortIt();
void writeTheArray();
void writeTheArrayReverse();
int numbers[7];
int i;


int main()
{

    printf("Enter 7 array numbers : ");
    for(i=0;i<7;i++){
        scanf("%d",&numbers[i]);}
    printf("\n Before sorting: \n");
    writeTheArray();
    printf("\n The array is sorting...\n");
    sortIt();
    printf("\n After the sorting\n");
    writeTheArray();
    

    return 0;
     
 }

void sortIt() {

    int j,reserve;
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(numbers[j]<numbers[i]){ 
                reserve=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=reserve;

            }
        }
    }



}
void writeTheArray(){ 
    for(i=0;i<7;i++){
        printf("%d ",numbers[i]);
}  printf("\n"); }

void writeTheArrayReverse(){
    for(i=6;i>=0;i--){
        printf("%d ",numbers[i]);
    }
printf("\n");}