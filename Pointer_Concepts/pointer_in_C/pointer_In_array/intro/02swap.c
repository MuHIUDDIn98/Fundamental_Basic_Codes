#include<stdio.h>

int swapa(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){

   int a=5;
   int b=4;
   printf("before swap a = %d ,  b = %d\n",a,b);
   swapa(&a,&b);
   printf("after  swap a = %d ,  b = %d",a,b);
    return 0;
}