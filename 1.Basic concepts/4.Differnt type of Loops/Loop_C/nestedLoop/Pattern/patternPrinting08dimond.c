#include<stdio.h>


int main(){

     int n;
     scanf("%d",&n);
     int space=n-1, star=1 ,line =2*n-1;
     for(int i=1; i<=line; i++){
            for(int j=1; j<=space; j++){
                printf(" ");
            }
        
            for(int j=1; j<=star; j++){
                    printf("*");
                }
            if(i<=n-1){
            space--;
            star+=2;
            printf("\n");

            }
            else{
              space++;
            star-=2;
            printf("\n");  
            }
           
          
      }
    return 0;
}