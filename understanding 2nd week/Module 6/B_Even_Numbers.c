#include<stdio.h>


int main(){

     
     int n,i;
     int j = -1;
     scanf("%d",&n);

     if(n==1){
         printf("%d\n",j);
     }
     else if(n>1){
        for(i=1; i<=n; i++){
            if(i%2 == 0){
                printf("%d\n",i);
            }

        }
     }
    
    return 0;
}