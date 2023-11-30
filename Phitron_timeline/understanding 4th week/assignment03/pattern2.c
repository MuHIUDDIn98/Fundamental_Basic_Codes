#include<stdio.h>


int main(){

     int n,num=1;
     scanf("%d",&n);
     int space=n-1;
     for(int i=1; i<=n; i++){
            for(int j=1; j<=space; j++){
                printf(" ");
            }
        
            for(int j=num;j>0; j--){
                
            printf("%d",j);
            }
            num++;
            space--;
            
            printf("\n");
           
           
          
      }
    return 0;
}