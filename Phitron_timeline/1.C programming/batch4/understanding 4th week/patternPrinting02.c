#include<stdio.h>


int main(){

     int n,k=4;

     scanf("%d",&n);
     for(int i=1; i<=n; i++){
        for(int j=k; j>0; j--){       
        printf("*");
        }
        printf("\n");
        k--;
     }
    return 0;
}