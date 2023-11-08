#include<stdio.h>


int main(){

     int T;
     scanf("%d",&T);
     while(T--){
     int M,a,b,c;
     scanf("%d %d %d %d",&M,&a,&b,&c);
     int M2=a*b*c;
     if(M%M2==0){
     int missing = M/M2;
     printf("%d\n",missing);
     }
     else{
        printf("%d\n",-1);
     }
     
     }
    return 0;
}