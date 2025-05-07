#include<stdio.h>
int main(){

   int n;
   int val=1;
   
   scanf("%d",&n);
   int space= n-1;
   for(int i=1;i<=n;i++){

    for(int i=0; i<space;i++){
        printf(" ");
    }
    for(int j=1;j<=val;j++){
        
        printf("%d",j);
    }
    printf("\n");
    val+=1;
    space-=1;
   }
    return 0;
}