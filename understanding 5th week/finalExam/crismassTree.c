#include<stdio.h>


int main(){

     int n=0,k=0,star=1;
     scanf("%d",&k);
     if(k>=1 && k<=21 && k%2!=0){
         n=k+5;
     }
    int space =n-1;

     for(int i=1; i<=n; i++){
            for(int j=1; j<=space; j++){
                printf(" ");
            }
            for (int k = 1; k<=star; k++){
                printf("*");
            }
        space=space-1;
        star+=2;
        printf("\n");

     }
    return 0;
}