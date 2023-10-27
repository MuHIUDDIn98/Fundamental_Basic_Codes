#include<stdio.h>


int main(){

     int n,star;
     scanf("%d",&n);
    int space = 0;
    star = 2*n-1;

     for(int i=1; i<=n; i++){
            for(int j=1; j<=space; j++){
                printf(" ");
            }
            for (int k =1; k<=star; k++){
                printf("*");
            }
        space++;
        star-=2;
        printf("\n");

     }
    return 0;
}