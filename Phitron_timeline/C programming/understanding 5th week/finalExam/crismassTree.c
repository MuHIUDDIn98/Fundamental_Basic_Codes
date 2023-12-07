#include<stdio.h>


int main(){

     int n=0,k=0,star=1;
     scanf("%d",&k);
     if(k>=1 && k<=21 && k%2!=0){
         if(k==1) n=6;
         if(k==3) n=7;
         if(k==5) n=8;
         if(k==7) n=9;
         if(k==9) n=10;
         if(k==11) n=11;
         if(k==13) n=12;
         if(k==15) n=13;
         if(k==17) n=14;
         if(k==19) n=15;
         if(k==21) n=16;
     
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

     for(int i=0; i<5; i++){
        for(int s=0; s<5; s++){
         printf(" ");
        }
        for(int j=0; j<k; j++){
         printf("*");
        }
        printf("\n");
     }
    return 0;
}