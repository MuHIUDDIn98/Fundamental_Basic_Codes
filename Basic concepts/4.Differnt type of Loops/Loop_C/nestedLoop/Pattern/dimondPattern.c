#include<stdio.h>


int main(){

     int n,star=1;
     scanf("%d",&n);
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
     space = 0;
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