#include<stdio.h>
int main(){

   int i=3;
   while(i<=5){
    printf("%d\n", i);
    for(int j=0; j<i; j++){
        printf("*");
    }
    printf("\n");
    i++;
   }
    return 0;
}