#include<stdio.h>


int main(){

     int a;
     scanf("%d",&a);
     if(a>=999 && a<=9999){
        a/=1000;
        if(a%2 == 0){
            printf("EVEN\n");
        }
        else{
            printf("ODD\n");

        }

     }
     
    return 0;
}